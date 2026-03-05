#include "../Program/stdafx.h"
#include "../Program/container.h"
#include "../Program/Language.h"

template <typename T>

bool Same(T left, T right)
{
	return left == right;
}

template<>
bool Same(Language left, Language right)
{
	return left.Name() == right.Name();
}

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수
	// 있는 기능입니다.

	cout << Same('A', 'B') << endl;
	cout << Same(10, 10) << endl;
	cout << Same(3.5f, 6.6f) << endl;
	cout << Same("aef", "aef") << endl;

	Container<int> container(5);

#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 특정한 자료형만 다른 형식으로 동작시키는 기능입니다.

	Language java;
	Language rust;

	java.Initialize("function");
	rust.Initialize("method");

	cout << Same(java, rust) << endl;

#pragma endregion


	return 0;
}