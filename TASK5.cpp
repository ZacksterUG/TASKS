#include <stdio.h>

int main()
{
   int l;
   scanf("%d",&l);
   int c1[l];
   int c2[l];
   int count1 = 0;
   int count2 = 0;
   int a;
   int j = 0, k = 0;
   for (int i = 0; i < l; i++)
   {
      scanf("%d",&a);
      if (a%2 == 0)
      {
         c1[j] = a;
         j++;
         count1 ++;
      }
      if (a%2 != 0)
      {
         c2[k] = a;
         k++;
         count2 ++;
      }
   }
   int min1 = c1[0];
   int max1 = c2[0];
   int buf;
   for (int i = 0; i < count1; i++)
   {
      min1 = c1[i];
      for (j = i+1; j < count1; j++)
      {
         if (c1[j] <= min1)
         {
            buf = c1[i];
            min1 = c1[j];
            k = j;
         }
      }
      c1[i] = min1;
      c1[k] = buf;
   }
   for (int i = 0; i < count2; i++)
   {
      max1 = c2[i];
      for (j = i+1; j < count2; j++)
      {
         if (c2[j] >= max1)
         {
            buf = c2[i];
            max1 = c2[j];
            k = j;
         }
      }
      c2[i] = max1;
      c2[k] = buf;
   }
   for (int i = 0; i < count1; i++) printf("%d ",c1[i]);
   for (int i = 0; i < count2; i++) printf("%d ",c2[i]);
   return 0;



}