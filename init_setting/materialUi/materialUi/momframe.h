#ifndef MomFrame_H_
#define MomFrame_H_

#include <QDialog>
#include <QProcess>

class  MomFrame : public QDialog
{
	Q_OBJECT
public:
	MomFrame(QWidget *parent = 0);
	~MomFrame();
	QProcess *pro;
	public slots:
	void onStarted();
	void onError(QProcess::ProcessError error);
	void onRunButtonClicked();

};

#endif