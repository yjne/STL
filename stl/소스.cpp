//-----------------------------------------------------------------------------
// 2022. 4. 6 수34							월23수34                  (5주 2일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Sequence Container - 원소의 순서를 임의로(자기마음대로) 지정가능
//		- array		유일하게 크기가 컴파일 타임에 결정되어야 한다.
//		- vector	dynamic array (실행시간에 크기가 바뀌는 배열)
// 
// 중간시험 예정 - 4/27(수) (8주 2일) / 과제 마감일 5/11 (수)
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

	vector <STRING> v{"진짜 벡터를 알아본다"};
	
	v.push_back("STRING 추가");
	save("소스.cpp");
}

/* vector의 개체로 STRING을 넣어보자 */