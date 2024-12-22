#include<stdio.h>


int main(){

    float soTienGui, laiSuat, soThangGui, soTienLai, tongTienLai;

    printf("nhap so tien gui: ");
    scanf("%f",&soTienGui);
    printf("nhap so lai suat: ");
    scanf("%f",&laiSuat);
    printf("nhap so thang gui: ");
    scanf("%f",&soThangGui);

    for(int i = 1; i <= soThangGui; i++){
        soTienLai = soTienGui * (laiSuat / 100);
        soTienGui = soTienGui + soTienLai;
        tongTienLai = tongTienLai + soTienLai;

    }
    printf ("tien lai: %.3f\n", tongTienLai);
    printf ("tien nhan duoc: %.3f\n", soTienGui);

    return 0;
}