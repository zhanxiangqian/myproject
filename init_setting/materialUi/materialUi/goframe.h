#ifndef GoFrame_H_
#define GoFrame_H_

#include <QDialog>


class  GoFrame : public QDialog
{
	Q_OBJECT
public:
	GoFrame(QWidget *parent = 0);
	~GoFrame();
    
	public slots:
	void onRunButtonClicked();
};

#endif