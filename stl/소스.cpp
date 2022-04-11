//-----------------------------------------------------------------------------
// 2022. 4. 11 ��23							��23��34                  (6�� 1��)
// 
// �����̳� - �ٸ� ��ü�� �����ϴ� ��ü
// Sequence Container - ������ ������ ���Ƿ�(�ڱ⸶�����) ��������
//		- array		�����ϰ� ũ�Ⱑ ������ Ÿ�ӿ� �����Ǿ�� �Ѵ�.
//		- vector	dynamic array (����ð��� ũ�Ⱑ �ٲ�� �迭)
// 
// �߰����� ���� - 4/20(��) (7�� 2��) / ���� ������ 5/11 (��)
//-----------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include "STRING.h"
#include "save.h"
using namespace std;

extern bool ����;

//---------
int main()
//---------
{
	���� = true;

	vector <STRING> v;
	
	v.push_back("333");
	v.emplace_back("55555");

	save("�ҽ�.cpp");
}

/* ���������� �ð����⵵�� O(1)�̴�. emplace_back�� ���ο� ����� �����̳��� ���� �߰��ϴ� ���̴�.
*	emplace_back = Amortized constant, v.emplace_back( STRING("STRING �߰�") );�� �ϸ� �ӽð�ü���� ���� �������� 5�����������.
* �׷��� �߰��� STRING�� ���� ���ڸ� �ѱ�� ���� �´�.
	new int[10];	//new�� �����Լ��� operator new�̴�.
	operator new();
*/