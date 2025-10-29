#include<stdio.h>
int main() {
     FILE *ptr;
    ptr = fopen("harry.txt", "a");
    int num  = 4;          // here it keeps the whole file and just ads hte new thing
    
    fprintf(ptr , "%d",num);
    fclose(ptr);
  
 return 0;
}