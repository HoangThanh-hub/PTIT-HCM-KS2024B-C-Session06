#include<stdio.h>
#include<math.h>


int main(){
    int n, sum, hangTram, hangChuc, hangDonVi;


   for (int n = 100; n < 1000; n++){
    hangTram = n / 100;
    hangChuc = (n / 10) % 10;
    hangDonVi = n % 10;
    sum = pow(hangTram,3) + pow(hangChuc,3) + pow(hangDonVi,3);
    if(n == sum){

        printf("%d\n", sum);
    }
    
   }


    return 0;
}