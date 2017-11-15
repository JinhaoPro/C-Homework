a.out: main.cpp Point.o Line.o Circle.o Triangle.o Quadrangle.o
	g++ -std=c++11 main.cpp Point.o Line.o Circle.o Triangle.o Quadrangle.o
Point.o: Point.cpp
	g++ -std=c++11 -c Point.cpp
Line.o: Line.cpp Point.o
	g++ -std=c++11 -c Line.cpp
Circle.o: Circle.cpp Point.o
	g++ -std=c++11 -c Circle.cpp Point.o  
Triangle.o: Triangle.cpp Point.o Line.o
	g++ -std=c++11 -c Triangle.cpp Point.o Line.o
Quadrangle.o: Quadrangle.cpp Point.o Line.o
	g++ -std=c++11 -c Quadrangle.cpp Point.o Line.o
