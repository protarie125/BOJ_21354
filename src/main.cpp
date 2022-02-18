#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, p;
	cin >> a >> p;

	auto Axel = 7 * a;
	auto Petra = 13 * p;

	if (Petra < Axel) {
		cout << "Axel";
	}
	else if (Axel < Petra) {
		cout << "Petra";
	}
	else {
		cout << "lika";
	}

	return 0;
}