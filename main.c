#include <stdio.h>
void Add(int *p) {
    *p = *p + 1;
}
void Double(int* A,int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        A[i] = A[i] * 2;
        printf("A[%d] = %d\n",i,A[i]);
    }
}
int main(void) {
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[0]);
    int size = sizeof(arr) / sizeof(arr[0]);
    int siarr = sizeof(arr);
    printf("Size of array is %d\n",siarr);
    Double(arr,size);//arr表示首元素的地址
    return 0;//返回值
}