//bai1: nhap xuat thong tin sinh vien

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	

	string hoten, mssv, lop, gioitinh, sdt;
	cout << "ho ten: ";
	getline(cin, hoten);
	cout << "mssv: ";
	cin >> mssv;
	cout << "lop: ";
	cin >> lop;
	cout << "gioitinh: ";
	cin >> gioitinh;
	cout << "sdt: ";
	cin >> sdt;
	cout << endl;

	cout << "*****THANH VIEN LOP " << lop << "*****" << endl << endl;
	cout << "Ho ten: " << hoten << endl;
	cout << "Ma so sinh vien: " << mssv << endl;
	cout << "Lop: " << lop << endl << endl;
	cout << "So dien thoai: " << sdt << setw(15) << "Gioi tinh: " << gioitinh << endl;
	cout << "*********************************************";

	return 0;
}

	

	


	

	//code
	//bai8: 
	return 0;
}
