//to enter grade(grade-O,E,A,B,C) and display corresponding remarks using switch case statement.
 #include <stdio.h>
int main() 
{
    char grade;
    printf("Enter your grade (O, E, A, B, C): ");
    scanf(" %c", &grade);   // note space before %c to ignore whitespace/newline
    switch(grade) 
    {
        case 'O':
        case 'o':
            printf("Outstanding\n");
            break;
        case 'E':
        case 'e':
            printf("Excellent\n");
            break;
        case 'A':
        case 'a':
            printf("Very Good!\n");
            break;
        case 'B':
        case 'b':
            printf("Good. Keep Improving!\n");
            break;
        case 'C':
        case 'c':
            printf("Satisfactory, but needs improvement.\n");
            break;
        default:
            printf("Invalid grade entered!\n");
    }
    return 0;
}

