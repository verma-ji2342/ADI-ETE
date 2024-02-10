#include <iostream>
using namespace std;

struct Array {
    int A[100];
    int size;
    int length;
};

void Display(struct Array arr) {
    cout<<"Elements of array are : \n";
    for(int i=0 ; i<arr.length ; i++){
        cout<<arr.A[i]<<" ";
    }
}

void Append(struct Array *arr, int x){
    if(arr->length < arr->size) 
    arr->A[arr->length++] = x;
}

void Insert (struct Array *arr, int index, int x ){
    if(index>=0 && index <= arr->length){
        for(int i=arr->length ; i>index ; i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index){
    int x;
    if(index>=0 && index<arr->length){
        x = arr->A[index];
        for(int i=index ; i<arr->length ; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int Search(struct Array arr, int x){
    for(int i=0 ; i<arr.length ; i++){
        if(arr.A[i] == x) return 0;
    }
    return -1;
}

int search1(struct Array *arr, int x){
    for(int i=0 ; i<arr->length ; i++){
        if(arr->A[i] == x){
            swap(arr->A[i],arr->A[i-1]);
            return 0;
        }
    }
    return -1;
}

int search2(struct Array *arr, int x){
    for(int i=0 ; i<arr->length ; i++){
        if(arr->A[i] == x){
            swap(arr->A[i],arr->A[0]);
            return 0;
        }
    }
    return -1;
}

struct Array * Merge(struct Array arr1[], struct Array arr2[]){
    int i, j,k;
    i=0; j=0; k=0;
    struct Array *arr3 = (struct Array *)malloc (sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]) arr3->A[k++] = arr1->A[i++];
        else arr3->A[k++] = arr2->A[j++];
    }
    for(; i<arr1->length ; i++){
        arr3->A[k++] = arr1->A[i];
    }
    for(; j<arr2->length ; j++){
        arr3->A[k++] = arr3->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}

struct Array * Union(struct Array arr1[], struct Array arr2[]){
    int i, j,k;
    i=0; j=0; k=0;
    struct Array *arr3 = (struct Array *)malloc (sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]) arr3->A[k++] = arr1->A[i++];
        else if(arr1->A[i]>arr2->A[j]) arr3->A[k++] = arr2->A[j++w];
        else {arr3->A[k++] = arr2->A[j++]; i++;}
    }
    for(; i<arr1->length ; i++){
        arr3->A[k++] = arr1->A[i];
    }
    for(; j<arr2->length ; j++){
        arr3->A[k++] = arr3->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}

struct Array * Intersection(struct Array arr1[], struct Array arr2[]){
    int i, j,k;
    i=0; j=0; k=0;
    struct Array *arr3 = (struct Array *)malloc (sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]) i++;
        else if(arr1->A[i]>arr2->A[j]) j++;
        else {arr3->A[k++] = arr2->A[j++]; i++;}
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}


int main(){
    struct Array arr1{{2,3,4,5,6},10,5};
    Append(&arr1,10);
    Insert(&arr1,0,12);
    Display(arr1);
    cout<<endl;
    cout<<Delete(&arr1,5)<<endl;
    Display(arr1);
    cout<<endl;
    cout<<Search(arr1, 6)<<endl;
    cout<<search1(&arr1, 10)<<endl;
    Display(arr1);
    cout<<endl;
    cout<<search2(&arr1,10);
    Display(arr1);
    cout<<"\nMerging of two Arrays : \n";
    struct Array arr2 = {{2,6,10,18,25},10,5};
    struct Array arr3 = {{3,4,7,18,20},10,5};
    struct Array *arr4, *arr5, *arr6;
    arr4 = Merge(&arr2 , &arr3);
    Display(*arr4);
    cout<<"\nUnion of two arrays\n";
    arr5 = Union(&arr2, &arr3);
    Display(*arr5);
    cout<<"\nIntersection of two arrays: \n";
    arr6 = Intersection(&arr2, &arr3);
    Display(*arr6);
    return 0;
}