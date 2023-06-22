#include <iostream>
using namespace std;
int length(char c[])
{
   int i = 0;
   int count = 0;
   while (c[i] != '\0')
   {
      count++;
      i++;
   }
   return count;
}
int main()
{
   char arr[] = "Rupam jana";
   cout <<length(arr);
   

   return 0;
}