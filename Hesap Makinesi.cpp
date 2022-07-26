#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("<--HESAP MAKINESI-->\n\n");
	
	float a,b;
	char op;
	
	printf("Yapacaginiz islemi giriniz.(+ - * /)\n");
	scanf("%c",&op);
	
	printf("Iki adet sayi giriniz.\n");
	scanf("%f%f",&a,&b);
	
	
	switch(op)
	{
		case '+' :printf("%.2f + %.2f = %.2f",a,b,a+b);
		break;
		case '-' :printf("%.2f - %.2f = %.2f",a,b,a-b);
		break;
		case '/' :printf("%.2f / %.2f = %.2f",a,b,a/b);
		break;
		case '*' :printf("%.2f * %.2f = %.2f",a,b,a*b);
		break;
		default :printf("Hatali giris yaptiniz.");
	}
	
	return 0;
	
}