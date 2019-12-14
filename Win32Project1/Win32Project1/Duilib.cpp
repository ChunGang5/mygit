#include <Windows.h>
#include "UIlib.h"
using namespace DuiLib;
#pragma comment(lib,"DuiLib_ud.lib")

//class CDuiFramWnd : public CWindowWnd
//{
//public:
//	// CWindowWnd类的纯虚函数，在该函数中必须返回用户所定义窗口的类名称，注册窗口时需要用到
//	virtual LPCTSTR GetWindowClassName() const
//	{
//		return _T("DuiFramWnd");
//	}
//};
//int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int
//	nCmdShow)
//{
//	CDuiFramWnd framWnd;
//	// Cashier即在窗口右上角显式的名字
//	// UI_WNDSTYLE_FRAME: duilib封装的宏，代表窗口可视，具有标题栏，最大化最小化，关闭功能等
//	// WS_EX_WINDOWEDGE: Win32的窗口风格，带有边框
//	framWnd.Create(NULL, _T("Cashier"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
//	//显示窗口，激活消息循环
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
	// Cashier即在窗口右上角显式的名字
	// UI_WNDSTYLE_FRAME: duilib封装的宏，代表窗口可视，具有标题栏，最大化最小化，关闭功能等
	// WS_EX_WINDOWEDGE: Win32的窗口风格，带有边框
	framWnd.Create(NULL, _T("Cashier"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
	// 居中窗口
	framWnd.CenterWindow();
	//显示窗口，激活消息循环
	framWnd.ShowModal();
	return 0;
}