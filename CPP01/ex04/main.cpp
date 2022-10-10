#include <iostream>
#include <string.h>
#include <fstream>

int	loadFileBuffer(std::string file, std::string& fileBuffer){
	
	std::fstream	readFile;
	std::string		buff;

	readFile.open (file, std::fstream::in | std::fstream::out);
	if (readFile.fail()){
		std::cout << "read_file fail to open!!" << std::endl;
		return (1);
	}

	while (!readFile.eof()){
		std::getline(readFile, buff);
		fileBuffer += buff;
		fileBuffer += "\n";
	}
	readFile.close();
	return (0);
}

int main (int argc, char *argv[]) {

	
	std::fstream	writeFile;
	std::string		buff;
	std::string		fileBuffer;
	std::size_t		index;

	if (argc != 4){
	std::cout << "Enter incorrect number of arguments!!!" <<std::endl;
	}
	
	writeFile.open ("write_file", std::fstream::in | std::fstream::out | std::fstream::trunc);
	if (writeFile.fail()){
		std::cout << "write_file fail to open!!" << std::endl;
		return (1);
	}
	loadFileBuffer(argv[1], fileBuffer);
	
	
	buff = argv[2];
	std::string pat(argv[3]);
	index = 0;
	while (1){
		index = fileBuffer.find(buff, index);
		if (index == std::string::npos)
			break ;
		fileBuffer.erase(index, buff.length());
		fileBuffer.insert(index, pat);
		index += pat.length();
	}

	writeFile << fileBuffer;

	
	writeFile.close();
	return 0;
}