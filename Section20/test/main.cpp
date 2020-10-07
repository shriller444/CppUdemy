#include <iostream>

using namespace std;

int main(){
	int n;
	int able;
	cin >> n;

	while (n--) {
		int count{ 3 };
		while (count--) {
			int yes;
			cin >> yes;
			if (yes == 1) {
				able++;
			}
			cout << yes << " ";
		}
    }
		cout << "\n";
}