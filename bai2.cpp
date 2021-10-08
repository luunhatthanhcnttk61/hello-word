//bai2: nhap so 3 chu so , xuat ra hang tram , hang chuc , hang dvi

#include<iostream>
using namespace std;
int kiemTraSoAm(int n)
{
	if (n > 0) return n;
	else return n * (-1);
}
int main()
{
	
	
	int a,b;
	cout << " nhap so 3 chu so = ";
	cin >> a;
	b = kiemTraSoAm(a);							// dung ham : neu la so am thi chuyen sang so duong
	while ((b < 100) || (b > 999))				// neu so khong phai so  3 chu so thi nhap lai
	{
		cout << " yeu cau nhap lai ";
		cin >> b;
	}
	cout << " hang tram: " << b / 100;
	cout << " hang chuc: " << (b / 10) % 10;
	cout << " hang don vi " << b % 10;
	return 0;
}