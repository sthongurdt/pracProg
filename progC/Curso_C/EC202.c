#include <stdio.h> 
int main() { 
    int score = 89;   
    if (score >= 90) 
        printf("%s", "Top 10% \n"); 
    else if (score >= 80) 
        printf("%s", "Top 20% \n"); 
    else if (score > 75) 
        printf("%s", "Pasaste.\n"); 
    else 
        printf("%s", "No pasaste.\n"); 
    return 0;
} 