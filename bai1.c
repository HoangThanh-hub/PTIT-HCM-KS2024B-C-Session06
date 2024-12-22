#include<stdio.h>

int main(){
    int sum = 0, n;
    int i=1;
    printf("ban hay nhap vao 5 so nguyen bat ki\n");

    while(i <= 5){
        scanf("%d", &n);
        i++;
        if(n % 2 !=0){
            sum = sum +n;
        }
    }
    printf("tong cac so le la: %d\n", sum);


    return 0;
}