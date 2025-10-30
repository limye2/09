//
//  main.c
//  09
//
//  Created by 이예림 on 10/30/25.
//

#include <stdio.h>
#define SIZE 5

int main(int argc, const char * argv[]) {
    int i, average;
    int sum;
    int grade[SIZE];
    
    sum=0;
    for(i=0; i<SIZE; i++)
    {
        printf("학생 성적을 입력하세요 : ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    average = sum / SIZE;
    printf("성적 평균 : %d\n", average);
    return 0;
}
