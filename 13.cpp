#include "my_template.hpp"
#include "other/io.hpp"
#include "bigint/base.hpp"

void solve() {
	BigInteger sum;
	FOR(100) {
		STR(s);
		BigInteger X(s);
		sum += X;
	}
	string S = sum.to_string();
	// print(S);
	print(S.substr(0, 10));
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
