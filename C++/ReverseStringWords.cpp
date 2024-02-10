#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int count(char arr[]){  
    int count=0;  
    for (int i=0;arr[i]!='\0';i++){  
        count++;  
    }  
    return count;  
}  

char* reverse(char arr[],int x){  
    int start=0,end=x-1;  
    while(start<end){
        int temp=arr[start];  
        arr[start]=arr[end];  
        arr[end]=temp;  
        start++;  
        end--;  
    }
    
    arr[x]=' ';
    arr[x+1]='\0';
    return arr;
    }





void reverseStringWordWise(char arr[]) {
    int n=count(arr);  
    int i=n-1; 
    char arr2[n]={0};
    for (i;i>=0;i--){  
        int j=0;  
        char arr1[n];  
        while(!isspace(arr[i]) and i>=0){   
            arr1[j]=arr[i];  
            j++;  
            i--;  
        } 
        
        arr1[j]='\0';  
          
        reverse(arr1,j);  
        strcat(arr2,arr1);
    }
    strcpy(arr,arr2);
}


int main() 
{
  char chr[40];
  cin.getline(chr,40);
  cout<<chr<<endl;
  reverseStringWordWise(chr);
  cout<<chr<<endl;
  return 0;
}