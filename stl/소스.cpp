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
	//[문제] 키보드에서 int를 입력받아
	// 합계와 평균을 출력하라

	vector <int> v;

	int num;
	while (cin >> num)
		v.push_back(num);

	long long sum{ }; //합계는 int로 하지말고 long long을 사용해서 바로바로 넘어가준다.
	
	for (int n : v)		//const int &나 int &를 사용해서 원본에 접근하고 복사하지 않도록 하는 것도 좋지만, int는 잘 쓰지 않는다.
		sum += n;

	cout << "합계 - " << sum << endl;
	cout << "평균 - " << (double)sum / v.size() << endl;

	save("소스.cpp");
}

/* vector */