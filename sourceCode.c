#include <stdio.h>
#include <stdio.h>
/*1/1!+2/2!+3/3!+...n/n!*/
int main()
{
	float F=1,sayi,a=1,i;
	float toplam=0;
	printf("bir sayi giriniz");
	scanf("%f",&sayi);
	if(sayi > 0)
	{
		for(i=1;i<=sayi;i++)
		{
		F = F*i;
		toplam = toplam + a/F;
		a = a+1;	
		}
	}
	else 
    {
    	printf("sýfýrdan büyük sayi giriniz");
    	scanf("%f",&sayi);	
        for(i=1;i<=sayi;i++)
		{
		F = F*i;
		toplam = toplam + a/F;
		a = a+1;	
		}
	}
	printf("toplam=%f\n",toplam);
    scanf("%d",sayi);
	return 0;
}
