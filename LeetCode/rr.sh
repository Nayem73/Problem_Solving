g++ -Wall -o $1 $1.cpp -std=c++17 -Wshadow -fsanitize=address -fsanitize=undefined -g -Woverflow
./$1 < $2