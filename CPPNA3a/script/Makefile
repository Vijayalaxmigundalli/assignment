CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/employee.o $(OBJ)/main.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/employee.o $(OBJ)/main.o


$(OBJ)/employee.o: $(SRC)/employee.cpp
	$(CC) $(CFLAGS) $(SRC)/employee.cpp $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CFLAGS) $(SRC)/main.cpp $(IFLAGS)
	mv *.o $(OBJ)/


clean:
		rm -f a.out app
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app
		@echo "Cleaning Done!"

