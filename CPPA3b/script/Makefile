CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/assign.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/assign.o


$(OBJ)/assign.o: $(SRC)/assign.cpp
	$(CC) $(CFLAGS) $(SRC)/assign.cpp $(IFLAGS)
	mv *.o $(OBJ)/


clean:
		rm -f a.out app
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app
		@echo "Cleaning Done!"

