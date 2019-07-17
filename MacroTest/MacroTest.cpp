// MacroTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include <iostream>
#define _CRTDBG_MAP_ALLOC

// 定数マクロ
#define MY_SIZE 30

// 関数マクロ
#define MY_LOG(log) printf("File:%s Line:%d Func:%s Log:%s\n",__FILE__,__LINE__,__func__,log)

// 条件付きコンパイル
#ifdef _DEBUG
#define DBG_NEW new(_NORMAL_BLOCK,__FILE__,__LINE__)
#else
#define DBG_NEW new
#endif

struct PointData {
	int x;
	int y;
	int z;
};

int main()
{
	printf("my size:%d\n", MY_SIZE);
	MY_LOG("test");
	PointData* pPointData = DBG_NEW PointData;
	_CrtDumpMemoryLeaks();

#ifdef syui
	std::cout << "Hello Syui!\n";
#elif i
	std::cout << "Hello !\n";
#elif m
	std::cout << "Hello !\n";

#else
	std::cout << "Who?\n";
#endif
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
