all: main.c sterrcpy.c sterncat.c stringy.h
	gcc -o stringy main.c sterrcpy.c sterncat.c

run:
	./stringy

clean:
	rm ./stringy
