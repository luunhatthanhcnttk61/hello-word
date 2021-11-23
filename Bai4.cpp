#include<iostream>
#include<math.h>
using namespace std;
struct Point{
	float x;
	float y;
};
float distance(Point p){
	return sqrt((p.x*p.x)+(p.y*p.y));
}
void swap(Point &a, Point &b){
	Point p=a;
	a=b;
	b=p;
}
void input(Point &p){
	cout<<"\n\tNhap x: ";
	cin>>p.x;
	cout<<"\tNhap y: ";
	cin>>p.y;
}
void display(Point p){
	cout<<"("<<p.x<<", "<<p.y<<")\n";
}
void SapXep(Point *p, int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(distance(p[j])>distance(p[j+1]))
				swap(p[j],p[j+1]);
		}
	}
	for(int i=0; i<n; i++){
		cout<<"\n\tA["<<i<<"] = ";
		display(p[i]);
	}
}
void Search(Point *p, int n, float r){
	for(int i=0; i<n; i++){
		if(distance(p[i])<r){
			cout<<"\n\tA["<<i<<"] = ";
			display(p[i]);
		}
	}
}
void Haiphiatruchoanh(Point *p, int n){
	int dem=0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(p[i].y*p[j].y < 0){
				cout<<"\n\tA["<<i<<"] = ";
				display(p[i]);
				cout<<"\tA["<<j<<"] = ";
				display(p[j]);
				dem++;
			}
		}
	}
	if(dem==0)
		cout<<"Khong co cap nao!";
}
void SearchD(Point *p, int n, float d){
	int dem=0;
	for(int i=0; i<n; i++){
		if(distance(p[i])==d){
			cout<<"\n\tA["<<i<<"] = ";
			display(p[i]);
			dem++;
		}
	}
	if(dem==0)
		cout<<"Khong co diem nao!";
}
int main(){
	int n;
	float R, d;
	cout<<"Nhap so phan tu: ";
	cin>>n;
	Point *p=new Point[n];
	for(int i=0; i<n; i++){
		cout<<"Nhap diem A["<<i<<"]: ";
		input(p[i]);
	}
	cout<<"Cac diem da nhap: ";
	for(int i=0; i<n; i++){
		cout<<"\n\tA["<<i<<"] = ";
		display(p[i]);
	}
	cout<<"**********************\n";
	cout<<"Nhap R: ";
	cin>>R;
	cout<<"Cac diem nam trong ban kinh: ";
	Search(p, n , R);
	cout<<"**********************\n";
	cout<<"Cac cap diem nam tren 2 phia truc hanh: ";
	Haiphiatruchoanh(p, n);
	cout<<"**********************\n";
	cout<<"Nhap d: ";
	cin>>d;
	cout<<"Cac diem co khoang cach tu goc toa do bang d: ";
	SearchD(p, n , d);
	cout<<"\n**********************\n";
	cout<<"Sap xep: ";
	SapXep(p,n);
	delete p;
}
				
