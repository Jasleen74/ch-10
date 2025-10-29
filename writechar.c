#include<stdio.h>
int main() {
      
    FILE *ptr;
    ptr = fopen("harry.txt","w");

    fputc('c',ptr);
  
 return 0;
}