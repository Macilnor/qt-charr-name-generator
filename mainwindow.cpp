#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->resultED->clear();
    QString fName = ui->firstNameED->text().trimmed();
    QString lName = ui->lastNameED->text().trimmed();
    QString result = "";

    if (!fName.isEmpty()&&!lName.isEmpty())
    {
        QChar fName_fCh = *fName.left(1).data();
        QChar fName_lCh = *fName.right(1).data();
        QChar lName_fCh = *lName.left(1).data();
        QChar lName_lCh = *lName.right(1).data();
    //First Name
        if ((fName_fCh == 'A')||fName_fCh == 'a'||fName_fCh == 'B'||fName_fCh == 'b')
            result += "Log";
        else if ((fName_fCh == 'C')||fName_fCh == 'c'||fName_fCh == 'D'||fName_fCh == 'd')
            result += "Ger";
        else if ((fName_fCh == 'E')||fName_fCh == 'e'||fName_fCh == 'F'||fName_fCh == 'f')
            result += "Nol";
        else if ((fName_fCh == 'G')||fName_fCh == 'g'||fName_fCh == 'H'||fName_fCh == 'h')
            result += "Ror";
        else if ((fName_fCh == 'I')||fName_fCh == 'i'||fName_fCh == 'J'||fName_fCh == 'j')
            result += "Tit";
        else if ((fName_fCh == 'K')||fName_fCh == 'k'||fName_fCh == 'L'||fName_fCh == 'l')
            result += "Syt";
        else if ((fName_fCh == 'M')||fName_fCh == 'm'||fName_fCh == 'N'||fName_fCh == 'n')
            result += "Vad";
        else if ((fName_fCh == 'O')||fName_fCh == 'o'||fName_fCh == 'P'||fName_fCh == 'p')
            result += "Scae";
        else if ((fName_fCh == 'Q')||fName_fCh == 'q'||fName_fCh == 'R'||fName_fCh == 'r')
            result += "Torad";
        else if ((fName_fCh == 'S')||fName_fCh == 's'||fName_fCh == 'T'||fName_fCh == 't')
            result += "Met";
        else if ((fName_fCh == 'U')||fName_fCh == 'u'||fName_fCh == 'V'||fName_fCh == 'v')
            result += "For";
        else if ((fName_fCh == 'W')||fName_fCh == 'w'||fName_fCh == 'X'||fName_fCh == 'x')
            result += "Gok";
        else if ((fName_fCh == 'Y')||fName_fCh == 'y'||fName_fCh == 'Z'||fName_fCh == 'z')
            result += "Tit";

        if ((fName_lCh == 'A')||fName_lCh == 'a'||fName_lCh == 'B'||fName_lCh == 'b')
            result += "org";
        else if ((fName_lCh == 'C')||fName_lCh == 'c'||fName_lCh == 'D'||fName_lCh == 'd')
            result += "na";
        else if ((fName_lCh == 'E')||fName_lCh == 'e'||fName_lCh == 'F'||fName_lCh == 'f')
            result += "anus";
        else if ((fName_lCh == 'G')||fName_lCh == 'g'||fName_lCh == 'H'||fName_lCh == 'h')
            result += "ax";
        else if ((fName_lCh == 'I')||fName_lCh == 'i'||fName_lCh == 'J'||fName_lCh == 'j')
            result += "ia";
        else if ((fName_lCh == 'K')||fName_lCh == 'k'||fName_lCh == 'L'||fName_lCh == 'l')
            result += "old";
        else if ((fName_lCh == 'M')||fName_lCh == 'm'||fName_lCh == 'N'||fName_lCh == 'n')
            result += "azu";
        else if ((fName_lCh == 'O')||fName_lCh == 'o'||fName_lCh == 'P'||fName_lCh == 'p')
            result += "az";
        else if ((fName_lCh == 'Q')||fName_lCh == 'q'||fName_lCh == 'R'||fName_lCh == 'r')
            result += "is";
        else if ((fName_lCh == 'S')||fName_lCh == 's'||fName_lCh == 'T'||fName_lCh == 't')
            result += "durm";
        else if ((fName_lCh == 'U')||fName_lCh == 'u'||fName_lCh == 'V'||fName_lCh == 'v')
            result += "sin";
        else if ((fName_lCh == 'W')||fName_lCh == 'w'||fName_lCh == 'X'||fName_lCh == 'x')
            result += "o";
        else if ((fName_lCh == 'Y')||fName_lCh == 'y'||fName_lCh == 'Z'||fName_lCh == 'z')
            result += "ius";
    //Last Name
        if ((lName_fCh == 'A')||lName_fCh == 'a'||lName_fCh == 'B'||lName_fCh == 'b')
            result += " Havoc";
        else if ((lName_fCh == 'C')||lName_fCh == 'c'||lName_fCh == 'D'||lName_fCh == 'd')
            result += " Poison";
        else if ((lName_fCh == 'E')||lName_fCh == 'e'||lName_fCh == 'F'||lName_fCh == 'f')
            result += " Steam";
        else if ((lName_fCh == 'G')||lName_fCh == 'g'||lName_fCh == 'H'||lName_fCh == 'h')
            result += " Ghost";
        else if ((lName_fCh == 'I')||lName_fCh == 'i'||lName_fCh == 'J'||lName_fCh == 'j')
            result += " Fang";
        else if ((lName_fCh == 'K')||lName_fCh == 'k'||lName_fCh == 'L'||lName_fCh == 'l')
            result += " Moon";
        else if ((lName_fCh == 'M')||lName_fCh == 'm'||lName_fCh == 'N'||lName_fCh == 'n')
            result += " Rust";
        else if ((lName_fCh == 'O')||lName_fCh == 'o'||lName_fCh == 'P'||lName_fCh == 'p')
            result += " Chain";
        else if ((lName_fCh == 'Q')||lName_fCh == 'q'||lName_fCh == 'R'||lName_fCh == 'r')
            result += " Steel";
        else if ((lName_fCh == 'S')||lName_fCh == 's'||lName_fCh == 'T'||lName_fCh == 't')
            result += " Forge";
        else if ((lName_fCh == 'U')||lName_fCh == 'u'||lName_fCh == 'V'||lName_fCh == 'v')
            result += " Ruin";
        else if ((lName_fCh == 'W')||lName_fCh == 'w'||lName_fCh == 'X'||lName_fCh == 'x')
            result += " Dragon";
        else if ((lName_fCh == 'Y')||lName_fCh == 'y'||lName_fCh == 'Z'||lName_fCh == 'z')
            result += " Edge";

        if ((lName_lCh == 'A')||lName_lCh == 'a'||lName_lCh == 'B'||lName_lCh == 'b')
            result += "blade";
        else if ((lName_lCh == 'C')||lName_lCh == 'c'||lName_lCh == 'D'||lName_lCh == 'd')
            result += "arrow";
        else if ((lName_lCh == 'E')||lName_lCh == 'e'||lName_lCh == 'F'||lName_lCh == 'f')
            result += "strike";
        else if ((lName_lCh == 'G')||lName_lCh == 'g'||lName_lCh == 'H'||lName_lCh == 'h')
            result += "fur";
        else if ((lName_lCh == 'I')||lName_lCh == 'i'||lName_lCh == 'J'||lName_lCh == 'j')
            result += "foe";
        else if ((lName_lCh == 'K')||lName_lCh == 'k'||lName_lCh == 'L'||lName_lCh == 'l')
            result += "ripper";
        else if ((lName_lCh == 'M')||lName_lCh == 'm'||lName_lCh == 'N'||lName_lCh == 'n')
            result += "hammer";
        else if ((lName_lCh == 'O')||lName_lCh == 'o'||lName_lCh == 'P'||lName_lCh == 'p')
            result += "edge";
        else if ((lName_lCh == 'Q')||lName_lCh == 'q'||lName_lCh == 'R'||lName_lCh == 'r')
            result += "razor";
        else if ((lName_lCh == 'S')||lName_lCh == 's'||lName_lCh == 'T'||lName_lCh == 't')
            result += "spite";
        else if ((lName_lCh == 'U')||lName_lCh == 'u'||lName_lCh == 'V'||lName_lCh == 'v')
            result += "heart";
        else if ((lName_lCh == 'W')||lName_lCh == 'w'||lName_lCh == 'X'||lName_lCh == 'x')
            result += "seeker";
        else if ((lName_lCh == 'Y')||lName_lCh == 'y'||lName_lCh == 'Z'||lName_lCh == 'z')
            result += "blade";
        ui->resultED->setText(result);
    };

}
