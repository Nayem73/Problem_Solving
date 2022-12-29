g++ -O2 -std=c++17 -Wno-unused-result -Wshadow -Wall -o $1 $1.cpp
./$1 < $2