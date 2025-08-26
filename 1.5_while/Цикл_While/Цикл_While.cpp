
//1
//#include <iostream>
//using namespace std;
//int main() {
//	int chisl, i;
//	i = 1;
//	cin >> chisl;
//	while (i * i <= chisl) {
//		cout << i * i << " ";
//		i = i + 1;
//	}
//	return 0;
//}

//2
//#include <iostream>
//using namespace std;
//int main() {
//	int a, i;
//	cin >> a;
//	i = 2;
//	while (1) {
//		if (a % i == 0) {
//			cout << i;
//			break;
//		}
//		i = i + 1;
//	}
//	return 0;
//}

////3 
//#include <iostream>
//using namespace std;
//int main() {
//	int chisl, i;
//	i = 1;
//	cin >> chisl;
//	while (i <= chisl) {
//		cout << i << " ";
//		i = i * 2;
//	}
//	return 0;
//}

////4
//#include <iostream>
//using namespace std;
//int main() {
//	int chisl, i;
//	i = 1;
//	cin >> chisl;
//	while (i < chisl) {
//		i = i * 2;
//	}
//	if (i == chisl) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}

//5 //6
//#include <iostream>
//using namespace std;
//int main() {
//	int vvod, i = 0;
//	cin >> vvod;
//	while (vvod != 0) {
//		i = i + vvod; // i+1; i+vvod;
//		cin >> vvod;
//	}
//	cout << i;
//	return 0;
//}

//7
//#include <iostream>
//using namespace std;
//int main() {
//	int vvod, i = 0;
//	cin >> vvod;
//	while (vvod != 0) {
//		if (vvod > i) {
//			i = vvod;
//		}
//		cin >> vvod;
//	}
//	cout << i;
//	return 0;
//}

//8
//#include <iostream>
//using namespace std;
//int main() {
//	int max = 0, vvod, i = 0;
//	cin >> vvod;
//	while (vvod != 0) {
//		if (vvod > max) {
//			max = vvod;
//			i = 1;
//		}
//		else if (vvod == max) {
//			i = i + 1;
//		}
//		cin >> vvod;
//	}
//	cout << i;
//	return 0;
//}

//9
//#include <iostream>
//using namespace std;
//int main() {
//	int max = 0, iskom = 0, vvod;
//	cin >> vvod;
//	while (vvod != 0) {
//		if (vvod >= max) {iskom = max; max = vvod;}
//		else if (vvod > iskom) {iskom = vvod;}
//		cin >> vvod;}
//	cout << iskom;
//	return 0;
//}

////10
//#include <iostream>
//using namespace std;
//int main() {
//	int n, i = 0, f_nn = 0, f_n = 1, f=1 ;
//	cin >> n;
//	while (i+1 != n) {
//		f = f_n + f_nn;
//		f_nn = f_n;
//		f_n = f;
//		i = i + 1;
//	}
//	cout << f;
//	return 0;
//}

//11
//#include <iostream>
//using namespace std;
//int main() {
//	int n, i = 1, f_nn = 0, f_n = 1, f = 1;
//	cin >> n;
//	while (f < n) {
//		f = f_n + f_nn;
//		f_nn = f_n;
//		f_n = f;
//		i = i + 1;
//	}
//	if (f == n) {
//		cout << i;
//	}
//	else {
//		cout << -1;
//	}
//	return 0;
//}


//12
//#include <iostream>
//using namespace std;
//int main() {
//	int n, i = 1, s, max = 1;
//	cin >> n;
//	s = 0;
//	while (n != 0) {
//		if (n == s) {
//			i = i + 1;
//			if (max < i) {max = i;}
//		}
//		else { s = n; i = 1; }
//		cin >> n;
//	}
//	cout << max;
//	return 0;
//}

////13
//#include <iostream>
//using namespace std;
//int main() {
//	int n_proshl, pred, n, i = 0;
//	cin >> n; 
//	//  cin >> pred >> a >> sled;
//	pred = n; n_proshl = n;
//	while (cin >> n, n != 0) {
//		if (n_proshl > pred and n_proshl > n) {
//			i ++;
//		}
//		pred = n_proshl;
//		n_proshl = n;                                            
//	//cin >> sled;
//	}
//	cout << i;
//	return 0;
//}

//14
                                                         
//13
#include <iostream>
using namespace std;
int main() {
	int min=0,n_proshl, pred, n, sh = 0, i = 0;
	cin >> pred >> n_proshl >> n;
	while (n != 0) {
		if (n_proshl > pred and n_proshl > n) {
			sh ++;
			if ((min > i or min == 0) and sh > 1) {
				min = i;
				i = 0;
			}
			i = 0;
		}
		pred = n_proshl;
		n_proshl = n;
		cin >> n;
		if (sh != 0) {
			i++;
		}
	}
	if (min == 10000 or sh == 1) {
		cout << 0;
	}
	else 
	{
		cout << min;
	}
	return 0;
}

//#include <iostream>
//using namespace std;
//int main() {
//    bool first;
//    int b = 1, f = 5;
//    first = b < f;
//    cout << first;
//    return 0;
//}