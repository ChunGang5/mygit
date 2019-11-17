bin= Httpserver
cc = g++

$(bin)::HttpServer.cc
    $(cc) -o $@ $^

.PHONY:clean
clean:
	rm -f $(bin)
	
