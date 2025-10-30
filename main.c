//
//  main.c
//  09
//
//  Created by 이예림 on 10/30/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int grade[5];
    
    grade[0]=10;
    grade[1]=20;
    grade[2]=30;
    grade[3]=40;
    grade[4]=50;
    for(i=0;i<5;i++)
        printf("grade[%i] = %i\n", i, grade[i]);
    return 0;
}
