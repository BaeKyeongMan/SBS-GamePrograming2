#include "stdafx.h"
#include "container.h"

template <typename T>

bool Same(T left, T right)
{
	return left == right;
}

template<>
bool Same(Container<int> & left, Container<int> & right)
{
	
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


#pragma endregion


	return 0;
}