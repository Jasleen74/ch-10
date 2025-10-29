/*Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.*/
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("harry2.txt", "r");   // here if as haary2.txt dosent exist then it will give us that the file not exists


    if (ptr ==NULL){
        printf("The file dosent exist");
    }
    else  {
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);
    }

    fclose(ptr);
    return 0;
}