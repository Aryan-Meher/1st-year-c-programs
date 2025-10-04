//a C program to check whether a number is a palindrome.
           #include<stdio.h>
         int main()
         { 
 int n, reverse = 0, temp,rem; 
   printf("Enter a number to check if it is a palindrome or not\n"); 
   scanf("%d",&n); 
   temp = n; 
   while( n != 0 )
      { 
        rem= n%10; 
         reverse = reverse*10 +rem; 
        n= n/10; 
       } 
        if ( temp== reverse ) 
           printf("%d is a palindrome number.\n", temp); 
       else
          printf("%d is not a palindrome number.\n", temp); 
       return 0;
} 

