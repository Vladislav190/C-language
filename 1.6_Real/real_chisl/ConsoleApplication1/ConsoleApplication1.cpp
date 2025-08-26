
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main() {
//	//cout << fixed - фиксированная часть (не в экспоненциальной форме)<< (setprecision(3) - установить точно до 3 знаков; округлить значение)
//	double a, v;
//	a = 0.2; v = 0.1;
//	cout << a + v;
//	return 0;
//}

//1
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main() {
//	double a;
//	int b;
//	cin >> a>> b;
//	cout << a - trunc(a) << endl << (int)a%b;
//	return 0;
//}

//2
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double a;
	cin >> a;
	a = a - trunc(a);
	a = trunc(a * 10);
	cout << a;
		return 0;
}