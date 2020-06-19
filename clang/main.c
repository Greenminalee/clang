//
//  main.c
//  clang
//
//  Created by min on 2020/06/18.
//  Copyright © 2020 min. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int* x;
    x = calloc(1, sizeof(int));

    if(x == NULL){
        puts("메모리 할당에 실패했습니다.");
    }else{
        *x = 57;

        printf("*x = %d\n", *x);
    }
    free(x);
    
    return 0;
}
