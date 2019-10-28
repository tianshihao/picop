#ifndef SMOOTH_H
#define SMOOTH_H

#include <QtCore/QDateTime>
#include <QtCore/QDebug>
#include <QtCore/QVariant>
#include <QtGui/QValidator>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QInputDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <opencv4/opencv2/core/core.hpp>
#include <opencv4/opencv2/highgui/highgui.hpp>
#include <opencv4/opencv2/imgproc/imgproc.hpp>

class Smooth
{
    Q_OBJECT

public:
    Smooth();
    ~Smooth();

public:
    QImage averageFiltering(QImage *originImage);
    QImage medianFiltering(QImage *originImage);
};
#endif // SMOOTH_H