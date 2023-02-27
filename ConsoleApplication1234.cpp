#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "\nВведіть A: ";
	cin >> a;
	cout << "\nВведіть B: ";
	cin >> b;
	if (a > 2 && b >= 3) cout << "/nСправедлива (true)";
	if (a < 2 && b <= 3) cout << "Не справедлива (false)";
	cout << " нерівність A > 2 та B ≥ 3" << endl;
	cout << "I'm use git for this file!" << endl;

	return 0;
}