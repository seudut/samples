/*
 * client.c
 */

#include <stdio.h>
#include <sys/socket.h>

#define RECV_BUF_SIZE 32

int main(int argc, char *argv[])
{
  int sock;
  struct sockaddr_in server_addr;
  unsigned short server_port;
  char *server_ip;
  char *echo_string;

  server_ip = "127.0.0.1";
  server_port = "1234";
  

  

  return 0;
}



