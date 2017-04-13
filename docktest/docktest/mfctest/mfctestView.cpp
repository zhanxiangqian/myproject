
// mfctestView.cpp : CmfctestView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CmfctestView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CmfctestView ����/����

CmfctestView::CmfctestView()
{
	// TODO: �ڴ˴���ӹ������

}

CmfctestView::~CmfctestView()
{
}

BOOL CmfctestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}




// CmfctestView ��ӡ


void CmfctestView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CmfctestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CmfctestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CmfctestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
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


// CmfctestView ���

#ifdef _DEBUG
void CmfctestView::AssertValid() const
{
	CView::AssertValid();
}

void CmfctestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmfctestDoc* CmfctestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmfctestDoc)));
	return (CmfctestDoc*)m_pDocument;
}
#endif //_DEBUG

// CmfctestView ����
int G_num = 0;
void CmfctestView::OnDraw(CDC* pDC)
{
	CmfctestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// 	pDC->MoveTo(50, 50);
	// 	pDC->LineTo(50, 1500);
	// 	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
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
// CmfctestView ��Ϣ�������


void CmfctestView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	OutputDebugStringA("OnLButtonDown InvalidateRect");
	InvalidateRect(CRect(10,10,200,200),true);
	G_num +=1;
	CView::OnLButtonDown(nFlags, point);
}


void CmfctestView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
		OutputDebugStringA("OnRButtonDown Invalidate");
	G_num +=1;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
