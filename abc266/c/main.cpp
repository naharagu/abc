#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

struct Point
{
	int x, y;
};

int cross_product(const Point &a, const Point &b)
{
	return a.x * b.y - a.y * b.x;
}

bool is_convex_quadrilateral(const Point &a, const Point &b, const Point &c, const Point &d)
{
	Point ab = {b.x - a.x, b.y - a.y};
	Point bc = {c.x - b.x, c.y - b.y};
	Point cd = {d.x - c.x, d.y - c.y};
	Point da = {a.x - d.x, a.y - d.y};

	if (cross_product(ab, bc) > 0 &&
		cross_product(bc, cd) > 0 &&
		cross_product(cd, da) > 0 &&
		cross_product(da, ab) > 0)
	{
		return true;
	}
	return false;
}

int main()
{
	Point a, b, c, d;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;

	if (is_convex_quadrilateral(a, b, c, d))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
