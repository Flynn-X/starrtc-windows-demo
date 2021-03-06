#pragma once


// CCreateNewGroupDlg 对话框

class CCreateNewGroupDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCreateNewGroupDlg)

public:
	CCreateNewGroupDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CCreateNewGroupDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CREATE_NEW_GROUP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonCreateNewGroup();
	CEdit m_editGroupName;
	CString m_strGroupName;
};
