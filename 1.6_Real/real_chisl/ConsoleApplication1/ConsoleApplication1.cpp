
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
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main() {
//	double a;
//	cin >> a;
//	a = a - trunc(a);
//	a = trunc(a * 10);
//	cout << a;
//		return 0;
//}

//3 Использование формулы герона  
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main() {
//	double a, b, c, S, pol;
//	cin >> a >> b >> c;
//	pol = (a + b + c) / 2;
//	S = sqrt(pol * (pol - a) * (pol - b) * (pol - c));
//	cout << S;
//	return 0;
//}


//4
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//	int main() {
//		double proc, ru, kop, itog_kop;
//		cin >> proc >> ru >> kop;
//		ru = ru * 100;
//		itog_kop = ((((ru + kop) * (proc/100)) + ru + kop));
//		cout << trunc(itog_kop / 100) << " " << int(itog_kop) % 100;
//		return 0;
//}

//5
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main() {
//	int let, i = 0;
//	double proc, ru, kop, itog_kop, ru_kop;
//	cin >> proc >> ru >> kop >> let;
//	ru_kop = ru  * 100+ kop;
//	while (i != let) {
//		itog_kop = ((((ru_kop) * (proc / 100)) + ru_kop));
//		i = i + 1;
//		ru_kop = trunc(itog_kop);
//	}
//	cout << trunc(itog_kop / 100) << " " << int(itog_kop) % 100;
//	return 0;
//}

//6
//#include <iostream> 
//#include <iomanip>
//using namespace std;
//int main() {
//	double n, sum = 0, i = 0;
//	while (cin >> n and n) {
//			sum = sum + n;
//			i++;
//	}
//		cout <<setprecision(11) << sum / i ;
//		return 0;
//}

//7 
//#include <iostream> 
//#include <iomanip>
//#include <cmath>
//using namespace std;
//int main() {
//	double x, sum = 0, kv_sum=0, i = 0, res;
//	while (cin >> x and x) {
//		sum += x;
//		kv_sum += pow(x,2);
//		i++;
//	}
//	res = sqrt((kv_sum - (pow(sum, 2) / i)) / (i - 1));
//	cout << setprecision(11) << res;
//	return 0;
//}


//8
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main() {
//	double n, x, a, px = 0;
//	cin >> n >> x;
//		while (cin >> a) {
//			cin >> a;
//			px = px * x + a;
//		}
//		cout << px;
//		return 0;
//}

//9
//#include <iostream>
//#include <cmath>
//#include <iomanip> // библиотека для работы с форматированием вывода
//using namespace std;
//int main() {
//	double a, b, c, dis;
//	cin >> a >> b >> c;
//	dis = pow(b, 2) - (4 * a * c);
//	if (dis > 0) {
//		cout  <<  (-b - sqrt(dis)) / (2 * a)<< " " << (-b + sqrt(dis)) / (2 * a);
//	}
//	else if (dis == 0) {
//		cout << -b / (2 * a);
//	}
//	return 0;
//}

//10
//#include <iostream>
//#include <cmath>
//#include <iomanip> // библиотека для работы с форматированием вывода
//using namespace std;
//int main() {
//	double a, b, c, dis;
//	cin >> a >> b >> c;
//	dis = pow(b, 2) - (4 * a * c);
//	if (dis > 0 and a!=0) {
//		cout << 2 << " " << min((-b - sqrt(dis)) / (2 * a), (-b + sqrt(dis)) / (2 * a)) << " " << max((-b + sqrt(dis)) / (2 * a), (-b - sqrt(dis)) / (2 * a));
//	}
//	else if (a == 0 and b!=0 and c!=0) {
//		cout << 1 << " " << -c / b;
//	}
//	else if (a == b and b == 0 and c == b) {
//		cout << 3;
//	}
//	else if (a == 0 and b == 0 and c != 0){
//		cout << 0;
//	}
//	else if (dis == 0) {
//		cout << 1 << " " << -b / (2 * a);
//	}
//	else {
//		cout << 0;
//	}
//	return 0;
//}
 
//11
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double y, x, a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if (a) {
		y = ((f * a) - (c * e)) / ((d * a) - (c * b));
		x = (e - (b * y)) / a;
	}
	else {
		y = e / b;
		x = (f - (d * y)) / c;
	}
	cout << x << " " << y;
	return 0;
}
// 11 метод крамера 
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	double y, x, a, b, c, d, e, f;
//	cin >> a >> b >> c >> d >> e >> f;
//	y = (a * f - c * e) / (a * d - b * c);
//	x = (e * d - b * f) / (a * d - b * c);
//	cout << x << " " << y;
//	return 0;
//}