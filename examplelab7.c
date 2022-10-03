#include<stdio.h>

void printArray(int *, int);
void getValues(int *, int);

int main(){

    int arrSize;
    printf("Enter size of array: ");
    scanf("%d",&arrSize);
    //int arr[5] = {1, 2, 3, 4, 5}; // declaration
    int arr[arrSize]; // declaration
    int size = sizeof(arr)/sizeof(arr[0]); //ใช้ในฟังก์ชันสร้างเองไม่ได้

    //get value
    // for (int i = 0 ; i< size ; i++){
    //     printf("Enter a number value : ");
    //     scanf("%d", &arr[i]); //เพิ่มค่าทับได้
    // }
    getValues(arr, size);

    // printf("Size of array: %llu\n", sizeof(arr)); //4 bytes x 5 element = 20 bytes
    // printf("Size of element: %llu\n", sizeof(arr[0])); //4 bytes
    
    printArray(arr, size); //ส่งแค่ชื่อ ขนาดไม่ต้อง และไม่ใส่ &
    //printout
    //for (int i = 0 ; i< size ; i++){
        //printf("%d\t", arr[i]);
    //}
    return(0);
}
    void printArray(int *a, int s){
        for (int i = 0 ; i < s ; i++){
            printf("%d\t", a[i]);
        }
        printf("Size of array (in function): %llu\n", sizeof(a)); //8 size pointer
        printf("Size of element: %llu\n", sizeof(a[0])); //4 bytes
    }

    void getValues(int *a, int s){
        //get value
        for (int i = 0 ; i< s ; i++){
            printf("Enter a number value : ");
            scanf("%d", &a[i]); //เพิ่มค่าทับได้
    }
    }