#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void division_by_zero(){
    //divisiond by 0
    int x = 1/0;
}
void dead_pointer(){
    //dead pointer
    int var = 3;
    int *dead_pointer = &var;
    free(dead_pointer);  
    *dead_pointer = 5; //Segmentation fault
}
void overflow(){
    //integer overflow
    int overflow = 2147483647;
    overflow = overflow + 1;
}
void memory_leak(){
    //memory leak
    int* memory_leak = malloc(sizeof(*memory_leak));
}
void out_of_bounds(){
     //Out of bounds checking
    char out_of_bounds[8];
    strcpy(out_of_bounds,"Hello World");   
}
void uninitialized_variables(){

    //Uninitialized variables
    int variavel_nao_inicializada;
    variavel_nao_inicializada++;
}
void writing_const_data(){
    //writing const data ----> FAIL :(
    int const teste = 5;
    teste = 2;//redudant code

}
void not_a_multiple_size(){
      //The allocated size 1 is not a multiple of the underlying type's size.
    char* po;
    int* te;
    te = (float*)malloc(sizeof(*po));

}
int main(){   
    return 0;
}
