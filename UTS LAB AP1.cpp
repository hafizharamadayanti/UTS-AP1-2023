#include <iostream>
#include <stdio.h>

using namespace std;
int main() 
{
    int n, i, j, k;

cout<<"==========================\n";
cout<<"PROGRAM POLA BELAH KETUPAT\n";
cout<<"==========================\n";

    printf("Masukkan angka: ");
    scanf("%d", &n);

//bagian atas belah ketupat
n=n-1;
    for (i =1; i <= n ; i++) {
        for (j = i; j <= n; j++) {
            printf("*");
        }
        for (k = 1; k <= (2 * i-2) ; k++) {
            printf(" ");
        }
        for (j=i;j<=n;j++)
       {
           printf("*");
       }
            
        printf("\n");
    }

//bagian bawah belah ketupat
for (i = n - 1; i >= 0; i--) {
        for (j = n; j > i; j--) {
            printf("*");
        }
        for (k = 1; k <= 2 * i; k++) {
            printf(" ");
        }   
           for (j = i; j <= n-1; j++) {
            printf("*");
              
        }
        printf("\n");{
       }
    }    
    return 0;
}
