cc=g++
flags=-g

.PHONY:all

all:client server

client:client.cc
	$(cc) -o $@ $^ $(flags)
server:server.cc
	$(cc) -o $@ $^ $(flags)

.PHONY:clean
clean:
	rm -f client server
