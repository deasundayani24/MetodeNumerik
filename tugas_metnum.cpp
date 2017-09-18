/* Nama		: Dhea Sundayani
   NIM		: 3411151003
   Kelas		: SIE-A
   Tugas Metode Numerik
*/

#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>

int plus(int a, int b);
int minus(int a, int b);
int multiplied(int a, int b);
int squared(int a, int b);
void fungsi(int a, int b);
void utama();

int main(){
	int a,b,pilihan,hasil;

   utama:
   utama();
   printf("\n\   Masukkan Pilihan Anda : "); scanf("%d", &pilihan);
	switch(pilihan){
	case 1:
   	system("cls");
		printf("===============OPERASI TAMBAH================");
		printf("\n\nMasukkan bilangan ke 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan ke 2 : "); scanf("%d", &b);
		hasil = plus(a,b);
		printf("\nHasil : %d + %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 2:
   	system("cls");
		printf("===============OPERASI KURANG================");
		printf("\n\nMasukkan bilangan ke 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan ke 2 : "); scanf("%d", &b);
		hasil = minus(a,b);
		printf("\nHasil : %d - %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 3:
   	system("cls");
		printf("================OPERASI KALI=================");
		printf("\n\nMasukkan bilangan ke 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan ke 2 : "); scanf("%d", &b);
		hasil = multiplied(a,b);
		printf("\nHasil : %d * %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 4:
   	system("cls");
		printf("===============OPERASI PANGKAT================");
		printf("\n\nMasukkan bilangan ke 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan pangkat ke 2 : "); scanf("%d", &b);
		hasil = squared(a,b);

      getch();
      system("cls");
      goto utama;

    case 5:
   	system("cls");
		printf("===============OPERASI FUNGSI================");
		printf("\n\nMasukkan bilangan ke 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan ke 2 : "); scanf("%d", &b);
      fungsi(a,b);

      getch();
      system("cls");
      goto utama;

    case 6:
    	system("cls");
    	printf("BYE");
      getch();
    	return 0;
      break;
      default: printf("\n\t\tPilihan anda tidak sesuai!!!");

      getch();
      system("cls");
      goto utama;

    }
}

void utama(){
	int pilih;

	printf("\n\========================================================");
   printf("\n\                   TUGAS METODE NUMERIK");
   printf("\n\n                    OPERASI ARITMATIKA");
   printf("\n\========================================================");
   printf("\n\n   PILIHAN OPERASI");
   printf("\n\n   ----------------------");
	printf("\t\n   | 1. Operasi Tambah  |");
	printf("\t\n   | 2. Operasi Kurang  |");
	printf("\t\n   | 3. Operasi Kali    |");
	printf("\t\n   | 4. Operasi Pangkat |");
	printf("\t\n   | 5. Operasi Fungsi  |");
   printf("\t\n   | 6. Keluar          |");
   printf("\t\n   ----------------------");
}

int plus(int a, int b){
	int hasil;

	hasil = a + b;
	return(hasil);
}

int minus(int a, int b){
	int hasil;

	hasil = a - b;
	return(hasil);
}

int multiplied(int a, int b){
	int hasil;

	hasil = a * b;
	return(hasil);
}

int squared(int a, int b){
	int hasil;

	hasil = pow(a,b);
	printf("\nHasil : %d ^ %d = %d", a, b, hasil);
}

void fungsi(int a, int b){
	int q,hasil;

	for(q=a;q<=b;q++){
		hasil = (2*(q*q)) - ((3*q) + 1);
      printf("\nHasil : 2x^2-3x+1 : %d", hasil);
	}
}
