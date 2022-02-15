#include<iostream>
#include<cmath>
using namespace std;

class ComplexNumber{				
	public:
		double real;
		double imag;
		ComplexNumber(double,double);
		ComplexNumber operator+(const ComplexNumber &);
		ComplexNumber operator+(const ComplexNumber &,double);
		ComplexNumber operator+(double,const ComplexNumber &);
		ComplexNumber operator-(const ComplexNumber &);
		ComplexNumber operator-(const ComplexNumber &,double);
		ComplexNumber operator-(double,const ComplexNumber &);
		ComplexNumber operator*(const ComplexNumber &);
		ComplexNumber operator*(const ComplexNumber &,double);
		ComplexNumber operator*(double,const ComplexNumber &);
		ComplexNumber operator/(const ComplexNumber &);
		ComplexNumber operator/(const ComplexNumber &,double);
		ComplexNumber operator/(double,const ComplexNumber &);
		bool operator==(const ComplexNumber &);
		double abs();
		double angle();
};

ComplexNumber::ComplexNumber(double x = 0,double y = 0){
	real = x; imag = y;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &c){
	return ComplexNumber(real+c.real,imag+c.imag);
}

ComplexNumber operator+(const ComplexNumber &c,double s){
	return ComplexNumber(c.real,s+c.imag);
}

ComplexNumber operator+(double s,const ComplexNumber &c){
	return ComplexNumber(s+c.real,c.img);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &c){
	return ComplexNumber(real-c.real,imag-c.imag);
}

ComplexNumber operator-(const ComplexNumber &c,double s){
	return ComplexNumber(-c.real,s-c.imag);
}

ComplexNumber operator-(double s,const ComplexNumber &c){
	return ComplexNumber(s-c.real,-c.img);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &c){
	return ComplexNumber(real*c.real,imag*c.imag);
}

ComplexNumber operator*(const ComplexNumber &c,double s){
	return ComplexNumber(c.real,s*c.imag);
}

ComplexNumber operator*(double s,const ComplexNumber &c){
	return ComplexNumber(s*c.real,c.img);
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber &c){
	return ComplexNumber(real/c.real,imag/c.imag);
}

ComplexNumber operator/(const ComplexNumber &c,double s){
	return ComplexNumber(c.real,s/c.imag);
}

ComplexNumber operator/(double s,const ComplexNumber &c){
	return ComplexNumber(s/c.real,c.img);
}

bool ComplexNumber::operator==(const ComplexNumber &c){
	if(real == c.real && imag == c.imag){
			return true;
	}else{
		return false;
	}
}

double abs(){

}

double angle(){

}

ostream & operator<<(ostream &os, const ComplexNumber &c){
	return os << "(" << c.real << ")+(" << c.imag << ")*i";
}

int main(){
	ComplexNumber a(1.5,2),b(3.2,-2.5),c(-1,1.2);	
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << a+2.5 << "\n";
	cout << 2.5+a << "\n";
	cout << a-1.5 << "\n";
	cout << 1.5-a << "\n";
	cout << b+ComplexNumber(0,2.5) << "\n";
	cout << c-c << "\n";
	cout << "-----------------------------------\n";
	
	ComplexNumber d = (a+b)/c;
	ComplexNumber e = b/(a-c);
	cout << d << "\n";
	cout << e << "\n";
	cout << c*2 << "\n";
	cout << 0.5*c << "\n";
	cout << 1/c << "\n";
	cout << "-----------------------------------\n";
	
	cout << ComplexNumber(1,1).abs() << "\n";
	cout << ComplexNumber(-1,1).abs() << "\n";
	cout << ComplexNumber(1.5,2.4).abs() << "\n";
	cout << ComplexNumber(3,4).abs() << "\n";
	cout << ComplexNumber(69,-9).abs() << "\n";		
	cout << "-----------------------------------\n";	
	
	cout << ComplexNumber(1,1).angle() << "\n";
	cout << ComplexNumber(-1,1).angle() << "\n";
	cout << ComplexNumber(-1,-1).angle() << "\n";
	cout << ComplexNumber(1,-1).angle() << "\n";
	cout << ComplexNumber(5,2).angle() << "\n";
	cout << "-----------------------------------\n";
	
	cout << (ComplexNumber(1,1) == ComplexNumber(1,2)) << "\n";
	cout << (ComplexNumber(1,1) == 1) << "\n";
	cout << (0 == ComplexNumber()) << "\n";
}





