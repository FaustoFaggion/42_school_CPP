#!/bin/bash

valgrind --leak-check=full --show-leak-kinds=all ./convert nan
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert nanf
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert +inf
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert +inff
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert -inf
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert -inff
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert 42
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert 42.0
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert 42.4f
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert a
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert \
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert Ze
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert 22222222222222222222
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert -3333333333333333333
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert 
valgrind --leak-check=full --show-leak-kinds=all ./convert
./convert
./convert
