#include <iostream>

using namespace std;

namespace Brazil
{
	int population = 213400000;
	float area = 800;

	void information()
	{
		cout << "area : " << area << "km" << endl;
		cout << "population : " << population << endl;
	}
}

namespace Colombia
{
	int population = 53400000;
	float area = 1100;

	void information()
	{
		cout << "area : " << area << "km" << endl;
		cout << "population : " << population << endl;
	}
}

using namespace Brazil;

class GameObject
{
#pragma region 접근 지정자
	// 클래서 내부에 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.

	// public : 클래스 내부와 자기가 상속하고 있는 클래서 그리고 클래스
	//			외부에서도 접근을 허용하는 지정자입니다.

	// protected : 클래서 내부와 자기가 상속하고 있는 클래스까지만 
	//				접근을 허용하는 지정자입니다.

	// private : 클래서 내부까지만 접근을 허용하는 지정자입니다.

#pragma endregion

private:
	int x = 1;
	int y = 1;
	int z = 1;
protected:
	const char* name;

public:
	void Position()
	{
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "z : " << z << endl;
	}

};

void Profile(const char* name = "James", int age = 24)
{
	cout << "name : " << name << endl;
	cout << "age : " << age << endl;
}

int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를
	// 설정하는 영역입니다.

	/*information();
	Colombia::information();*/

#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 포함되어
	// 있으며, 클래스를 통해 객체를 생성하여 접근하고 사용
	// 하는 집합체입니다.

	/*GameObject gameobject;

	gameobject.Position();

	cout << "Game Object의 크기 : " << sizeof(GameObject) << endl;*/

	// 클래서의 경우 클래서 내부에 있는 변수는 클래스의
	// 메모리 영역에 포함되지만, 정적 변수와 함수의 메모리는
	// 클래스 영역에 포함되지 않습니다.
#pragma endregion

#pragma region 기본 매개 변수
	// 함수의 매개 변수에 값이 전달되지 않을 때
	// 미리 값을 설정해놓는 매개 변수입니다.

	/*Profile();
	Profile("John", 24);*/

	// 기본 매개 변수를 지정하려면 오른쪽에서 부터
	// 값을 지정해주어야 합니다. 

#pragma endregion

}