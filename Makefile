all: main.c sterncpy.c sterncat.c stringy.h
	gcc -o stringy main.c sterncpy.c sterncat.c

run:
	./stringy

clean:
	rm ./stringy
