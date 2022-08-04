#include <iostream>
#define MAX 100

using namespace std;

float find_median(int *arr, int n){
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        
        sum+=arr[i];
    }
    return sum/n;
}

int find_mean(int *arr, int n){
    if(n%2==0)
    {
        return n/2;
    }
    return (n/2-1/2);
}
int find_maximum(int *arr, int n){
    
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int find_minimum(int *arr, int n){
    
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

void import_array(int *arr, int n){
    cout << "\t\tNHAP MANG\n";
    for (int i = 0; i < n; i++)
    {
        cout <<"arr["<<i<<"]= ";
        cin>>arr[i];
    }
    
}

void print_array(int arr[], int n){
    cout << "\t\tXUAT MANG\n";
    for (int i = 0; i < n; i++)
    {
        cout << "arr["<<i<<"]= "<<arr[i]<<endl;
    }
    
}

void sort_array(int *arr, int n){
    //cout <<"\t\tMANG SAU KHI SAP XEP\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp;
            if (arr[i]<arr[j])
            {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    
}

void print_statistics(int *arr, int n){
cout <<"Gia tri trung binh la: " << find_median(arr,n)<<endl;
cout <<"Gia tri MAX la: " << find_maximum(arr,n)<<endl;
cout <<"Gia tri MIN la: " << find_minimum(arr,n)<<endl;
cout <<"Trung vi la: " << "arr["<<find_mean(arr, n)<<"]"<<endl;
}

int main(){
int arr[MAX], n;

cout <<"Nhap so luong mang: ";
cin >> n;
import_array(arr,n);
print_array(arr,n);
// cout <<"Gia tri trung binh la: " << find_median(arr,n)<<endl;
// cout <<"Gia tri MAX la: " << find_maximum(arr,n)<<endl;
// cout <<"Gia tri MIN la: " << find_minimum(arr,n)<<endl;
// cout <<"Trung vi la: " << find_mean(arr, n)<<endl;
cout<<"\n\n\tCac thuoc tinh:\n ";
print_statistics(arr,n);
sort_array(arr,n);
cout <<"\t\tMANG SAU KHI SAP XEP\n";
print_array(arr,n);
}