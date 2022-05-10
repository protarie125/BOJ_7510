#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cout << "Scenario #" << i << ":\n";

		int a, b, c;
		cin >> a >> b >> c;

		auto v = vector<int>{ a, b, c };
		sort(v.begin(), v.end());

		if (v[2] * v[2] == v[0] * v[0] + v[1] * v[1]) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}

		cout << '\n';
	}

	return 0;
}