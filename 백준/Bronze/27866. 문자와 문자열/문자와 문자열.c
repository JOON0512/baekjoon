#include <stdio.h>
int main(void){
    
    int n;
    char input[1001] = {0}; 
    
    scanf("%s", input);
    scanf("%d", &n);
    printf("%c", input[n-1]);
    
    return 0;
}