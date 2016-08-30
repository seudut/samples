/*
 * server.c
 */

#include <stdio.h>
//#include "server.h"
#include <sys/socket.h>.h>
#include <assert.h>

int main ()
{
  struct sockaddr_in sockfd;
  struct sockaddr_in name;
  struct sockaddr_in clien_name;

  sockfd = socket(PF_INET, SOCK_STREAM, 0);
  assert(sockfd > -1);

  assert (bind(sockfd, (struct sockaddr *)&name, sizeof(name)) > -1);

  listen(sockfd, 5);

  while (1) {
    accept(sockfd, (struct sockaddr *)&client_name, &client_name_len);
  }



  
  
  
  return 0;
}
