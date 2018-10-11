#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
class MyThread : public QThread
{
public:
    MyThread();
    MyThread(QString const  path_, QByteArray const filecontent);
protected:
    void    run() Q_DECL_OVERRIDE;
    
private:
    QString path_;
    QByteArray filecontent;
    
    
};

#endif // MYTHREAD_H
