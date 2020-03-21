.PHONY:all
all:testCgi HttpServer
testCgi:testCgi.cc
	g++ -o $@ $^
HttpServer:HttpServer.cc
	g++ -o $@ $^ -lpthread -std=c++11
.PHONY:clean
clean:
	rm -f HttpServer