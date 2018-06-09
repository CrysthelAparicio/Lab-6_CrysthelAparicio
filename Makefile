main:	main.cpp Dinosaurio.o Carnivoros.o herbivoros.o triceratops.o Spinosauro.o Tyranosaurio.o aereos.o Marinos.o omnivoros.o oviraptor.o Cuidador.o
	g++ main.cpp Dinosaurio.o Carnivoros.o herbivoros.o triceratops.o Spinosauro.o Tyranosaurio.o aereos.o Marinos.o omnivoros.o oviraptor.o Cuidador.o -o main

main.o:	main.cpp Dinosaurio.h Carnivoros.h herbivoros.h triceratops.h Spinosauro.h Tyranosaurio.h aereos.h Marinos.h omnivoros.h oviraptor.h cuidador.h
	g++ -c main.cpp

Dinosaurio:	Dinosaurio.cpp Dinosaurio.h
	g++ -c Dinosaurio.cpp

Carnivoros:	Carnivoros.cpp Carnivoros.h
	g++ -c Carnivoros.cpp

herbivoros:	herbivoros.cpp herbivoros.h
	g++ -c herbivoros.cpp

triceratops:	triceratops.cpp triceratops.h
	g++ -c triceratops.cpp

Spinosauro:	Spinosauro.cpp Spinosauro.h
	g++ -c Spinosauro.cpp

Tyranosaurio:	Tyranosaurio.cpp Tyranosaurio.h
	g++ -c Tyranosaurio.cpp

aereos:	aereos.cpp aereos.h
	g++ -c aereos.cpp

Marinos:	Marinos.cpp Marinos.h
	g++ -c Marinos.cpp

omnivoros:	omnivoros.cpp omnivoros.h
	g++ -c omnivoros.cpp

oviraptor:	oviraptor.cpp oviraptor.h
	g++ -c oviraptor.cpp

Cuidador:	Cuidador.cpp Cuidador.h
	g++ Cuidador.cpp
clean:
	rm  *.o main 
