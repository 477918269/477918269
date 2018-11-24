#define _CRT_SECURE_NO_WARNINGS 1
void BubbleSort1(int *arr,int sz){
    int i = 0;
    int j = 0;
    assert(arr);
    for(i=0;i<sz-1;i++){
        for(j=0;j<sz-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }