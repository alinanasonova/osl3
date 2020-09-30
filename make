CC = gcc
CFLAGC = -O0 -Wall
SOURCES = test.c

OBJECT_FILES = $(addprefix objt/, $(SOURCES:.c=.o))
EXECUTABLE = test

all: objt $(SOURCES) $(EXECUTABLE)

objt:
	mkdir objt

$(EXECUTABLE): $(OBJECT_FILES)
	$(CC) $(OBJECT_FILES) $(LDFLAGS) $(CFLAGS) -o $@

objt/%.o: %.c
	$(CC) -c $< $(CFLAGS) -o $@

clean:
	rm -rf objt $(EXECUTABLE)