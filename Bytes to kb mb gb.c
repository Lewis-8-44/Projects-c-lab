#include<stdio.h>
 int main ()  {

     int bytes,kb,mb,gb,bytesleft;
     printf("Enter Amount in bytes");
     scanf("%d",&bytes);

      kb = bytes/1000;
      bytesleft = bytes%1000;

      mb = bytes/1000000;
      bytesleft = bytes%1000000;

      gb = bytes/1000000000;
      bytesleft = bytes%1000000000;




    printf("%d bytes = %d kb and %d mb and %d gb and %d bytes ",bytes,kb,mb,gb,bytesleft);

    return 0;

 }
