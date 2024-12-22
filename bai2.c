#include<stdio.h>

int main(){
    int soLe = 0, soChan = 0, n;
    int i=1;
    printf("ban hay nhap vao 5 so nguyen bat ki\n");

    while(i <= 5){
        scanf("%d", &n);
        i++;
        if(n % 2 !=0){
            soLe = soLe +1;
        }else {
            if(n % 2 ==0){
            soChan = soChan +1;
        }
    }
    }
    printf("tong cac so le la: %d\n", soLe);
    printf("tong cac so chan la: %d\n", soChan);

    return 0;
}