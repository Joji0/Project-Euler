#include "my_template.hpp"
#include "other/io.hpp"

void solve() {
	ll mx = 0, ANS = 0;
	auto collatz = [&](ll x) -> void {
		ll ret = 0, init = x;
		while (x != 1) {
			if (x & 1) {
				x = 3 * x + 1;
			} else {
				x /= 2;
			}
			++ret;
		}
		if (chmax(mx, ret)) {
			ANS = init;
		}
	};
	FOR(i, 1, 1000001) {
		collatz(i);
	}
	print(ANS);
}

signed main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int t = 1;
	// INT(t);
	FOR(t)
	solve();

	return 0;
}
