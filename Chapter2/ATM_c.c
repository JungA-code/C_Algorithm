#include <stdio.h>
#include <string.h>

int sort(int *n_time, int len){
    int temp;

    for(int i = 0; i<len-1; i++){
        for(int j=i; j<len; j++){
            if(n_time[i] >= n_time[j]){
                temp = n_time[i];
                n_time[i] = n_time[j];
                n_time[j] = temp;
            }
        }
    }

    for(int i=0; i<len; i++) printf("sort : %d\n", n_time[i]);

}

void main(){
    int len;
    int sum=0;
    int reslut=0;
    scanf("%d", &len);
    
    int n_time[len];
    for(int i=0; i<len; i++) scanf("%d", n_time+i);
    
    sort(n_time, len);
    
    for(int i = 0; i< len; i++) {
        sum += n_time[i];
        reslut += sum;
    }
    printf("result : %d\n", reslut);

    
    return;
}