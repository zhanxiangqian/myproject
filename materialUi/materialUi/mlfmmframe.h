#ifndef MlfmmFrame_H_
#define MlfmmFrame_H_

#include <QDialog>


class  MlfmmFrame : public QDialog
{
	Q_OBJECT
public:
	MlfmmFrame(QWidget *parent = 0);
	~MlfmmFrame();
    
	public slots:
	void onRunButtonClicked();
};

#endif