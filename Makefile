exe:	main.o oviraptor.o triceratops.o Spinosauro.o Tyranosaurio.o Cuidador.o Marinos.o aereos.o omnivoros.o herbivoros.o Carnivoros.o Dinosaurio.o
	g++ main.o oviraptor.o triceratops.o Spinosauro.o Tyranosaurio.o Cuidador.o Marinos.o aereos.o omnivoros.o herbivoros.o Carnivoros.o Dinosaurio.o -o exe
main.o: main.cpp oviraptor.h triceratops.h Spinosauro.h Tyranosaurio.h Cuidador.h Marinos.h aereos.h omnivoros.h herbivoros.h Carnivoros.h Dinosaurio.h
	g++ -c main.cpp
oviraptor.o:	oviraptor.cpp oviraptor.h Dinosaurio.h omnivoros.h
	g++ -c oviraptor.cpp
triceratops.o:	triceratops.cpp triceratops.h Dinosaurio.h herbivoros.h
	g++ -c triceratops.cpp
Spinosauro.o:	Spinosauro.cpp Spinosauro.h Dinosaurio.h Carnivoros.h
	g++ -c Spinosauro.cpp
Tyranosaurio.o:	Tyranosaurio.cpp Tyranosaurio.h Dinosaurio.h Carnivoros.h
	g++ -c Tyranosaurio.cpp
Cuidador.o:	Cuidador.cpp Cuidador.h Dinosaurio.h
	g++ -c Cuidador.cpp
Marinos.o:	Marinos.cpp Marinos.h Dinosaurio.h
	g++ -c Marinos.cpp
aereos.o:	aereos.cpp aereos.h Dinosaurio.h
	g++ -c aereos.cpp
omnivoros.o:	omnivoros.cpp omnivoros.h Dinosaurio.h
	g++ -c omnivoros.cpp
herbivoros.o:	herbivoros.cpp herbivoros.h Dinosaurio.h
	g++ -c herbivoros.cpp
Carnivoros.o:   Carnivoros.cpp  Carnivoros.h Dinosaurio.h
	g++ -c Carnivoros.cpp
Dinosaurio.o:   Dinosaurio.cpp Dinosaurio.h
	g++ -c Dinosaurio.cpp