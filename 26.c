#include <stdio.h>
int main() {
  int i,n;
  double arr[100];
  printf("Input the number of elements to be stored: ");
  scanf("%d", &n);

  for(i=0;i<n;i++) 
  {
    printf("Enter element - %d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  for (i=1;i<n;i++) 
  {
    if (arr[0] < arr[i]) 
	{
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}
