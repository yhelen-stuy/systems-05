all: main.c sterrcpy.c sterncat.c sterrcmp.c sterrchr.c stringy.h 
	gcc -o stringy main.c sterrcpy.c sterncat.c sterrcmp.c sterrchr.c

run: all
	./stringy

clean:
	rm ./stringy
