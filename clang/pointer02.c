//
//  pointer02.c
//  clang
//
//  Created by min on 2020/06/19.
//  Copyright © 2020 min. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n){
    int i;
    int max = a[0];
    for(i =  1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int main(){
    int i;
    int *height;
    int number;
    printf("사람수 : ");
    scanf("%d", &number);
    height = calloc(number, sizeof(int));
    printf("%d 사람의 키를 입력하세요\n", number);
    for(i = 0; i < number; i++){
        printf("height[%d] :", i);
        scanf("%d", &height[i]);
    }
    
    printf("최대값은 %d : ", maxof(height, number));

    free(height);
    
    return 0;
}
