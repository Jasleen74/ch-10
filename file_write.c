#include<stdio.h>
int main() {
     FILE *ptr;
    ptr = fopen("harry.txt", "w");
    int num  = 7;          // here it deleted the whole file first then write the new thing
    
    fprintf(ptr , "%d",num);
    fclose(ptr);
  
 return 0;
}