#pragma once

#include<iostream>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<stdlib.h>

using namespace std;

struct Request
{
	int x;
	int y;
	int p;
};

struct Response
{
	int sum;
	int start; 	//successful:0;error->-1
};
