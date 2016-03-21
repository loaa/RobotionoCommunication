
CC = g++
OBJ = Server.o Client.o

TARGET = Communicating

all: $(TARGET)

clean:
	rm -f *.o $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $? -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $? -o $@

