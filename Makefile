# build
main.out: main.o aereos.o Carnivoros.o Cuidador.o Dinosaurio.o herbivoros.o Marinos.o omnivoros.o oviraptor.cpp Spinosauro.cpp triceratops.cpp Tyranosaurio.cpp
	g++ main.o aereos.o Carnivoros.o Cuidador.o Dinosaurio.o herbivoros.o Marinos.o omnivoros.o oviraptor.cpp Spinosauro.cpp triceratops.cpp Tyranosaurio.cpp -o main.out

# Dinosaurio
Dinosaurio.o: Dinosaurio.h Dinosaurio.cpp
	g++ -c Dinosaurio.cpp

# Carnivoros
Carnivoros.o: Carnivoros.h Dinosaurio.h Carnivoros.cpp
	g++ -c Carnivoros.cpp

# Tyranosaurio
Tyranosaurio.o: Tyranosaurio.h Carnivoros.h Tyranosaurio.cpp
	g++ -c Tyranosaurio.cpp

# Pelaje
Pelaje.o: Pelaje.h Pelaje.cpp
	g++ -c Pelaje.cpp

# Ojos
Ojos.o: Ojos.h Ojos.cpp
	g++ -c Ojos.cpp

# Orejas
Orejas.o: Orejas.h Orejas.cpp
	g++ -c Orejas.cpp

# Cola
Cola.o: Cola.h Cola.cpp
	g++ -c Cola.cpp

# main
main.o: Zoologico.h Animal.h Patas.h Pelaje.h Ojos.h Orejas.h Cola.h main.cpp
	g++ -c main.cpp

# clean
.PHONY: clean
clean:
	rm *.o main.out