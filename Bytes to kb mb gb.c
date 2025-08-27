#include<stdio.h>
 void main ()  {

     float bytes,kb,mb,gb,bytesleft;
     printf("Enter Amount in bytes");
     scanf("%f",&bytes);

      kb = bytes/1000;
      mb = bytes/1000000;
      gb = bytes/1000000000;
    printf("%f bytes = %f kb and %f mb and %f gb and %f bytes ",bytes,kb,mb,gb,bytesleft);

 }
