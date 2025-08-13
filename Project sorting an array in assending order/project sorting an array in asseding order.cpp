#include<iostream>
using namespace std;
int main() {
	int a[10],n=0,m=0,t=0;
	for (n = 0; n < 10; n++) {
		cout << "enetr value one by one\t";
		cin >> a[n];
	}
	for (n = 0; n < 10; n++) {
		for (m = 0; m < n; m++) {
			if (a[n] < a[m])
			{
				t = a[n];
				a[n] = a[m];
				a[m] = t;
			}
		}
	}

	for (n = 0; n < 10; n++) {
		cout << "sorted array is\t" << a[n]<<endl;
	}
	
	return 0;
}