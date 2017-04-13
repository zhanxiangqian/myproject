#ifndef PoFrame_H_
#define PoFrame_H_

#include <QDialog>


class  PoFrame : public QDialog
{
	Q_OBJECT
public:
	PoFrame(QWidget *parent = 0);
	~PoFrame();
    
	public slots:
	void onRunButtonClicked();
};

#endif