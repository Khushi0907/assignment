#include <stdio.h>
#include <math.h>
int main ()
{
  int octal,rem,i=0;
  printf ("Enter Octal number: ");
  scanf ("%d", &octal);
  char Hex[100];
    int decimal = 0, sem = 0;

  while(octal!=0)      //Octal to decimal covert
  {
        decimal=decimal+(octal%10)*pow(8,sem);
        sem++;
        octal=octal/ 10;
  }

   while(decimal!=0)      //Decimal to Hexadecimal
  {
      rem=decimal%16;
      //Convert Integer to char
      if(rem<10)
        Hex[i++]=rem+48;              // 48 Ascii=0
      else
        Hex[i++]=rem+55;             //55 Ascii=7
   decimal/=16;
  }

  printf ("Hexadecimal number is:");
  int j;
  for(j=i-1;j>=0;j--)
    printf("%c",Hex[j]);
  return 0;
}
