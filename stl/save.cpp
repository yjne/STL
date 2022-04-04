//-----------------------------------------------------------------------------
// SAVE.CPP
//
// 저장할 파일을 알려주면 한학기 강의를 저장할 파일에 덧붙인다.
//		"2022년 1학기 STL 월23수34 강의저장.txt"
//
// 2022. 3. 7					Programmed by Wulong
//-----------------------------------------------------------------------------
#include <fstream>
#include <filesystem>
#include <chrono>
#include <vector>
#include <algorithm>
#include "save.h"

void save(std::string_view fname)
{
	// 읽을 파일을 연다
	std::ifstream in{ fname.data() };	//in.close( ); 이런거 좀 쓰지말라. 자동으로 닫힌다. raii 기능

	// 쓸 파일도 연다
	std::ofstream out{ "2022년 1학기 STL 월23수34 강의저장.txt", std::ios::app };	//ios::app은 쓸때마다 저장되도록 해준다.


	out << std::endl;
	out << std::endl;
	
	// 저장할 파일의 이름을 파일에 출력한다.
	out  << "파일이름: " << fname << std::endl;

	// 저장할 파일의 크기를 출력한다.(C++17)
	out << "파일크기: " << std::filesystem::file_size(fname) << std::endl;

	// 현재 날짜와 시간을 출력한다.(C++20)
	auto time = floor<std::chrono::seconds>(std::chrono::system_clock::now());	//floor는 바닥까지 라는 뜻으로, floor<chrono::seconds>를 사용하면 밀리초단위를 없앨 수 있다.
	out << std::chrono::zoned_time("Asia/Seoul", time) << std::endl;
	out << std::endl;

	// 읽을 파일의 정보를 읽어 쓸 파일에 덧붙여 쓴다.
	//1. 파일의 내용을 벡터로 읽어온다	(STL 컨테이너)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };	//마지막 {}는 처음부터 끝까지라는 뜻.

	//2. 벡터에 있는 내용을 파일에 복사한다.	(STL 알고리즘)
	std::copy(v.begin(), v.end(), std::ostream_iterator<char>{ out });
}