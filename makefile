pam: deposit.o main.o withdraw.o balance.o
	g++ -std=c++11 deposit.o main.o withdraw.o balance.o -o banker -lreadline

deposit.o: deposit.cpp deposit.hpp
	g++ -std=c++11 -c deposit.cpp

main.o: deposit.hpp withdraw.hpp main.cpp
	g++ -std=c++11 -c main.cpp

balance.o: balance.hpp balance.cpp
	g++ -std=c++11 -c balance.cpp

withdraw.o: withdraw.hpp withdraw.cpp
	g++ -std=c++11 -c withdraw.cpp
