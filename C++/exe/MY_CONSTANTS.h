// const 변수를 한번에 모아놓은 헤더 파일
#pragam once // 헤더 가드, 헤더 파일이 단일 컴파일에 한 번만 포함되도록 하는 방법

// namespace 선언
namespace constants {
	// constexpr: 컴파일 단계에서 값을 계산
	constexpr double pi(3.141592);
	constexpr double avogadro(6.0221413e23);
	constexpr double moon_gravity(9.8 / 6.0);
}