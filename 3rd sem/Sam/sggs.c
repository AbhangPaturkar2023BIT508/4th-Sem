#include <stdio.h> 
  
int main() 
{ 
    int a[5] = { 1, 0, 1, 0, 1 }; 
    int b[5] = { 0, 1, 1, 0, 0 }; 
    int i, product; 
  
    for (i = 0; i < 5; i++) { 
  
        // using product method 
        product = a[i] * b[i]; 
  
        printf("\n %d AND %d = %d", 
               a[i], b[i], product); 
    } 
} 
  
        // using the + operator 
        if (a[i] + b[i] > 0) 
            or_ans = 1; 
        else
            or_ans = 0; 
  
        printf("\n %d AND %d = %d", 
               a[i], b[i], or_ans); 
    } 
} 
        if (a[i] == 1 && b[i] == 1) 
            ans = 0; 
        else
            ans = 1; 
        printf("\n %d NAND %d = %d", 
               a[i], b[i], ans); 
    } 
} 
