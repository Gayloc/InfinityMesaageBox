//通过多进程 实现每次点击产生弹窗 
#include<stdio.h>
#include<windows.h>
#define num 20

int WINAPI WinMain(HINSTANCE hInstance,
					HINSTANCE hPrevInstance,
					LPSTR lpCmdLine,
					int nCmdShow)
{
	printf("关闭此窗口关闭全部弹窗\n");
	::MessageBox(NULL,TEXT("114514"),TEXT("1919810"),MB_OKCANCEL);
	TCHAR szCommandLine[]=TEXT("MultiProcessMessageBox.exe");
	STARTUPINFO si={sizeof(si)}	;
	PROCESS_INFORMATION pi;
	for(int i=0;i<num;i++)
	{
		Sleep(100);
		::CreateProcess(NULL,szCommandLine,NULL,NULL,FALSE,NULL,NULL,NULL,&si,&pi);
	}
	return 0;
}
