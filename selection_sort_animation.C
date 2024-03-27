#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
void displayArray1(int arr[], int size,int i1,int i2,int j, int s) {
    system("cls");


    printf("\n");
    for(int k=0; k<size; k++){
        if( k<s){ printf("\x1b[32m%d \x1b[0m", arr[k]);
        }
        else if (k==i1 || k==i2){ printf("\x1b[31m%d \x1b[0m", arr[k]);
        }
        else{ printf("%d ",arr[k]);
        }
    }
    printf("\n");


    for(int k=0; k<size; k++){
        if (k==j){ printf("^ ");
        }
        else { printf("  ");
        }
    }
   // printf("\n");
   sleep(1);  // Adjusting the delay as needed (microseconds)
}
void swapa(int arr[], int i1,int i2,int size){
    int n=i2-i1+1;
    int n1=n;
    while(n){
    int k=n1-n;
    n--;
    system("cls");
    for (int i=0; i<size; i++){
        if(i==i1+k ){
            printf("\x1b[31m%d \x1b[0m", arr[i1]);
           
        }
        else { printf("  ", arr[i]);
        }
    }
    printf("\n");
    for (int i=0; i<size; i++){
        if(i==i1 || i==i2){
            printf("  ", arr[i]);
        }
        else { printf("%d ", arr[i]);
        }
}
printf("\n");
    for (int i=0; i<size; i++){
        if(i==i2-k ){
            printf("\x1b[31m%d \x1b[0m", arr[i2]);
        }
        else { printf("  ", arr[i]);
        }
    }
    sleep(1);}  
}


void selectionSort(int arr[], int size) {



printf("selection sort animation\n");
        for (int i = 0; i < size - 1; i++){
            int m=INT_MAX;
            int mindex;
            for (int j=i; j<size; j++){
                if (arr[j]<m){ m=arr[j];
                mindex=j;
                }
                displayArray1(arr,size,i,mindex,j,i);
            }
            //swap
            swapa(arr,i,mindex,size);
        int temp = arr[i];
        arr[i] = arr[mindex];
        arr[mindex] = temp;
        //  displayArray1(arr,size,i,m,j,i+1);
        }




}


int main() {
        int n;
     printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    printf("enter %d elements \n",n);
    int arr[n] ;
    for (int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    //int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);
    displayArray1(arr,size,0,0,size-1,size);
    return 0;
}

