# Directories
IDIR = ../include
BDIR = ../bin
ODIR = obj
LDIR = ../lib

# Compiler and Flags
CC = gcc
CFLAGS = -I$(IDIR)
LIBS = -lm

# Dependencies
_DEPS = dtlib.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# Object files
_OBJ = dtlib.o dynamic_array.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# Target executable
TARGET = $(BDIR)/dtlib

# Default rule
all: $(TARGET)

# Rule for building the final executable
$(TARGET): $(OBJ) | $(BDIR)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# Rule for compiling object files
$(ODIR)/%.o: %.c $(DEPS) | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure obj and bin directories exist
$(ODIR) $(BDIR):
	mkdir -p $@

# Clean rule
.PHONY: clean
clean:
	rm -rf $(ODIR)/*.o $(TARGET)
