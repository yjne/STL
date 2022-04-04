//-----------------------------------------------------------------------------
// STRING.CPP - STL �����Ϸ��� ���� �ڿ� ���� Ŭ����
// 
// 2022. 4. 04									Programmed by Wulong
//-----------------------------------------------------------------------------

#include <iostream>
#include "STRING.h"

bool ����{ false };			// �����޽����� ������ -> true
int STRING::gid{};			// STRING static

STRING::STRING() : id{ ++gid }, num{}, p{}
{
	if (����)
		print("����Ʈ");
}

STRING::STRING(const char* s) : id{ ++gid }, num{ strlen(s) }, p{ new char[strlen(s)] }
{
	memcpy(p, s, num);
	if (����)
		print("������(*)");
}

STRING::~STRING()
{
	if (����)
		print("�Ҹ���");
	if (num)
		delete[] p;
}

STRING::STRING(const STRING& other)
	: id{ ++gid }, num{ other.num }, p{ new char[other.num] }
{
	memcpy(p, other.p, num);

	if (����)
		print("���������");
}

STRING& STRING::operator=(const STRING& other)
{
	if (this == &other)
		return *this;

	num = other.num;
	delete[] p;
	p = new char[num];
	memcpy(p, other.p, num);

	if (����)
		print("�����Ҵ�");

	return *this;
}

STRING STRING::operator+(const STRING& rhs) const
{
	STRING temp;
	temp.num = num + rhs.num;
	temp.p = new char[temp.num];
	memcpy(temp.p, p, num);
	memcpy(temp.p + num, rhs.p, rhs.num);

	return temp;
}

// 2022. 4. 4 �߰�
size_t STRING::getNum() const 
{
	return num;
}

void STRING::print(const char* s) const
{
	std::cout << s << " [" << id << "] ��ü:" << this << " �ڿ� - ";

	if (num != 0) {
		std::cout << " ����:" << num << ", �ּ�:" << (void*)p << std::endl;
	}
	else
		std::cout << " ����" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (int i{}; i < s.num; ++i)
		os << s.p[i];
	return os;
};
