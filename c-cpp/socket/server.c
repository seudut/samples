/*
 * server.c
 */

#include <stdio.h>
//#include "server.h"
#include <sys/socket.h>
#include <arpa/inet.h>
#include <assert.h>

int main ()
{
  int server_sock;
  //  int client_sock;

  struct sockaddr_in server_addr;
  struct sockaddr_in client_addr;

  unsigned int server_port = 1234;
  unsigned int client_len;

  server_sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
  assert(server_sock > -1);
  

  server_addr.sin_family = AF_INET;
  server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
  server_addr.sin_port = htons(server_port);

  assert(bind(server_sock, (struct sockaddr *) &server_addr, sizeof(server_addr)) > -1);
  assert(listen(server_sock, 5) > -1);

  while (1) {
    assert(accept(server_sock, (struct sockaddr *) &client_addr, &client_len) > -1);

    printf("Handling client %s\n", inet_ntoa(client_addr.sin_addr));
    
  }  
  return 0;
}
