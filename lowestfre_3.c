#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int  a[100],i,j,k,count=0,n;

    printf("Enter  the string : ");
    gets(str);

    for(j=0;str[j];j++);
	k=n=j;

    for(i=0;i<n;i++){
    	a[i]=n;
    	count=1;
    	if(str[i]){

 		  for(j=i+1;j<n;j++){

	        if(str[i]==str[j]){
                 count++;
                 str[j]='\0';
	     	}
	      }
	      a[i]=count;
	    if(count<=k)
	     k=count;
	   }
 	}
 	printf("minimum occuring characters ");
 	for(j=0;j<n;j++){
	        if(a[j]==k){
	             printf(" '%c',",str[j]);
	     	}
	   }

	printf("\b = %d times \n ",k);

    return 0;
}
