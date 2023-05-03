#include <stdio.h>
int main()
{
  char sourcestr[100], destinationstr[100];
  int i;
  printf("Enter a string:");
  fgets(sourcestr);
  for(i=0; sourcestr[i] != '\0'; i++){
       destinationstr[i] = sourcestr[i];
  }
  destinationstr[i] = '\0';
  printf("The copied string is : %s", destinationstr);

  return 0;

}
