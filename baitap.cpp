#include<stdio.h>
#include<math.h>

bool dktamgiac(int a, int b, int c){
	if(a<=0 & b<=0 & c<=0){
		return false;
	} else {
		}
		if(a+b>c && b+c>a && a+c>b) {
			return true;	
		} else
			return false;
}

//chu vi tam giac
int Ptamgiac(int a, int b, int c) {
	int p = a + b + c;
	return p;
}

//dien tich tam giac
float Stamgiac(int a, int b, int c) {
	float p = (a + b + c)/ 2;
	float s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

//tong cac chu so cua 1 so nguyen n
int sumcuan(int n) {
	int k = 0;
	for(;n!=0;){
		int sodu = n % 10;
			k += sodu;
			n = n/10;
	}
	return k;
}

//uoc chung lon nhat
int ucln(int a, int b) {
	for(;a != b;) { 
		if(a>b) {
			a = a - b;
		} else {
			b = b - a;
		}
	}
	return a;
}	

//boi chung nho nhat
int bcnn(int a, int b) {
	int UCLN = ucln(a, b);
	int k = (a * b)/ UCLN;
	return k; 
}

//so chinh phuong
bool sochinhphuong(int a) {
	int n;
	a = sqrt(n);
	if((a*a) == n) {
		return true;
	}
		return false;
}

//so nguyen nho nhat
int snn(int n) {
	int s = 0;
		n = 0;
	while(s<10000) {
		n++;
		s += n;
	}
	return n;
}


