﻿
// MainFrm.h: CMainFrame 类的接口
//

#pragma once

//自定义消息
#define NM_A (WM_USER+100)
#define NM_B (WM_USER+101)
#define NM_C (WM_USER+102)
#define NM_D (WM_USER+103)
#define NM_E (WM_USER+104)
#define NM_F (WM_USER+105)

class CMainFrame : public CFrameWnd
{
	
protected: // 仅从序列化创建
	CMainFrame() noexcept;
	DECLARE_DYNCREATE(CMainFrame)

// 特性
public:
	HICON m_hIcon;
// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 实现
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // 控件条嵌入成员
	CStatusBar        m_wndStatusBar;

// 生成的消息映射函数
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

private:
	CSplitterWnd _splitter;//切分窗口类对象

	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);

	afx_msg LRESULT OnMyChange(WPARAM wparam, LPARAM lparam);
public:
	afx_msg void On32775();
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void On32773();
	afx_msg void On32774();
	afx_msg void On32777();
	afx_msg void On32778();
};