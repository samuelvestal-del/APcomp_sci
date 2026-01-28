#include <stdio.h>
void print_0_10(){
    for (int i=0; i<=10; i++){
        printf("%d\n", i);
    }
}

void print_2_20(){
    for (int i=2; i<=20; i++){
        printf("%d\n", i);
    }
}



int main(){
    print_0_10();
    print_2_20();
}