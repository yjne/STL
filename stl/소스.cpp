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
	vector v {1, 2, 3};

	//[문제] vector의 메모리가 확장되는 모습을 관찰하고 싶다.
	// - 원소를 하나씩 추가하면서 벡터가 관리하는 메모리의 크기를 관찰해보면 된다.
	// 원소를 추가하며 관찰

	size_t old_Cap{ v.capacity()};

	while (true) {
		v.push_back(4);
		if (v.size()-1 == old_Cap) {

			cout << "현재 원소 수 - " << v.size() << endl;
			cout << "벡터의 용량 - " << v.capacity() << endl;
			old_Cap = v.capacity();
			cout << endl;
		}
	}
	save("소스.cpp");
}

/* vector */