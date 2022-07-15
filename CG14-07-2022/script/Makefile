C = g++
CPPFLAGS = -c -Wall -Werror
LFLAGS = -o

BIN = bin
OBJ = obj
SRC = src
INC = inc

all:app

app:$(OBJ)/multi.o $(OBJ)/mutlti.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/multi.o $(OBJ)/mutlti.o

$(OBJ)/multi.o: $(SRC)/mutlti.cpp
	$(CC) $(CPPFLAGS) -I$(INC) $(SRC)/mutlti.cpp
	mv *.o $(OBJ)/

clean:
	  rm -f a.out app
	  rm -f $(OBJ)/*.o $(BIN)/app
	  @echo "Cleaning Done!"


