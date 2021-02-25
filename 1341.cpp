#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int s = 0, e = 0;
	while (true) {
		cin >> s;
		cin >> e;
		if (s < 2 || s > 9 || e < 2 || e > 9) {
			printf("INPUT ERROR!\n");
			continue;
		}
		else break;
	}


	if (s >= e) {
		for (int i = s; i >= e; i--) {
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %2d   ", i, j, j*i);
				if (j % 3 == 0) {
					cout << '\n';
				}
			}
			cout << '\n';
		}
	}
	if (s < e) {
		for (int i = s; i <= e; i++) {
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %2d   ", i, j, j*i);
				if (j % 3 == 0) {
					cout << '\n';
				}
			}
			cout << '\n';
		}
	}

	return 0;
}