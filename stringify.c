#include <stdio.h>

#define STRFY(a) #a
#define STRFY2(a) #a
#define TOSTR(x) STRFY(x)



void main (void)
{
    printf("Stringify test!\r\n");
    printf("%s\r\n", STRFY(pierre));            // pierre
    printf("%s\r\n", TOSTR(pierre));            // pierre
    printf("%d\r\n", __LINE__);                 // 14
    printf("%s\r\n", STRFY(__LINE__));          // __LINE__
    printf("%s\r\n", TOSTR(__LINE__));          // 16
    printf("%s\r\n", STRFY2(__LINE__));         // __LINE__
    //printf("%s\r\n", #test_string);           // # is illegal
}
