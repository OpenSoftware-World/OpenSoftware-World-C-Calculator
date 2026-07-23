# Unless you have a specific need, it is not recommended to make any changes to this file.

BD = ../../

# Compiler tools and flags
# The name variable for the tool to be used to compile this program, and the flags to be used during compilation.
CC = bcc
CFLAGS = -c -Md -ansi -O -I

# Linker and linker flags
# The program to be used for the linker and the flag variables of that program.
LD = ld86
LDFLAGS = -y -d -T8000 -HD800 -0 -C0 -lmikeos

# ----------------------------------------------------------------------------
SRC = oswcalc.c

TARGET = $(addsuffix .bin, $(basename $(SRC)))
APP_EXT = $(addsuffix .app, $(basename $(SRC)))
OBJ = $(addsuffix .o, $(basename $(SRC)))

HEADER = $(BD)/include
LIBDIR = $(BD)/lib

# ----------------------------------------------------------------------------
.PHONY: all clean

all: $(TARGET) $(APP_EXT)

$(TARGET): $(OBJ)
	$(LD) -L$(LIBDIR) $(LDFLAGS)  -o $(TARGET) $(OBJ)

$(APP_EXT): $(OBJ)
	$(LD) -L$(LIBDIR) $(LDFLAGS) -o $(APP_EXT) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADER) -o $@ $<

clean:
	rm -rf $(TARGET) $(OBJ) $(APP_EXT)
