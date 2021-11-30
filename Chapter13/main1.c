/*
  비밀지도
  bit or 연산을 통해 해결하자
  *** 입력 *** 
  5
  [9, 20, 28, 18, 11]
  [30, 1, 21, 17, 28]

  *** 출력 ***
  // 1row    2row     3row     4row    5row
  ["#####", "# # #", "### #", "# ##", "####"]
*/

#include <stdio.h>

void main(){
        int arr1[] = {9, 20, 28, 18, 11};
        int arr2[] = {30, 1, 21, 17, 28};
        int n = sizeof(arr1)/sizeof(arr1[0]);

        int i, j;
        int row; 

        for(i=0; i<n; i++){
                row = arr1[i] | arr2[i];
                printf("[");
                        for(j = n-1; j >= 0; j--){
                                if( ((row >> j) & 1) == 1)
                                        printf("#");
                                else
                                        printf(" ");
                        }
                printf("]\n");
        }

        return;
}