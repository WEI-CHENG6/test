#include <stdio.h> 
#include <stdlib.h>
int main()
{
int choose;
printf("menu:\n 1.beef  2.sea food  3.cheese\n\n");
printf("input the number:");
scanf("%d",&choose);
switch (choose)
{
case 1:
	printf("\nbeef 100\n");
	break;
case 2:
	printf("\nsea food 80\n");
	break;
case 3:
	printf("\ncheese 70\n");
	break;
default:
	printf("\nthis is all\n");
	break;
}
system("pause");
return 0;


}
