//-----------------------------------------------------------------------------
// 2022. 4. 04 월23							월23수34                  (5주 1일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Sequence Container
//		- array		유일하게 크기가 컴파일 타임에 결정되어야 한다.
//		- vector	dynamic array
// 
// 중간시험 예정 - 4/27(수) (8주 2일)
//-----------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "STRING.h"
#include "save.h"
using namespace std;

extern bool 관찰;

//---------
int main()
//---------
{
	// [문제] 키보드에서 입력하는 모든 단어를 받아라.	
	// 오름차순으로 정렬한다.
	// 결과를 출력한다.

	vector<string> v;

	cout << "정렬할 단어를 입력하시오: (-1 입력시 입력 종료)" << endl;
	while (-1) {
		cin >> v;
	}

	save("소스.cpp");
}

/* vector */