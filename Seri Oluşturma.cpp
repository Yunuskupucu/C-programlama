#include <stdio.h>
#include <stdlib.h>

void seriolustur(int baslangic,int bitis,int artis)
{
	if(baslangic<=bitis)
	{
		printf("%d\n",baslangic);
		seriolustur(baslangic+artis,bitis,artis);
	}
}

int main()
{
	int baslangic,bitis,artis;
	printf("Lutfen bir baslangic degeri girin.\n");
	scanf("%d",&baslangic);
	printf("Lutfen bir bitis degerini girin.\n");
	scanf("%d",&bitis);
	printf("Lutfen artis miktarini girin.\n");
	scanf("%d",&artis);
	printf("-------------------------------\n");
	
	seriolustur(baslangic,bitis,artis);
	
	return 0;
}