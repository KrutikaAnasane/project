all: project test.txt
project: math.o project.o
		cc math.o project.o -o project -lm
project.o: project.c 
		cc -c project.c -lm
math.o: math.c maths.h
		cc -c math.c
clean:
		rm *.o
