#include<iostream>
using namespace std;
class hocsinh{
	private:
		string Hoten;
		float Toan, Van;
	public:
		hocsinh();
		hocsinh(string Ten, float x, float y);
		hocsinh(string Ten);
		hocsinh(const hocsinh &hs);
		~hocsinh();
		float DTB();
		bool operator > (hocsinh a);
		bool operator < (hocsinh a);
		bool operator == (hocsinh a);
		bool operator >= (hocsinh a);
		bool operator <= (hocsinh a);
		bool operator != (hocsinh a);
		void operator = (hocsinh a);
		friend istream& operator >> (istream &is, hocsinh &h);
		friend ostream& operator << (ostream &os, hocsinh h);
	};
hocsinh::~hocsinh(){
	}
float hocsinh::DTB(){
	return ((Toan+Van)/2);
	}
hocsinh::hocsinh(string Hoten, float Toan, float Van){
	this->Hoten=Hoten;
	this->Toan=Toan;
	this->Van=Van;
	}
hocsinh::hocsinh(string x){
	Hoten=x;
	Toan=0;
	Van=0;
	}
hocsinh::hocsinh(const hocsinh &a){
	Hoten=a.Hoten;
	Toan=a.Toan;
	Van=a.Van;
	}
hocsinh::hocsinh(){
	Hoten="Cristiano Ronaldo";
	Toan=7.5;
	Van=8;
	}
bool hocsinh::operator >(hocsinh a){
	if(DTB()>a.DTB())
		return true;
	else 
		return false;
	}	
bool hocsinh::operator <(hocsinh a){
	if(DTB()<a.DTB())
		return true;
	else 
		return false;
	}
bool hocsinh::operator ==(hocsinh a){
	if(DTB()==a.DTB())
		return true;
	else 
		return false;
	}
bool hocsinh::operator >=(hocsinh a){
	if(DTB()>=a.DTB())
		return true;
	else 
		return false;
	}
bool hocsinh::operator <=(hocsinh a){
	if(DTB()<=a.DTB())
		return true;
	else 
		return false;
	}
bool hocsinh::operator !=(hocsinh a){
	if(DTB()!=a.DTB())
		return true;
	else 
		return false;
	}
void hocsinh::operator =(hocsinh a){
	Hoten=a.Hoten;
	Toan=a.Toan;
	Van=a.Van;
	}
istream& operator >> (istream &is, hocsinh &hs){
	fflush(stdin);
	cout << "Nhap ho ten: ";
	getline(is,hs.Hoten);
	cout<<"Nhap diem toan: ";
	is>>hs.Toan;
	cout<<"Nhap diem van: ";
	is>>hs.Van;
	return is;
	}
ostream& operator << (ostream &os, hocsinh hs){
	os<<"Ho va ten: " <<hs.Hoten<<endl;
	os<<"Diem Toan: " <<hs.Toan<<endl;
	os<<"Diem Van: " <<hs.Van<<endl;
	}
int main (){
	hocsinh a("Lionel Messi", 7.5, 8), b("Benjamin Pavard"), c(a), d, e("Kimmich"), f;
	cin>>d;
	cout<<"**************************************************"<<endl;
	cout<<d;
	cout<<a;
	cout<<b;
	cout<<c;
	e=f;
	cout<<e;
	if(b<e)
		cout<<"Pavard thap diem hon Ronaldo"<<endl;;
	if(a>b)
		cout<<"Messi cao diem hon Pavard"<<endl;
	if(a==e)
		cout<<"Messi bang diem Ronaldo"<<endl;
	if(a<=b)
		cout<<"A <= B"<<endl;
	if(a>=b)
		cout<<"A >= B"<<endl;
	if(a!=b)
		cout<<"A khac B"<<endl;
	}
