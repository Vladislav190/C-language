////1
//#include <iostream>
//# include <vector>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main(){
//	int n;
//	cin >> n;
//	vector <int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i += 2) {
//		cout << a[i] << " ";
//	}
//	return 0;
//}

////2 
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector <int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (a[i] % 2 == 0) {
//			cout << a[i] << " ";
//		}
//	}
//}


//3
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n, col = 0;
//	cin >> n;
//	vector <int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (a[i] > 0) {
//			col++;
//		}
//	}
//	cout << col;
//}

//4
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector <int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int r = 1; r < n; r++) {
//		if (a[r] > a[r - 1]) {
//			cout << a[r] << " ";
//		}
//	}
//	return 0;
//}


//bool(n > a) * a + bool(not(n > a)) * n <<" "<< bool(n>a) * n + bool(not(n>a))*a // - сравнение двух чисел


//5
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector <int> a(n);
//	cin >> a[0];
//	for (int i = 1; i < n; i++) {
//		cin >> a[i];
//		if ((a[i] * a[i - 1]) > 0) {
//			cout << min(a[i], a[i - 1]) << " " << max(a[i], a[i - 1]);
//			break;
//		}
//	}
//	return 0;
//}


////6
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	double n, c, x;
//	cin >> n;
//	vector <double> a;
//	for (int i = 0; i < n; i++) {if (cin >> c, c > 0) {a.push_back(c);}}
//	x = a[0];
//	for (int i = 0; i < a.size(); i++){if (x > a[i]) {x = a[i];}}
//	cout << x; 
//	return 0;
//}

//7
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n, x, c;
//	cin >> n;
//	vector <double> a;
//	for (int i = 0; i < n; i++) if (cin >> x, x % 2 != 0) {a.push_back(x);}
//	if (a.size() == 0) {cout << 0;}
//	else {
//		c = a[0];
//			for (auto now : a) {if (c > now) {c = now;}}
//			cout << c;}
//	return 0;
//}

//8
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n, x, c, p = 1;
//	cin >> n;
//	cin >> x;
//	for (int i = 0; i < n - 1; i++) {
//		cin >> c;
//		if (x == c) {}
//		else{ p++; 
//		x = c;
//		}
//	} 
//	cout << p;
//	return 0;
//}

////9
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n, x;
//	cin >> n;
//	vector <int> a(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n - 1;) {
//		swap(a[i], a[i + 1]);
//		i+=2;
//	}
//	for (auto element : a) {
//		cout << element << " ";
//	}
//	return 0;
//}

//10
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n, x;
//	cin >> n;
//	vector <int> a(n);
//	for (int i = 1; i < n; i++){cin >> a[i];}
//	cin >> a[0];
//	for (auto element : a) {
//		cout << element << " ";
//	}
//	return 0;
//}

//11
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n, x = 0;
//	cin >> n;
//	vector <int> a(n);
//	for (int i = 0; i < n; i++){cin >> a[i];}
//	for (int i = 0; i < n; i++) {for (int r = i + 1; r < n; r++) {if (a[i] == a[r]) { x++; }}}
//	cout << x;
//	return 0;
//}

//12
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, x = 0;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	for (int i = 0; i < n; i++) {
		x = 0;
		for (int r = 0; r < n; r++) {
			if (a[i] == a[r]) {
				x ++;
			}
		}
		if (x == 1) {
			cout << a[i]<< " ";
		}
	}
	return 0;
}