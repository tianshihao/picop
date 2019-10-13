#ifndef DIALOGNOLINEARPOINTOPERATION_H
#define DIALOGNOLINEARPOINTOPERATION_H

#include <QtCore/QDateTime>
#include <QtCore/QDebug>
#include <QtMath>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>

class DialogNolinearPointOperation : public QDialog
{
    Q_OBJECT

public:
    explicit DialogNolinearPointOperation(QWidget *parent = nullptr);
    ~DialogNolinearPointOperation();

public:
    QGridLayout *gridLayout;

    QLabel *labelVar;
    QLineEdit *lineEditVar;

    QDialogButtonBox *buttonBox;

    QMainWindow *ptr = (QMainWindow *)parentWidget();

    QString transformType = "nullType";

    int rM = 0;
    int gM = 0;
    int bM = 0;

public:
    void setup();
    void setTransformMode(QString mode);

signals:
    void signalNoLinearPointOperation();
    void signalNoLinearPointOperationFinshed(QImage &);

private slots:
    void emitSignalNolinearPointOperation();

    void transformTypeSwitch(QImage *originImage);

public:
    void grayscaleTransform(QImage *originImage);
    void sinTransform(QImage *originImage);
    void tanTransform(QImage *originImage);
};

#endif // DIALOGNOLINEARPOINTOPERATION_H
