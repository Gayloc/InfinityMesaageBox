//ͨ������� ʵ��ÿ�ε���������� 
#include<stdio.h>
#include<windows.h>
#define num 20

int WINAPI WinMain(HINSTANCE hInstance,
					HINSTANCE hPrevInstance,
					LPSTR lpCmdLine,
					int nCmdShow)
{
	printf("�رմ˴��ڹر�ȫ������\n");
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
