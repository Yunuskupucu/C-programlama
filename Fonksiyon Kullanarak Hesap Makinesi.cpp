#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float dortislem(float a,float b,char islem)
{
	if(islem=='+')
	{
		return a+b;
	}
	else if(islem=='-')
	{
		return a-b;
	}
	else if(islem=='*')
	{
		return a*b;
	}
	else if(islem=='/')
	{
		return a/b;
	}
	else
	{
		printf("Yanlis operator girdiniz.");
	}
}

int main()
{
	float a,b;
	char islem;
	printf("Hangi islemi yapmak istiyorsunuz (+ - * /)\n");
	scanf("%c",&islem);
	printf("Lutfen iki adet sayi giriniz.\n");
	scanf("%f%f",&a,&b);
	
	printf("Islemin sonucu :%.2f",dortislem(a,b,islem));
	
	

	return 0;	
}