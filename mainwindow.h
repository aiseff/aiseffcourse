#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
class QLabel;
class QLineEdit;
class QPushButton;
class QComboBox;
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void onCalculateButtonClicked();
private:
    QLineEdit *heightInput;
    QLineEdit *weightInput;
    QLineEdit *ageInput;
    QComboBox *formulaInput;
    QLabel *resultLabel;
    void calculateBMR(float height, float weight, int age, QString formula);
    void saveToFile(float bmr, QString formula);
};
#endif // MAINWINDOW_H
