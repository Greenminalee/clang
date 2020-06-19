//
//  pointer01.c
//  clang
//
//  Created by min on 2020/06/18.
//  Copyright © 2020 min. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i; //test
    int *a;
    int na;
    
    printf("요소의 개수\n");
    scanf("%d", &na);
    
    a = calloc(na, sizeof(int));
    
    if(a == NULL){
        puts("메모리 확보 실패");
    }else{
        printf("%d개의 정수를 입력하세요\n" , na);
        for(i = 0; i < na; i++){
            printf("a[%d] : ", i);
            scanf("%d", &a[i]);
        }
        
        printf("각 요소 값은 아래와 같습니다\n");
        for(i = 0; i < na; i++)
            printf("a[%d] = %d\n", i, a[i]);
        
        free(a);
    }
    return 0;
}
