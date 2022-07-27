CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/signal1.o $(OBJ)/signal2.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/signal1.o $(OBJ)/signal2.o


$(OBJ)/signal1.o: $(SRC)/signal1.cpp
	$(CC) $(CFLAGS) $(SRC)/signal1.cpp $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/signal2.o: $(SRC)/signal2.cpp
	 $(CC) $(CFLAGS) $(SRC)/signal2.cpp $(IFLAGS)
	 mv *.o $(OBJ)/


clean:
		rm -f a.out app
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app
		@echo "Cleaning Done!"

