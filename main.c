//
//  main.c
//  09
//
//  Created by 이예림 on 10/30/25.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, const char * argv[]) {
    int i;
    int a[SIZE] = {1,2,3,4,5};
    int b[SIZE] = {1,2,3,4,6};
    int flag_same = 1;

    for(i=0; i<SIZE; i++)
    {
        if(a[i] != b[i])
        {
            printf("%i-th element is diff.\n", i);
            flag_same = 0;
        }
    }
    
    printf("Are a and b are the same? %i\n", flag_same);
    
    return 0;
}
