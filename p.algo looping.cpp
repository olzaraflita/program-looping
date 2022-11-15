//program menggunakan looping oleh olza raflita 22343009


#include<stdio.h>
#include<math.h>
int main()
{
    printf("Nama : Olza Raflita\n");
    printf("NIM : 22343009\n");
    printf("Program Menampilkan Nilai Faktorial\n");
    int i=1, a, b=1;
    printf("\nMasukkan nilai faktorial yang diinginkan : ");
    scanf("%d", &a);
    do{
         b= b*i;
       i++;
      }
    while (i<=a);
    printf("Hasil faktorial %d adalah = %d", a, b);
    printf("\n");
    return 0;
}

