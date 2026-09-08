#include <stdio.h>

int main() {
    int tableau[2][10];
    int i;

   
    for (i = 0; i < 10; i++) {
        tableau[0][i] = i;         
        tableau[1][i] = i * 3;     
    }

  
    for (int ligne = 0; ligne < 2; ligne++) {
        
   