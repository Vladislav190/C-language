//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	if (a < 0 && b > 0) {
//		cout << -a;
//	}
//	else if (b < 0 && a > 0) {
//		cout << -b;
//	}
//	else if (a < 0 && b < 0) {
//		cout << -a << " " << -b;
//	}
//	else {
//		cout << (a % 2 == 0);
//	}
//	return 0;
//}

// 1
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	if (a >= b) {
//		cout << a;
//	}
//	else {
//		cout << b;
//	}
//}

//2
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	bool v = a > b;
//	if (a > b || a == b){
//		cout << v;
//	}
//	else {
//		cout << 2;
//	}
//}

//3
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << max(max(a, b), c);
//	return 0;
//}

//4
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	if ((a + b > c) && 
//		(a + c > b) && 
//		(b + c > a)) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}

// 5
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	bool v = (a == b || b == c || c == a);
//	if (a == b && b == c) {
//		cout << 3;
//	}
//	else  {
//		cout << 2 * v;
//	}
//	return 0;
//}

//6 
//#include <iostream>
//using namespace std;
//int main() {
//	int a1, b1, a2, b2;
//	cin >> a1 >> b1 >> a2 >> b2;
//	if (a1 == a2 || b1 == b2) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}

//7
//#include <iostream>
//using namespace std;
//int main() {
//	int a1, b1, a2, b2;
//	cin >> a1 >> b1 >> a2 >> b2;
//	bool vert_gor, usl_a, usl_b;
//	vert_gor = (a1 == a2 || b1 == b2);
//	usl_a = (max(a1, a2) - min(a1, a2)) == 1;
//	usl_b = (max(b1, b2) - min(b1, b2)) == 1;
//	if ((usl_a || usl_b) && vert_gor) {
//		cout << "YES";
//	}
//	else if (usl_a && usl_b) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}

//8
//#include <iostream>
//using namespace std;
//int main() {
//	int a1, b1, a2, b2;
//	cin >> a1 >> b1 >> a2 >> b2;
//	if ((max(a1, a2) - min(a1, a2)) == (max(b1, b2) - min(b1, b2))) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}

//9
//#include <iostream>
//using namespace std;
//int main() {
//	int a1, b1, a2, b2;
//	cin >> a1 >> b1 >> a2 >> b2;
//	bool vert_gor, usl;
//	vert_gor = (a1 == a2 || b1 == b2);
//	usl = ((max(a1, a2) - min(a1, a2)) == (max(b1, b2) - min(b1, b2)));
//	if (vert_gor || usl) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}

//10
//#include <iostream>
//using namespace std;
//int main() {
//	int a1, b1, a2, b2;
//	cin >> a1 >> b1 >> a2 >> b2;
//	bool usl_1, usl_2;
//	usl_1 = max(a1, a2) - min(a1, a2) == 2 && (max(b1, b2) - min(b1, b2)) == 1;
//	usl_2 = max(a1, a2) - min(a1, a2) == 1 && (max(b1, b2) - min(b1, b2)) == 2;
//	if (usl_1 || usl_2) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}

////11
//#include <iostream>
//using namespace std;
//int main() {
//	int n, m, kus;
//	cin >> n >> m >> kus;
//	if (((kus % n == 0) or (kus % m == 0)) and (kus <= m * n)) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}

//12
//#include <iostream>
//using namespace std;
//int main() {
//	int n, m, x, y, bol, mal, x2, y2;
//	cin >> n >> m >> x >> y;
//	bol = max(m, n);
//	mal = m + n - bol;
//	x2 = mal - x;
//	y2 = bol - y;
//	if (x2 > x)  {
//		x2 = x;
//	}
//	if (y < y2) {
//		y2 = y;
//	}
//	if (x2 > y2) {
//		cout << y2;
//	}
//	else {
//		cout << x2;
//	}
//	return 0;
//}

//13
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c, min, max;
//	cin >> a >> b >> c;
//	if (a <= b and a <= c) {
//		min = a;
//		if (b >= c) {
//			max = b;
//		}
//		else {
//			max = c;
//		}
//	}
//	else if (b < a and b < c) {
//		min = b;
//		if (a >= c) {
//			max = a;
//		}
//		else {
//			max = c;
//		}
//	}
//	else {
//		min = c;
//		if (a >= b) {
//			max = a;
//		}
//		else {
//			max = b;
//		}
//	}
//	cout << min << " " << a + b + c - max - min << " " << max; 
//	return 0;
//}


// Метод сортировки 
////#include <iostream>
////using namespace std;
////int main() {
////	int a, b, c, tmp;
////	cin >> a >> b >> c;
////	if (a > b) { tmp = a; a = b; b = tmp; }
////	if (a > c) { tmp = a; a = c; c = tmp; }
////	if (b > c) { tmp = b; b = c; c = tmp; }
////	cout << a << " " << b << " " << c;
////	return 0;
////}


//14
#include <iostream>
using namespace std;
int main() {
	int a, b, c, a2, b2, c2, tmp, tmp2;
	cin >> a >> b >> c >> a2 >> b2 >> c2;
	if (a > b) { tmp = a; a = b; b = tmp; }
	if (a > c) { tmp = a; a = c; c = tmp; }
	if (b > c) { tmp = b; b = c; c = tmp; }

	if (a2 > b2) { tmp2 = a2; a2 = b2; b2 = tmp2; }
	if (a2 > c2) { tmp2 = a2; a2 = c2; c2 = tmp2; }
	if (b2 > c2) { tmp2 = b2; b2 = c2; c2 = tmp2; }
	bool bol = (a == a2 and b == b2 and c == c2);

	if (((a >= a2 and b >= b2) and c >= c2) and not bol){
		cout << "The first box is larger than the second one";
	}
	else if (((a <= a2 and b <= b2) and c <= c2) and not bol){
		cout << "The first box is smaller than the second one";
	}
	else {
		if (bol) {
			cout << "Boxes are equal";
		}
		else {
			cout << "Boxes are incomparable";
		}

	}
	return 0;
}