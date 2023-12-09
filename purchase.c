#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int pen,pencil,eraser,TC;
    printf("enter the price of the pencil");
    scanf("\n%d",&pencil);
    printf("enter the price of the pen");
    scanf("\n%d",&pen);
    printf("enter the price of the eraser");
    scanf("\n%d",&eraser);
    TC=pen+pencil+eraser;
    printf("\n the total cost of the purchase %d",TC);
    getch();
    
}