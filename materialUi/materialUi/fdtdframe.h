#ifndef FdtdFrame_H_
#define FdtdFrame_H_
#include <QDialog>


class  FdtdFrame : public QDialog
{
	Q_OBJECT
public:
	FdtdFrame(QWidget *parent = 0);
	~FdtdFrame();
public slots:    
	void onRunButtonClicked();
};

#endif