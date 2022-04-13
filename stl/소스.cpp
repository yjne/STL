//-----------------------------------------------------------------------------
// 2022. 4. 13 수34							월23수34                  (6주 2일)
// 
// 컨테이너 - 다른 객체를 저장하는 객체
// Sequence Container - 원소의 순서를 임의로(자기마음대로) 지정가능
//		- array		유일하게 크기가 컴파일 타임에 결정되어야 한다.
//		- vector	dynamic array (실행시간에 크기가 바뀌는 배열)
//		- deque		double ended queue	벡터와 리스트의 중간단계, contiguous container가 아니다.
//					벡터보다 더 많은 원소를 저장할 수 있다.
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

extern bool 관찰;

//---------
int main()
//---------
{
	// [문제] "소스.cpp"파일의 단어를 deque<string>에 저장하라.
	// 길이 오름차순으로 정렬하라
	// 정렬된 결과를 출력하라.
	ifstream in("소스.cpp");
	
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

	save("소스.cpp");
}

/* 
*/