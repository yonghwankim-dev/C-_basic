#include <iostream>

using std::cout;
using std::endl;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{

	}

	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수호출 후 " << endl;

	system("pause");
	return 0;
}