#include "stdafx.h"
#include "Concrete.h"
#include "Stone.h"

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부에 있는 세부 사항을 숨기고
	// 필요한 부분만 외부에서 사용할 수 있도록 단순화시키는 작업입니다.

	Block* arr[2] = { nullptr };

	arr[0] = new Stone;
	arr[1] = new Concrete;

	Stone stone;
	Concrete concrete;

	stone.Describe();
	concrete.Describe();
	
#pragma endregion
	

	return 0;
}