#include<stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int num;
	int num2;

//
	num = printf("fhfhfh\n");
	printf("ans len = %d\n", num);
	num2 = ft_printf("fhfhfh\n");
	ft_printf("res len = %d\n\n", num2);

//c	
	num = printf("c = %c\n",'a');
	printf("ans len = %d\n", num);
	num2 = ft_printf("c = %c\n",'a');
	ft_printf("res len = %d\n", num2);
	num = printf("c = %c\n",'\0');
	printf("ans len = %d\n", num);
	num2 = ft_printf("c = %c\n",'\0');
	ft_printf("res len = %d\n", num2);
	num = printf("c = %c\n",'l'+256);
	printf("ans len = %d\n", num);
	num2 = ft_printf("c = %c\n",'l'+256);
	ft_printf("res len = %d\n\n", num2);

//s	
	num = printf("s = %s\n","fhfhfh");
	printf("ans len = %d\n", num);
	num2 = ft_printf("s = %s\n","fhfhfh");
	ft_printf("res len = %d\n", num2);
	num = printf("s = %s\n","");
	printf("ans len = %d\n", num);
	num2 = ft_printf("s = %s\n","");
	ft_printf("res len = %d\n", num2);
	num = printf("s = %s\n",NULL);
	printf("ans len = %d\n", num);
	num2 = ft_printf("s = %s\n",NULL);
	ft_printf("res len = %d\n\n", num2);

//p
	num = printf("p = %p\n",&num);
	printf("ans len = %d\n", num);
	num2 = ft_printf("p = %p\n",&num);
	ft_printf("res len = %d\n", num2);
	num = printf("p = %p\n",NULL);
	printf("ans len = %d\n", num);
	num2 = ft_printf("p = %p\n",NULL);
	ft_printf("res len = %d\n\n", num2);

//d
	num = printf("d = %d\n",0);
	printf("ans len = %d\n", num);
	num2 = ft_printf("d = %d\n",0);
	ft_printf("res len = %d\n", num2);
	num = printf("d = %d\n",-1);
	printf("ans len = %d\n", num);
	num2 = ft_printf("d = %d\n",-1);
	ft_printf("res len = %d\n", num2);
	num = printf("d = %d\n",INT_MAX);
	printf("ans len = %d\n", num);
	num2 = ft_printf("d = %d\n",INT_MAX);
	ft_printf("res len = %d\n", num2);
	num = printf("d = %d\n",INT_MIN);
	printf("ans len = %d\n", num);
	num2 = ft_printf("d = %d\n\n",INT_MIN);

//i
	num = printf("i = %i\n",0);
	printf("ans len = %i\n", num);
	num2 = ft_printf("i = %i\n",0);
	ft_printf("res len = %i\n", num2);
	num = printf("i = %i\n",-1);
	printf("ans len = %i\n", num);
	num2 = ft_printf("i = %i\n",-1);
	ft_printf("res len = %i\n", num2);
	num = printf("i = %i\n",INT_MAX);
	printf("ans len = %i\n", num);
	num2 = ft_printf("i = %i\n",INT_MAX);
	ft_printf("res len = %i\n", num2);
	num = printf("i = %i\n",INT_MIN);
	printf("ans len = %i\n", num);
	num2 = ft_printf("i = %i\n\n",INT_MIN);

//u
	num = printf("u = %u\n",0);
	printf("ans len = %u\n", num);
	num2 = ft_printf("u = %u\n",0);
	ft_printf("res len = %u\n", num2);
	num = printf("u = %u\n",-1);
	printf("ans len = %u\n", num);
	num2 = ft_printf("u = %u\n",-1);
	ft_printf("res len = %u\n", num2);
	num = printf("u = %u\n",UINT_MAX);
	printf("ans len = %u\n", num);
	num2 = ft_printf("u = %u\n",UINT_MAX);
	ft_printf("res len = %u\n", num2);
	num = printf("u = %u\n",INT_MIN);
	printf("ans len = %u\n", num);
	num2 = ft_printf("u = %u\n",INT_MIN);
	ft_printf("res len = %u\n\n", num2);

//x
	num = printf("x = %x\n",0);
	printf("ans len = %d\n", num);
	num2 = ft_printf("x = %x\n",0);
	ft_printf("res len = %d\n", num2);
	num = printf("x = %x\n",-1);
	printf("ans len = %d\n", num);
	num2 = ft_printf("x = %x\n",-1);
	ft_printf("res len = %d\n", num2);
	num = printf("x = %x\n",UINT_MAX);
	printf("ans len = %d\n", num);
	num2 = ft_printf("x = %x\n",UINT_MAX);
	ft_printf("res len = %d\n", num2);
	num = printf("x = %x\n",INT_MIN);
	printf("ans len = %d\n", num);
	num2 = ft_printf("x = %x\n",INT_MIN);
	ft_printf("res len = %d\n\n", num2);

//X
	num = printf("X = %X\n",0);
	printf("ans len = %d\n", num);
	num2 = ft_printf("X = %X\n",0);
	ft_printf("res len = %d\n", num2);
	num = printf("X = %X\n",-1);
	printf("ans len = %d\n", num);
	num2 = ft_printf("X = %X\n",-1);
	ft_printf("res len = %d\n", num2);
	num = printf("X = %X\n",UINT_MAX);
	printf("ans len = %d\n", num);
	num2 = ft_printf("X = %X\n",UINT_MAX);
	ft_printf("res len = %d\n", num2);
	num = printf("X = %X\n",INT_MIN);
	printf("ans len = %d\n", num);
	num2 = ft_printf("X = %X\n",INT_MIN);
	ft_printf("res len = %d\n\n", num2);

//%%
	num = printf("fhf%%hfh");
	printf("ans len = %d\n", num);
	num2 = ft_printf("fhf%%hfh");
	ft_printf("res len = %d\n\n", num2);

//comb
	num = printf("fh%mfhfh");
	printf("ans len = %d\n", num);
	num2 = ft_printf("fh%mfhfh");
	ft_printf("res len = %d\n", num2);
	num = 15;
	num2 = printf("%x%%%u%s%c%X\n", num, num, "HEHHEHE", 'c', num);
	printf("res len = %u\n", num2);
	num2 = ft_printf("%x%%%u%s%c%X\n", num, num, "HEHHEHE", 'c', num);
	ft_printf("res len = %u\n", num2);

	printf("\nUINT_MAX = %d\n", (int)UINT_MAX);
	printf("INT_MAX = %d\n", INT_MAX);
	printf("INT_MIN = %d\n", INT_MIN);
	printf("LONG_MAX = %d\n", (int)LONG_MAX);
	printf("LONG_MIN = %d\n", (int)LONG_MIN);

}
