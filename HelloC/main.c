//
//  main.c
//  HelloC
//
//  Created by hanqw on 12-10-10.
//  Copyright (c) 2012年 hanqw. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define INT_LENGTH 32

unsigned int reverse_int(unsigned int value);

int main(int argc, const char * argv[])
{

    // insert code here...
    unsigned answer=25;
    unsigned result=0;
    int c=0;
    int len=0;
    while (c=answer&0x1,answer>0&&len<=INT_LENGTH) {
        len++;
        result<<=1;
        result+=c<<1;
        answer>>=1;
    }
    while (len<INT_LENGTH-1) {
        result<<=1;
        ++len;
    }
    printf("result is %ul",reverse_int(25));
    return 0;
}

unsigned int reverse_int(unsigned int value){
    unsigned result=0;
    unsigned int i;
    for (i=1; i!=0; i<<=1) {
        result<<=1;
        if(value&1){
            result|=1;
        }
        value>>=1;
    }
    return result;
}