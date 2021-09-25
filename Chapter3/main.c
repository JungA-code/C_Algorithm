/*배열 중 값 0을 찾아 배열 뒤로 배치시키기 단, 배열 값의 상대적 순서는 유지해야한다
    (예) 
    입력 예제
    {2,3,4,0,6}
    출력 예제
    {2,3,4,6,0}
*/
#include <stdio.h>

void main(){
    int arr1[] = {2,3,0,0,4,0,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[n];
    
    int j=0;
    for(int i=0; i<n; i++){
        if(arr1[i] != 0){
            arr2[j] = arr1[i];
            j = j+1;
        }   
    }

    for(int i=j; i<n; i++){
        arr2[i] = 0;
    }

    for(int i =0; i<n; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return;

}
