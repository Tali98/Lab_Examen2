main.out:	main.o Obstaculo.o Item.h Jugador.o bombas.h Normal.o Espina.o V.o
	g++ main.o Obstaculo.o Item.h Jugador.o bombas.h Normal.o Espina.o V.o -o main.out

main.o:	main.cpp Obstaculo.h Item.h Jugador.h bombas.h Normal.h Espina.h V.h
	g++ -c main.cpp

Obstaculo.o:	Obstaculo.cpp Obstaculo.h
	g++ -c Obstaculo.cpp

Jugador.o:	Jugador.cpp Jugador.h
	g++ -c Jugador.cpp

Normal.o:	Normal.cpp Normal.h
	g++ -c Normal.cpp

Espina.o:	Espina.cpp Espina.h
	g++ -c Espina.cpp

V.o:	V.cpp V.h
	g++ -c V.cpp

clean:	
	rm *.o main.out