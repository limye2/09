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
    int grade[SIZE];
    int score[SIZE];

    for(i=0; i<SIZE; i++)
    {
        grade[i] = rand() % 100;
    }
    
    for(i=0; i<SIZE; i++)
        score[i] = grade[i];
    
    for(i=0; i<SIZE; i++)
        printf("grade[%i] = %i, score[%d] = %d\n", i, grade[i], i, score[i]);
    return 0;
}
