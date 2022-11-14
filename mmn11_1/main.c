#include <stdio.h>
#include "header.h"


int main()
{
    char str[size];
    printf("this program will return a shortened version of a string as seen in the guidelines of mmn11\n");
    printf("please enter a string: ");
    fgets(str, size, stdin);
    puts(str);
    delet(str);
    printf("The shortened string:\n%s",str);

    return 0;

}


