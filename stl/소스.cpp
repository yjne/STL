//-----------------------------------------------------------------------------
// 2022. 4. 11 월23							월23수34                  (6주 1일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Sequence Container - 원소의 순서를 임의로(자기마음대로) 지정가능
//		- array		유일하게 크기가 컴파일 타임에 결정되어야 한다.
//		- vector	dynamic array (실행시간에 크기가 바뀌는 배열)
// 
// 중간시험 예정 - 4/20(수) (7주 2일) / 과제 마감일 5/11 (수)
//-----------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include "STRING.h"
#include "save.h"
using namespace std;

extern bool 관찰;

//---------
int main()
//---------
{
	관찰 = true;

	vector <STRING> v;
	
	v.push_back("333");
	v.emplace_back("55555");

	save("소스.cpp");
}

/* 랜덤접근의 시간복잡도는 O(1)이다. emplace_back은 새로운 요수를 컨테이너의 끝에 추가하는 것이다.
*	emplace_back = Amortized constant, v.emplace_back( STRING("STRING 추가") );를 하면 임시객체까지 만들어서 쓸데없이 5번까지만든다.
* 그러니 중간의 STRING을 빼고 인자만 넘기는 것이 맞다.
	new int[10];	//new는 전역함수인 operator new이다.
	operator new();
*/