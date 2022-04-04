//-----------------------------------------------------------------------------
// SAVE.CPP
//
// ������ ������ �˷��ָ� ���б� ���Ǹ� ������ ���Ͽ� �����δ�.
//		"2022�� 1�б� STL ��23��34 ��������.txt"
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
	// ���� ������ ����
	std::ifstream in{ fname.data() };	//in.close( ); �̷��� �� ��������. �ڵ����� ������. raii ���

	// �� ���ϵ� ����
	std::ofstream out{ "2022�� 1�б� STL ��23��34 ��������.txt", std::ios::app };	//ios::app�� �������� ����ǵ��� ���ش�.


	out << std::endl;
	out << std::endl;
	
	// ������ ������ �̸��� ���Ͽ� ����Ѵ�.
	out  << "�����̸�: " << fname << std::endl;

	// ������ ������ ũ�⸦ ����Ѵ�.(C++17)
	out << "����ũ��: " << std::filesystem::file_size(fname) << std::endl;

	// ���� ��¥�� �ð��� ����Ѵ�.(C++20)
	auto time = floor<std::chrono::seconds>(std::chrono::system_clock::now());	//floor�� �ٴڱ��� ��� ������, floor<chrono::seconds>�� ����ϸ� �и��ʴ����� ���� �� �ִ�.
	out << std::chrono::zoned_time("Asia/Seoul", time) << std::endl;
	out << std::endl;

	// ���� ������ ������ �о� �� ���Ͽ� ���ٿ� ����.
	//1. ������ ������ ���ͷ� �о�´�	(STL �����̳�)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };	//������ {}�� ó������ ��������� ��.

	//2. ���Ϳ� �ִ� ������ ���Ͽ� �����Ѵ�.	(STL �˰���)
	std::copy(v.begin(), v.end(), std::ostream_iterator<char>{ out });
}