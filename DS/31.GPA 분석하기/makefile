CC = g++
SRC = DS032.cpp DS032stack.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = DS032

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)