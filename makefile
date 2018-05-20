#
# makefile for color utilities C library
# assumes cmocka (a unit testing framework) is installed on your
# system
#

CC = gcc
FLAGS = -Wall
INCLUDES = -lm

imageDriver: imageUtils.o imageDriver.c
	$(CC) $(FLAGS) $(INCLUDES) imageUtils.o imageDriver.c -o imageDriver

imageUtils.o: imageUtils.c imageUtils.h
	$(CC) $(FLAGS) $(INCLUDES) -c imageUtils.c -o imageUtils.o

clean:
	rm -f *~ *.o
