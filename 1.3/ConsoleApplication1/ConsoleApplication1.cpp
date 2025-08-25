// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//
//int main1()
//{
//    std::cout << "Hello World!\n";
//    return 0;
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.


//#include <iostream>
//using namespace std;
//int main () {
//    cout << "Hello, Stepik!";
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int a, b;
//    cin >> a >> b;
//    cout << a << "+"<< b << "="  ;
//    cout << a + b << endl;
//    cout << a << "-" << b << "=";
//    cout << a -  b;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int v, t, g=10;
//    cin >> t;
//    v = g * t;
//    int vm = v / 2, s = vm * t;
//    cout << s;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int a, b;
//    cin >> a >> b;
//    cout << a / b;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	cout << (n % 100)/10;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a;
//	b = a % 10;
//	a = a / 10; 
//	b = (a % 10) + b;
//	a = a / 10;
//	cout << a + b;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	a = (a + 2 - 1) / 2;
//	b = (b + 2 - 1) / 2;
//	c = (c + 2 - 1) / 2;
//	cout << a + b + c;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, n;
//	cin >> a >> b >> n;
//	a = a * n;
//	b = b * n;
//	int c = b / 100;
//	b = b % 100;
//	cout << a + c <<" "<< b;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int sec, min, nsecon;
//	cin >> sec;
//	int hour = sec / 3600;
//	min = (sec - (hour * 3600)) / 60;
//	nsecon = sec - (hour * 3600) - (min * 60);
//	cout << hour %24 << ":" << min/10<<min%10 << ":" << nsecon / 10 << nsecon % 10;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int h1, m1, s1, h2, m2, s2;
//	cin >> h1>> m1>> s1>> h2>> m2>> s2;
//	int h, s, m;
//	h = (h2 - h1) * 3600;
//	m = (m2 - m1) * 60;
//	s = (s2 - s1);
//	cout << h + m + s;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int v, t, kil;
//	cin >> v >> t;
//	kil = v * t;
//	kil = kil % 109;
//	cout << kil << " " << 109 + kil << " " << ((36%109)%109+109)%109;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int V, T;
//    cin >> V >> T;
//    int position = (V * T) % 109;
//    position = (position % 109 + 109) % 109;
//    cout << position;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int vtr, ch, per;
//	cin >> ch;
//	per = ch / 100;
//	/*cout << per<< " ";*/
//	vtr = ch % 100;
//	/*cout << vtr<< endl;*/
//	vtr = ((vtr % 10) * 10) + (vtr / 10);
//	////vtr = vtr / 10;
//	//cout << per << endl<< vtr;
//	cout << ((vtr + 1) % (per + 1)) + 1;
//	return 0;
//}



#include <iostream>
using namespace std; 
int main() {
	int h, a, b, vrem;
	cin >> h >> a >> b;
	vrem = ((h - b) + (a - b) - 1) / (a - b);
	cout << vrem;
	return 0;
}