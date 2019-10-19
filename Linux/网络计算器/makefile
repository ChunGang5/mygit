.PHONY:all
all:client server

client:client.cc
	g++ -o $@ $^
server:server.cc
	g++ -o $@ $^ -pthread
.PHONY:claen
clean:
	rm -f client server
