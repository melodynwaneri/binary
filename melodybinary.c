#include <stdio.h>

int main(void)
{
   int c, position, found, middle, n, search, array[100];

   printf("Enter number of elements\n");
   scanf("%d",&n);

   printf("%d integers\n", n);

   for (c = 0; c < n; c++)
   scanf("%d",&array[c]);

   printf("Enter the value to find\n");
   scanf("%d", &search);

   position = 0;
   found = n - 1;
   middle = (position+found)/2;

   while (postion <= found)
   {
      if (array[middle] < search)
      {
         position = middle + 1;
      }
      else if (array[middle] == search) {
      {
         printf("%d was found at location %d.\n", search, middle+1);
         break;
      }
      else
      {
         found = middle - 1;
         middle = (position + found)/2;
      }
      if (position > found)
      printf("Value not found! %d wasn't found in the list.\n", search);

      return 0;
}


