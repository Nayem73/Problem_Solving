g++ -O2 -std=c++17 -Wno-unused-result -Wshadow -Wall -o $1 $1.cpp
g++ -O2 -std=c++17 -Wno-unused-result -Wshadow -Wall -o $2 $2.cpp
./$1 < $3
./$2 < $3