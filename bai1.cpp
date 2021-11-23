//bai1: nhap xuat thong tin sinh vien

#include<iostream>
#include<iostream>
using namespace std;
//Cac thuat toan sap xep
void swap(int &a, int &b){
	int tmp = a;
	a=b;
	b=tmp;
}
void BubbleSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1])
				swap(a[j], a[j+1]);
		}
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<"\t";
	}
}

void SelectionSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		//tìm vi tri phan tu co gia tri nho nhat
		int min=a[i], pMin=i;
		for(int j=i+1;j<n;j++){
			if(min > a[j]){
				min=a[j];
				pMin=j;
			}
		}
		if(i!=pMin){
			swap(a[i], a[pMin]);
		}
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<"\t";
	}
}

void InsertionSort(int a[], int n){
	for (int i=1; i<n; i++){
		int x=a[i];
		int j=i-1;
		while(j>=0&&a[j]>x){
			a[j+i]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<"\t";
	}
}
void QuickSort(int a[], int left, int right){
	int x=a[(left + right)/2];
	int i=left, j=right;
	do{
		while(a[i]<x)
			i++;
		while(a[j]>x)
			j++;
		if(i<=j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}while(i<j);
	if(left<j){
		QuickSort(a, left, j);
	}
	if(right>i){
		QuickSort(a, i, right);
	}
}

//Cac thuat toan tim kiem
int linearSearch(int a[], int n, int key){ 	7 9 4 2 15	7 4 2 9 15
	for(int i=0; i<n; i++){
		if(a[i]==key)
			return i;
	}
	return -1;
}

int binarySearch(int a[], int n, int key){
	int left=0, right=n-1, mid;
	while(left<=right){
		mid = (left+right)/2;
		if(a[mid]==key)
			return mid;
		if(a[mid]<key)
			return=mid+1;
		else
			right=mid-1;
	}
	return -1;
}
int main(){
	int n;
	int a[100];
	cout<<"Nhap so phan tu: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Nhap a["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"Day da nhap: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<"\t";
	}	
	cout<<"\nSap xep: ";
	BubbleSort(a,n);
	
}			
//Do phuc tap cua thuat toan sap xep
/*
	QuickSort		O(nlogn)
	BubbleSort		O(n^2)
	SelectionSort	O(n^2)
	InsertionSort	O(n^2)
*/				
//Do phuc tap cua thuat toan tim kiem
/*
	BinarySearch		O(nlogn)
	LinearSearch		O(n^2)
*/				
				
