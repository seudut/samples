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

  sockfd = socket(PF_INET, SOCK_STREAM, 0);
  assert(sockfd > -1);
assert(bind())



  return 0;
}
