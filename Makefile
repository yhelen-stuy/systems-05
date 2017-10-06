all: main.c sterrcpy.c sterncat.c sterrcmp.c sterrchr.c sterrlen.c stringy.h 
	gcc -o stringy main.c sterrcpy.c sterncat.c sterrcmp.c sterrchr.c sterrlen.c

run: all
	./stringy

clean:
	rm ./stringy
