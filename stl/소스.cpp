//-----------------------------------------------------------------------------
// 2022. 4. 13 ��34							��23��34                  (6�� 2��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// Sequence Container - ������ ������ ���Ƿ�(�ڱ⸶�����) ��������
//		- array		�����ϰ� ũ�Ⱑ ������ Ÿ�ӿ� �����Ǿ�� �Ѵ�.
//		- vector	dynamic array (����ð��� ũ�Ⱑ �ٲ�� �迭)
//		- deque		double ended queue	���Ϳ� ����Ʈ�� �߰��ܰ�, contiguous container�� �ƴϴ�.
//					���ͺ��� �� ���� ���Ҹ� ������ �� �ִ�.
// 
// Associative Container
// Unordered Associative Container
//-----------------------------------------------------------------------------
#include <iostream>
#include <deque>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include "STRING.h"
#include "save.h"
using namespace std;

extern bool ����;

//---------
int main()
//---------
{
	// [����] "�ҽ�.cpp"������ �ܾ deque<string>�� �����϶�.
	// ���� ������������ �����϶�
	// ���ĵ� ����� ����϶�.
	ifstream in("�ҽ�.cpp");
	
	deque<string> d;

	string s;

	while (in >> s)
		d.push_front(s);

	sort(d.begin(), d.end(), [](const string& a, const string& b){
		return	a.length() < b.length(); 
	});
	

	for (int i = 0; i < d.size(); ++i)
		cout << d[i] << endl;
	cout << endl;

	save("�ҽ�.cpp");
}

/* 
*/