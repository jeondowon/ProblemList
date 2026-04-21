CC = g++
SRC = DS042.cpp DS042stackIntList.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = DS042

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
