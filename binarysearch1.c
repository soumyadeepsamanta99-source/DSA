#include<stdio.h>
int binarysearch (int array[],int x, int low,int high);{
while(low<=high){
    int mid=low+(high-low){
        int mid=low+(high-low)/2;
        if(x==array[mid]){
            low=mid+1;
        }
        else
        high=mid-1;
    }

}
return -1;
}
int main(){
    int array[]={10,15,20,25,30,35,40,45,50,55,60};
    int n = sizeof(array)/sizeof(array[0]);
    int x = 45;
    int result = binarysearch(array,x,0,n-1);
    if (result == -1){
        printf("Not Found");
    }
    else{
        printf("found at %d",result);
    }
    return 0;
}