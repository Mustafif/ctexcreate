#include<stdint.h>
#include<stdio.h>

int32_t comapre_str(const char* value, const char* substr);

int main(){
    printf("%d\n", comapre_str("amanda", "brian"));
    return 0;
}