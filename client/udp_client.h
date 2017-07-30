#ifndef _CLIENT_H_
#define _CLIENT_H_

#include <iostream>
#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <map>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "log.h"

class udp_client
{
public: 
	udp_client(const std::string& _ip, const int _port);
	int init_client();
	int recv_msg(std::string& out);
	int send_msg(const std::string& in);
	~udp_client();
private:
	udp_client(const udp_client&);
private:
	std::string ip;
	int port;
	int sock;
};
#endif









