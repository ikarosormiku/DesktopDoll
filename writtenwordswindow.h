#ifndef WRITTENWORDSWINDOW_H
#define WRITTENWORDSWINDOW_H

#include <QWidget>
#include <synchapi.h>
#include "globaldef.h"
namespace Ui {
class WrittenWordsWindow;
}

class WrittenWordsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit WrittenWordsWindow(QWidget *parent = 0);
    ~WrittenWordsWindow();
    void ClickMessage(AudioDef type);
private:
    Ui::WrittenWordsWindow *ui;
    bool playing;
    void InitWindowUI();
    void ShowWrittenWords(QString& str);
};

#endif // WRITTENWORDSWINDOW_H
