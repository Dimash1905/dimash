1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string a = "Silence is golden";
	cout << a << endl;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string a = "Silence is golden";
	cout << a << endl;
	return 0;
}
______________________________________________________________________________________________

2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string a = "Monday";
	string b = "November";
	string d = "Dimash";
	cout << a << endl;
	cout << b << endl;
	cout << d << endl;
	return 0;
}

______________________________________________________________________________________________

3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	for (int i = 0; i < 5; i++) {
		cout << "*";
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}


}

______________________________________________________________________________________________

4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string a = "AAAAA";
	cout << a << endl << a << endl << a << endl << a << endl << a << endl << a << endl << a << endl << a << endl;
	return 0;
}

______________________________________________________________________________________________

5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string a = "*     *     *", b = " *   * *   * ", c = "  * *   * *  ", v = "   *     *   ";
	cout << a << endl << b << endl << c << endl << v << endl;
	return 0;
}
______________________________________________________________________________________________

6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a = 1, b = 2, c = 4;
	cout << a + b - c << endl;
	return 0;
}
______________________________________________________________________________________________

7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a = 1/2, b = 1/4;
	double c;
	c = a + b;
	cout << c << endl;
	return 0;
}

______________________________________________________________________________________________

8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a = 2, b = 3;
	double c;
	c = ((a + 4*b) * (a - 3*b) + pow(a,2.0));
	cout << c << endl;
	return 0;
}

______________________________________________________________________________________________

9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a = -2;
	double c;
	c = abs(a) + pow(a, 5.0);
	cout << c << endl;
	return 0;
}

______________________________________________________________________________________________

10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = 1.7;
	cout << (pow(x + 1, 2.0) + 3 * (x + 1)) << endl;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x = 3;
	cout << (pow(x + 1, 2.0) + 3 * (x + 1)) << endl;
}
______________________________________________________________________________________________

11
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = -2.34;
	double c;
	c = ((abs(x - 5) - sin(x)) / 3) + pow(x * x + 2014,1.0/2) * cos(2 * x - 3);
	cout << c << endl;
}
______________________________________________________________________________________________

12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = 3.6;
	double c;
	c = exp( x - 2) + abs(sin(x)) - pow(x, 4.0) * cos(1 / x);
	cout << c << endl;
}
______________________________________________________________________________________________

13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a = 0.1, b = 0.2, x = 1;
	cout << (pow(x * x + b, 1.0 / 5) - (b * b * pow(sin(x + a), 3.0)) / x) << endl;
}
______________________________________________________________________________________________

14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	double c, v;
	c = a + b;
	v = a * b;
	cout <<"a + b ="<< c << "    " <<" a * b ="<< v << endl;
	return 0;
}
______________________________________________________________________________________________

15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin >> a ;
	double c, v;
	c = pow(a,2.0);
	v = pow(a, 3.0);
	cout <<"square - "<< c << "    " <<"cube- "<< v << endl;
	return 0;
}
______________________________________________________________________________________________

16
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double q, w, e,r;
	q = a * a;
	w = b - 3;
	e = pow(c, 2.0);
	r=(q + w + e);
	cout << r << endl;
	return 0;
}
______________________________________________________________________________________________

17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double q, w;
	q = (a + b + c) / 3;
	w = (2 * (a + c) - 3 * b);
	cout << q<<" " << w;
	cout << endl;
	return 0;
}

______________________________________________________________________________________________

18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << "P=" << 2 * (a + a) << " " << "S=" << a * a << endl;
	return 0;
}
______________________________________________________________________________________________

19
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout <<0.3*a+0.4*b<<" "<<3*( 0.3 * a + 0.4 * b) <<endl;
	return 0;
}

______________________________________________________________________________________________
20
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	double q, w;
	q = (a * 60) * (b * 1000);

	cout <<q<< endl;
	return 0;
}
______________________________________________________________________________________________

21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	double q, w, e;
	q = sqrt(a * a + b * b);
	w = q + a + b;
	e = sqrt(w * (w - a) * (w - q) * (w - b));
	cout << q << " " << w << " " << e << endl;
	return 0;
}
______________________________________________________________________________________________

22
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << ((a * 9 / 5) + 32) << endl;
	return 0;
}
______________________________________________________________________________________________

23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	double v, z;
	cin >> a >> b >> c;
	v = b * c / a;
	z = b / a;
	cout << v << z << endl;;
		return 0;
}
______________________________________________________________________________________________

24
#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	b /= 100;
	for (int i = 0; i < a; i++) {
		c += 3;
		c += c*b;
	}cout << c;
}
______________________________________________________________________________________________

25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b,c;
	cin >> a>> b>>c;
	cout << a * 7 + b * 30 + c * 12 * 30 << endl;
	return 0;
}
______________________________________________________________________________________________

26
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a>> b;
	swap(a, b);
	cout << a <<" "<< b << endl;
	return 0;
}
______________________________________________________________________________________________

27
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b,c;
	cin >> a>> b>>c;
	a = a + b;
	b = c - b + a;
	c = a +c;
	cout << a<<" "<<b<<" "<<c << endl;
	return 0;
}
______________________________________________________________________________________________

28
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b;
	c = a + a * b * 5 / 100;
	cout << c << endl;
	return 0;
}
______________________________________________________________________________________________

29
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b;
	swap(a, b);
	cout << a << " " << b<<endl;
	return 0;
}
______________________________________________________________________________________________

30
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b;
	cin >> a ;
	a = a * a;
	a = a * a;
	b = a * a;
	a = b * a;
	cout << a <<endl;
	return 0;
}
______________________________________________________________________________________________

