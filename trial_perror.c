#include <stdio.h>
int main(void)
{
 FILE *fp ;
 fp = fopen( "/root/noexitfile", "r+" );
 if ( NULL == fp )
 {
  perror("/root/noexitfile wrong...");
 }
 
 return 0;
}
