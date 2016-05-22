LIBPATH =/usr/local/OpenRobotinoAPI/1/lib/linux
LIBPATH2 = /usr/local/OpenRobotinoAPI/share/lib/linux
INCPATH = /usr/local/OpenRobotinoAPI/1/include
INCPATH2 = /usr/local/OpenRobotinoAPI/share/include

CFLAGS =  -m32 -Wall -I$(INCPATH) -I$(INCPATH2) -Wfatal-errors -Wextra -Wunknown-pragmas --std=c++14
LDFLAGS += -m32 -Wl,-rpath,$(LIBPATH),-rpath,$(LIBPATH2) -L$(LIBPATH) -L$(LIBPATH2) -lrec_robotino_com -lrec_core_lt -Wextra -Wunknown-pragmas --std=c++14

CC = g++ -g
OBJ =  Point.o Grid.o Tutorial1.o  
				
TARGET = Motion

all: $(TARGET)

clean:
	rm -f *.o $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $? -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $? -o $@
