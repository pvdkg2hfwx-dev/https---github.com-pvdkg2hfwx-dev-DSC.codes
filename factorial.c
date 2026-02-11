#include <stdio.h>
int fact(int n){
    if(n==0 || n==1)
    return 1;
    else
    return n * fact(n-1);
}
int main(){
    int num, result;
    printf("enter the number to find fctorial for : ");
    scanf("%d", &num);
    result = fact(num);
    printf("the fact of %d number is = %d \n", num, result);
    return 0;
}