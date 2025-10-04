//to display the reverse digits of any 5-digit number.
 #include <stdio.h>
int main()
 {   
  int n, dig;  
  printf("Enter a number:");    
  scanf("%d",&n);   
  while(n>0) 
  {
  dig= n%10;     
 printf("%d",dig);   
   n=n/10;   
   }  
  return 0;
  }

