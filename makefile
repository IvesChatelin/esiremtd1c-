bank : main.o client.o compte.o adresse.o
	g++ -o bank client.o main.o compte.o adresse.o

adresse.o: cpp/adresse.cpp
	g++ -c cpp/adresse.cpp

compte.o : cpp/compte.cpp
	g++ -c cpp/compte.cpp

main.o : main.cpp
	g++ -c main.cpp 

client.o : cpp/client.cpp
	g++ -c cpp/client.cpp 

clean : 
	rm -rf *.o 

mrproper : clean
	rm -rf bank