#include <stdio.h>
#include <stdlib.h>
struct complex
{
  int real, img;
};

int main()
{
  int choice, x, y, z;
  struct complex a, b, c;

  while(1)
  {
    printf("1.Add two complex numbers.\n");
    printf("2.Subtract two complex numbers.\n");
    printf("3.Multiply two complex numbers.\n");
    printf("4.Divide two complex numbers.\n");
    printf("5.exit.\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);

    if (choice == 5)
      exit(0);

    if (choice >= 1 && choice <= 4)
    {
      printf("Enter first complex number:");
      printf("\nenter real part of complex number = ");
      scanf("%d", &a.real);
      printf("\nenter imaginary part of complex number= ");
      scanf("%d", &a.img);
      
      printf("\nEnter second comple…
