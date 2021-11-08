/*
    비트 연산을 통해 문자의 대소문자 바꾸기
    - INPUT : StRinG
    - OUTPUT : sTrINg
*/
#include <stdio.h>
#include <string.h>

char *toggleCase(char *a){
    for(int i=0; a[i] != '\0'; i++){
        a[i] ^= 32; // ^= 란 exclusive or 
        /*
            "A" 0100 
            "a" 0110
            ---------
            32  0010
        */
    }
    return a;
}

void main(){
    char str[] = "CheRrY";
    printf("Toggle case : %s\n", toggleCase(str));
    printf("Original string : %s\n", toggleCase(str));

    return;
}