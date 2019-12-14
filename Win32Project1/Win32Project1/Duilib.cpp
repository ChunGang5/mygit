#include <Windows.h>
#include "UIlib.h"
using namespace DuiLib;
#pragma comment(lib,"DuiLib_ud.lib")

//class CDuiFramWnd : public CWindowWnd
//{
//public:
//	// CWindowWnd��Ĵ��麯�����ڸú����б��뷵���û������崰�ڵ������ƣ�ע�ᴰ��ʱ��Ҫ�õ�
//	virtual LPCTSTR GetWindowClassName() const
//	{
//		return _T("DuiFramWnd");
//	}
//};
//int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int
//	nCmdShow)
//{
//	CDuiFramWnd framWnd;
//	// Cashier���ڴ������Ͻ���ʽ������
//	// UI_WNDSTYLE_FRAME: duilib��װ�ĺ꣬�����ڿ��ӣ����б������������С�����رչ��ܵ�
//	// WS_EX_WINDOWEDGE: Win32�Ĵ��ڷ�񣬴��б߿�
//	framWnd.Create(NULL, _T("Cashier"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
//	//��ʾ���ڣ�������Ϣѭ��
//	framWnd.ShowModal();
//	return 0;
//}
class CDuiFrameWnd : public WindowImplBase
{
public:
	virtual LPCTSTR GetWindowClassName() const { return _T("DUIMainFrame"); }
	virtual CDuiString GetSkinFile() { return _T("UISkin2.xml"); }
	virtual CDuiString GetSkinFolder() { return _T(""); }
	virtual void Notify(TNotifyUI& msg)
	{
		if (msg.sType == _T("click"))
		{
			MessageBox(m_hWnd, _T("Hello World"), _T("DuiFramWnd"), IDOK);
		}
	}
};
int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int
	nCmdShow)
{
	CPaintManagerUI::SetInstance(hInstance);
	CDuiFrameWnd framWnd;
	// Cashier���ڴ������Ͻ���ʽ������
	// UI_WNDSTYLE_FRAME: duilib��װ�ĺ꣬�����ڿ��ӣ����б������������С�����رչ��ܵ�
	// WS_EX_WINDOWEDGE: Win32�Ĵ��ڷ�񣬴��б߿�
	framWnd.Create(NULL, _T("Cashier"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
	// ���д���
	framWnd.CenterWindow();
	//��ʾ���ڣ�������Ϣѭ��
	framWnd.ShowModal();
	return 0;
}