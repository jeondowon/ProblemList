CC = g++
SRC = DS041.cpp DS041stackIntList.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = DS041

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
