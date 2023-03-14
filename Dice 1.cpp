#include<stdio.h>
#include<stdlib.h>


int main(){
	int a, b, sum, puan=0,x;
	if(sum!=7){
	
	  for(x =0;sum!=7;x++){
	  	a=1+rand()%6;
	  		b=1+rand()%6;
	  			printf("the value of a is %d \t and that of b is %d\n", a,b);
	         		sum = a + b;
					 	printf("\a sum is %d\n",  sum);
						 if(sum==11)
						 		printf("\a kazandiniz\n");	
					 	else	if((sum==8)||(sum==4)||(sum==5))
					 			printf("\a kaybetniz\n");
					 		else{
					 			puan+=sum;
					 			 	
					 			 		
							 }
							 }
	  }
	  printf("\a your make is %d\n", puan);
	  	printf("kazandiniz");
    }
	  

