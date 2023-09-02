#include <stdio.h>
#include <stdlib.h>

struct karmasiksayi 
{
	int a;
	int b;
};
struct karmasiksayi  topla (struct karmasiksayi sayi1,struct karmasiksayi sayi2)
{
	struct karmasiksayi sonuc;
	sonuc.a = sayi1.a + sayi2.a;
    sonuc.b = sayi1.b + sayi2.b;
    
return sonuc;
}
int main() {
	
struct karmasiksayi sayi1,sayi2,sonuc;

printf("lutfen sayi1 icin reel kismi giriniz");
scanf("%d",&sayi1.a);
printf("lutfen sayi1 icin b kismini giriniz");
scanf("%d",&sayi1.b); 
	
printf("lutfen sayi2 icin reel kismi giriniz");
scanf("%d",&sayi2.a);
printf("lutfen sayi2 icin b kismini giriniz");
scanf("%d",&sayi2.b);	
	
sonuc=topla(sayi1,sayi2);
	
	printf("sonuc: %d +%di\n",sonuc.a,sonuc.b);	
	
	
	return 0;
}
