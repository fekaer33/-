#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main(void) {
	for (int i = 0; i <= 24; i++) {
		for (int j = 0; j <= 60; j++) {
			for (int k = 0; k <= 60; k++)
			{
				cout << "ʱ���ȥ��" << i << "Сʱ:" << j << "����:" << k << "��" << endl;
				Sleep(1000);
			}

		}
	}

	system("pause");
	return 0;
}