31
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin >> a>>b>>c ;
	double q, w, e;
	q = a * b;
	w = c * c;
	e = q / w;
	cout << e << endl;
	return 0;
}
______________________________________________________________________________________________

32
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	cout << a % 10 << a / 10;
	return 0;
}
______________________________________________________________________________________________

33
#include<iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (x * 1000 >= y) {
cout << sqrt(x - sqrt(y));
	}
	else {
		cout << "Error";
	}
}
______________________________________________________________________________________________

34
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a > 3) {
		cout << a + 10 << endl;
	}
	else
	{
		cout << a - 10 << endl;
	}
	return 0;
}
______________________________________________________________________________________________

35
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a < 7) {
		cout << "YES"<< endl;
	}
	else if(a>10)
	{
		cout << "NO" << endl;
	}
	else if (a == 9) {
		cout << "ERROR" << endl;
	}
	return 0;
}
______________________________________________________________________________________________

36
#include <iostream>

using namespace std;

int main()
{
	int Month;
	cin >> Month;

	switch (Month)
	{
	case 1: cout << "January"; break;
	case 2: cout << "February"; break;
	case 3: cout << "March"; break;
	case 4: cout << "April"; break;
	case 5: cout << "May"; break;
	case 6: cout << "June"; break;
	case 7: cout << "July"; break;
	case 8: cout << "August"; break;
	case 9: cout << "September"; break;
	case 10: cout << "Oktober"; break;
	case 11: cout << "November"; break;
	case 12: cout << "December"; break;
		return 0;
	}
}
______________________________________________________________________________________________

37
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y, max;
	cin >> x >> y;
	max = x;
	if (max < y)
		max = y;
	cout << max << " " << endl;

	return 0;
}
______________________________________________________________________________________________

38
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y; 
	cin >> x >> y;
	if (abs(x - y) == 100) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}
______________________________________________________________________________________________

39
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y; 
	cin >> x >> y;
	if (x>y) {
		cout << "Yes" << endl;
	}
	else {
		swap(x, y);
		cout <<x <<" "<<y << endl;
	}
	return 0;
}
______________________________________________________________________________________________

40
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x; 
	cin >> x ;
	if (x > -10 && x < 10) {
		cout << x+5 << endl;
	}
	else {
		cout <<x-10 << endl;
	}
	return 0;
}

______________________________________________________________________________________________

41
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x; 
	cin >> x ;
	if (x >= -100 && x <= 100) {
		cout << x-x << endl;
	}
	else {
		cout <<x+1 << endl;
	}
	return 0;
}
______________________________________________________________________________________________

42
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x; 
	cin >> x ;
	if (x >= 2 && x <= 5) {
		cout << x+10 << endl;
	}
	else if(x>=7 && x<=40) {
		cout <<x-100 << endl;
	}
	else if (x<=0 && x>=3000) {
		cout << x * 3 << endl;;
	}
	else {
		cout << x - x << endl;
	}
	return 0;
}
______________________________________________________________________________________________

43
#include <iostream>
using namespace std;
int main()
{
	int Month;
	cin >> Month;

	switch (Month)
	{
	case 1: cout << "winter"; break;
	case 2: cout << "winter"; break;
	case 3: cout << "spring"; break;
	case 4: cout << "spring"; break;
	case 5: cout << "spring"; break;
	case 6: cout << "summer "; break;
	case 7: cout << "summer "; break;
	case 8: cout << "summer "; break;
	case 9: cout << "autumn"; break;
	case 10: cout << "autumn"; break;
	case 11: cout << "autumn"; break;
	case 12: cout << "winter"; break;
		return 0;
	}
}
______________________________________________________________________________________________

44
#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x >> y;
	if (x + y == 10 && x % 2 == 0) {
		cout << x + y << endl;
	}
	else {
		cout<< x * y << endl;
	}
}
______________________________________________________________________________________________

45
#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin >> x >> y>>z;
	if (x>10 && y>10 &&z>10 && x%3==0 && y%3==0) {
		cout << "Yes" << endl;
	}
	else {
		cout<< "No" << endl;
	}
}
______________________________________________________________________________________________


46
#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin >> x >> y>>z;
	if (x%5==0 && y%5==0) {
		cout << x+y  << endl;
	}
	else if(x%5==0 && z%5==0){
		cout<< x+z << endl;
	}
	else if (y % 5 == 0 && z % 5 == 0) {
		cout << y + z << endl;
	}
	else if (x % 5 == 0 && y % 5 == 0 && z % 5 == 0) {
		cout << x + y + z << endl;
	}
	else {
		cout << "Error" << endl;
	}
}
______________________________________________________________________________________________

47
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y, z, max;
	cin >> x >> y >> z;
	 max = x;
	if (max < y)
		max = y;
	if (max < z)
		max = z;
	cout << max << endl;
	return 0;
}
______________________________________________________________________________________________

48
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y, z, max;
	cin >> x >> y >> z;
	 max = x+y;
	if (max < y+z)
		max = y+z;
	if (max < z+x)
		max = z+x;
	cout << max << endl;
	return 0;
}
______________________________________________________________________________________________

49
#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a % 2 == 1 && a >= b&& a >= c&& a >= d) {
		cout << a;
	}else if (b % 2 == 1 && b >= a&& b >= c&& b >= d) {
		cout << b;
	}else if (c % 2 == 1 && c >= b&& c >= a&& c >= d) {
		cout << c;
	}else if (d % 2 == 1 && d >= b&& d >= c&& d >= a) {
		cout << d;
	}
	else {
		cout << "not found";
	}
}
______________________________________________________________________________________________

50
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	 if (x==y || x == z || y == z) {
		 cout << "Yes" << endl;
	}

	 else {
		 cout << "No" << endl;
	 }
	return 0;
}

______________________________________________________________________________________________
































