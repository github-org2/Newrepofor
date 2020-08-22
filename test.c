#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(int argc, char**argv)
{
    char buf[MAX];
    if(argc != 3 ) {
        printf("Usage: <Input Size> <Input String>\n");
        return 0;
    }
    //Initialize buffer
    for(int i=0;i <100;i++){
        buf[i] = '\0';
    }
    //Get the input size 
    int size = atoi(argv[1]);

    if(size < 100){
        strncpy(buf, argv[2], size);
        printf("%s\n", buf);
    }
    return 0;
}
