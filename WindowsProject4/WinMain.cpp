//標準ライブラリ
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//独自関数定義
#include"Four arithmetic operations.h"
#include"Other calculations.h"
#include"Trigonometric function.h"
#include"differentialandIntegral.h"
#include"mathandPhysicsdefine.h"
//定義
#define _USE_MATH_DEFINES
//Main関数
int WINAPI WinMain
(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
)
{
	HWND hwnd = CreateWindow(
		TEXT("STATIC"), TEXT("culc"),
		WS_CAPTION,
		100, 100, 200, 200, NULL, NULL,
		hInstance, NULL
	);

	if (hwnd == NULL) return 0;

	ShowWindow(hwnd, SW_SHOW);
	MessageBox(NULL, TEXT("culc"),
		TEXT("hello"), MB_ICONINFORMATION);
	return 0;
}