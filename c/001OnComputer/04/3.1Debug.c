// 1，添加程序需要的头文件
#include <stdio.h>
#include <assert.h>
#define R
// 2，给integer_fraction添加声明
int integer_fraction(float x);
int main(void){
    float r, s;
    int s_integer = 0;
    printf("Input a number:");
    scanf("%f", &r);
    #ifdef R
    s=3.14159*r*r;
    printf("area of round is:%f\n", s);
    s_integer = integer_fraction(s);
    printf("the integer fraction of area is %d\n", s_integer);
    assert((s-s_integer)<1.0);
    #endif // R
    return 0;
}
int integer_fraction(float x){
    int i = x;
    return i;
}
