#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
  int n;
  printf("1 for jan");
  printf("\n2 for feb");
  printf("\n3 for march");
  printf("\n4 for april");
  printf("\n5 for may");
  printf("\n6 for june");
  printf("\n7 for july");
  printf("\n8 for aug");
  printf("\n9 for sep");
  printf("\n10 for oct");
  printf("\n11 for nov");
  printf("\n12 for dec");
 printf("\nEnter month number : - ");
 scanf("%d",&n);

  switch(n)
 {
    case 1:
    printf("Jan");
    break;

    case 2:
    printf("Feb");
    break;

    case 3:
    printf("March");
    break;

    case 4:
    printf("April");
    break;

    case 5:
    printf("May");
    break;

    case 6:
    printf("June");
    break;

    case 7:
    printf("July");
    break;
    case 8:
    printf("Aug");
    break;

    case 9:
    printf("Sep");
    break;

    case 10:
    printf("Oct");
    break;

    case 11:
    printf("Nov");
    break;

    case 12:
    printf("Januvary");
    break;

    default:
    printf("Enter proper number !");

 }




 getch();
}