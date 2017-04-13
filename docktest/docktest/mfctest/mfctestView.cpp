
// mfctestView.cpp : CmfctestView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "mfctest.h"
#endif

#include "mfctestDoc.h"
#include "mfctestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmfctestView

IMPLEMENT_DYNCREATE(CmfctestView, CView)

BEGIN_MESSAGE_MAP(CmfctestView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CmfctestView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CmfctestView 构造/析构

CmfctestView::CmfctestView()
{
	// TODO: 在此处添加构造代码

}

CmfctestView::~CmfctestView()
{
}

BOOL CmfctestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}




// CmfctestView 打印


void CmfctestView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CmfctestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CmfctestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CmfctestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CmfctestView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CmfctestView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CmfctestView 诊断

#ifdef _DEBUG
void CmfctestView::AssertValid() const
{
	CView::AssertValid();
}

void CmfctestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmfctestDoc* CmfctestView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmfctestDoc)));
	return (CmfctestDoc*)m_pDocument;
}
#endif //_DEBUG

// CmfctestView 绘制
int G_num = 0;
void CmfctestView::OnDraw(CDC* pDC)
{
	CmfctestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// 	pDC->MoveTo(50, 50);
	// 	pDC->LineTo(50, 1500);
	// 	// TODO: 在此处为本机数据添加绘制代码
	// 	CRgn rgn;
	// 	rgn.CreateRectRgn(10, 10, 200, 200);
	// 	pDC->SelectClipRgn(&rgn);

	// test
	RECT rt;
	pDC->GetClipBox(&rt);
	char tmp[222]={0};
	sprintf_s(tmp,"GetClipBox: %d %d %d %d",rt.top,rt.left,rt.bottom,rt.right);
	OutputDebugStringA(tmp);
	pDC->Rectangle(10, 10, 199, 199);

	if (G_num > 0)
	{
		pDC->MoveTo(0, 0);
		pDC->LineTo(300+G_num*2, 300+G_num*2);

	}
}
// CmfctestView 消息处理程序


void CmfctestView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	OutputDebugStringA("OnLButtonDown InvalidateRect");
	InvalidateRect(CRect(10,10,200,200),true);
	G_num +=1;
	CView::OnLButtonDown(nFlags, point);
}


void CmfctestView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
		OutputDebugStringA("OnRButtonDown Invalidate");
	G_num +=1;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
