#include <iostream>
#include <cmath>
using namespace std;

int main() {

int i, j, k, space=10;
for (i=0; i<=10; i++) {
	for (k=0; k<=space; k++) {
		cout << " " ; }
for (j=0; j<2*i-1; j++) {
	cout<<"X"; }
space--;
cout<<endl;
}

return 0;
}