ROOT=$(shell pwd)
LIB=$(ROOT)/lib

data:data.o base_json.o
	g++ -o $@ $^ -ljson -L$(LIB)
%.o:%.cpp
	g++ -c $< -I$(LIB)/include

.PHONY:clean
clean:
	rm -f data *.o
