//program to enter two values from the keyboard and calculate LCM and GCD.
         #include <stdio.h>
        int main()
        {
        int n1, n2, product, gcd, lcm;
        printf("Enter two numbers: ");
       scanf("%d %d", &n1, &n2);
      printf("Numbers are: %d and %d\n", n1, n2);
    product = n1 * n2;       
    int a= n1, b= n2;   //a and b are temporary variables storing the copied values
    while (a != b) 
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
      }
    gcd = a;                
    lcm = product / gcd;      // LCM formula
    printf("GCD is: %d\n", gcd);
    printf("LCM is: %d\n", lcm);
    return 0;
}

