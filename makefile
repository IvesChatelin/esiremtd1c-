bank : main.o client.o compte.o
	g++ -o bank client.o main.o compte.o

compte.o : compte.cpp
	g++ -c compte.cpp

main.o : main.cpp
	g++ -c main.cpp 

client.o : client.cpp
	g++ -c client.cpp 

clean : 
	rm -rf *.o 

mrproper : clean
	rm -rf bank