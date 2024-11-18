#include <iostream>

int sumOfArrayElements(int arr[],int i) {
        i-=1;
        if(i<0)  {
                return 0;
        }
        return arr[i] + sumOfArrayElements(arr,i);
}

int main() {
        int arr[] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};

        int suma = sumOfArrayElements(arr,20);
        std::cout<<"suma = "<<suma<<std::endl;

        return 0;
}

