#include <stdio.h>
 
int main()
{
     int y = 15;
     int z = 15;
     int a = 1;
     int b = 1;
 
     while (y >= 0){
         y--;
         printf("While ");
         printf("a: %d \n", a);
         a++;
     } do{
        printf("Do While ");
        printf("b: %d \n", b);
        z--;
        b++;
      } while(z > 0);
}
