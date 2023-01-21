#include <iostream>
#include <string.h>
#include <fstream>

int	loadFileBuffer(char *file, std::string& fileBuffer){
	
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

static std::string	write_name(std::string filename) {

	std::string	write_file;

	int dot = 0;
	dot = filename.find('.');
	if (dot > 0) {
		write_file.append(filename, 0, dot);
		write_file.append(".replace");
	}
	else{
		write_file.append(filename);
		write_file.append(".replace");
	}
	return (write_file);
}

int main (int argc, char *argv[]) {

	
	std::string		write_file_name;
	std::fstream	writeFile;
	std::string		buff;
	std::string		fileBuffer;
	std::size_t		index;

	if (argc != 4){
		std::cout << "Enter incorrect number of arguments!!!" <<std::endl;
		return (1);
	}
	
	write_file_name = write_name(argv[1]);

	writeFile.open (write_file_name.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
	if (writeFile.fail()){
		std::cout << "write_file fail to open!!" << std::endl;
		return (1);
	}
	loadFileBuffer(argv[1], fileBuffer);
	
	
	buff = argv[2];
	std::string patch(argv[3]);
	index = 0;
	while (1){
		index = fileBuffer.find(buff, index);
		if (index == fileBuffer.npos)
			break ;
		fileBuffer.erase(index, buff.length());
		fileBuffer.insert(index, patch);
		index += patch.length();
	}

	writeFile << fileBuffer;

	
	writeFile.close();
	return 0;
}