CC=g++
CFLAGS=-c -Wall
LFLAGS=
SOURCES=main.cpp Aquarium.cpp Fish.cpp Seaweed.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXEC=main

all: $(SOURCES) $(EXEC)
	

$(EXEC): $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(EXEC)
