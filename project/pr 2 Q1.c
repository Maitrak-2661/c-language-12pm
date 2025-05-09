#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter the score (0-100): ");
    scanf("%d", &score);
    
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a value between 0 and 100.\n");
    }
    grade = (score >= 90) ? printf("A") :
            (score >= 80) ? printf("B") :
            (score >= 70) ? printf("C") :
            (score >= 60) ? printf("D") :
            (score >= 50) ? printf("E") :printf("F");

    printf("%c\n", grade);

}
