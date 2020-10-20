UNAME := $(shell uname)

ifeq ($(UNAME), Darwin)
  format=macho64
else ifeq ($(UNAME), Linux)
  format=elf64
else
  format=win64
endif

build: entry.o main.o
	gcc main.o entry.o

main.o: main.c
	gcc -c main.c -o main.o

%.o: %.s
	nasm -f $(format) -o $@ $<

clean:
	rm *.o *.exe