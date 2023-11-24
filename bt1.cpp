#include<bits/stdc++.h>
using namespace std;
class TinhTong{
	private:
		int a;
		int b;
	public:
		TinhTong(int a,int b);
		void Nhap();
		void Tinh();
};
TinhTong::TinhTong(int a,int b){
	this->a=a;
	this->b=b;
}
void TinhTong::Nhap(){
	cin>>this->a>>this->b;
}
void TinhTong::Tinh(){
	cout<<this->a+this->b;
}
int main(){
	int a,b;
	TinhTong x(a,b);
	x.Nhap();
	x.Tinh();
}
