#include<iostream>
#include<math.h>
using namespace std;
struct Book{
	string name;
	int page;
};
void swap(Book &a, Book &b){
	Book tmp=a;
	a=b;
	b=tmp;
}
void input(Book &b){
	cout<<"\n\tNhap ten sach: ";
	fflush(stdin);
	getline(cin, b.name);
	cout<<"\tNhap so trang: ";
	cin>>b.page;
}
void display(Book b){
	cout<<"Ten sach: "<<b.name<<endl;
	cout<<"So trang: "<<b.page<<endl<<endl;
}
void NameSort(Book *b, int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(b[j].name.compare(b[j+1].name)>0)
				swap(b[j], b[j+1]);
			}
		}
	for(int i=0; i<n-1; i++){
		display(b[i]);
	}
}
void PageSort(Book *b, int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(b[j].page<b[j+1].page)
				swap(b[j], b[j+1]);
			}
		}
	for(int i=0; i<n-1; i++){
		display(b[i]);
	}
}
void NameSearch(Book *b, int n, string k){
	int D=0;
	for(int i=0; i<n; i++){
		if(k.compare(b[i].name)==0){
			display(b[i]);
			D++;
		}
	}
	if(D==0)
		cout<<"\nKhong tim thay sach can tim!";
}
void ThongKe(Book *b, int n, int k){
	int D=0;
	for(int i=0; i<n; i++){
		if(b[i].page<k){
			display(b[i]);
			D++;
		}
	}
	if(D==0)
		cout<<"\nKhong co sach nao co so trang it hon "<<k;
}	
int main(){
	int n;cout<<"Nhap so cuon sach: ";
	cin>>n;
	Book *p=new Book[n];
	for(int i=0; i<n; i++){
		cout<<"Nhap cuon sach thu "<<i+1<<": ";
		input(p[i]);
	}
}	
	
	
