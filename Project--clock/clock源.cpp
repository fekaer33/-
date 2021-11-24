#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main(void) {
	for (int i = 0; i <= 24; i++) {
		for (int j = 0; j <= 60; j++) {
			for (int k = 0; k <= 60; k++)
			{
				cout << "时间过去了" << i << "小时:" << j << "分钟:" << k << "秒" << endl;
				Sleep(1000);
			}

		}
	}

	system("pause");
	return 0;
}