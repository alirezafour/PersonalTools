#include "topersian.h"

ToPersian::ToPersian(QObject *parent) : QObject(parent)
{

}

QString ToPersian::fromEnglish(QString string)
{
    QString result;
    for(QChar &qc : string)
    {
        char c = qc.toLatin1();
        switch (c) {
        case 'q':
            result += "ض";
            break;
        case 'w':
            result += "ص";
            break;
        case 'e':
            result += "ث";
            break;
        case 'r':
            result += "ق";
            break;
        case 't':
            result += "ف";
            break;
        case 'y':
            result += "غ";
            break;
        case 'u':
            result += "ع";
            break;
        case 'i':
            result += "ه";
            break;
        case 'o':
            result += "خ";
            break;
        case 'p':
            result += "ح";
            break;
        case '[':
            result += "ج";
            break;
        case ']':
            result += "چ";
            break;
            //Finish first ROW --------------------------
        case 'a':
            result += "ش";
            break;
        case 's':
            result += "س";
            break;
        case 'd':
            result += "ی";
            break;
        case 'f':
            result += "ب";
            break;
        case 'g':
            result += "ل";
            break;
        case 'h':
            result += "ا";
            break;
        case 'j':
            result += "ت";
            break;
        case 'k':
            result += "ن";
            break;
        case 'l':
            result += "م";
            break;
        case ';':
            result += "ک";
            break;
        case '\'':
            result += "گ";
            break;
            //Finish second ROW ------------------------------------
        case 'z':
            result += "ظ";
            break;
        case 'x':
            result += "ط";
            break;
        case 'c':
            result += "ز";
            break;
        case 'v':
            result += "ر";
            break;
        case 'b':
            result += "ذ";
            break;
        case 'n':
            result += "د";
            break;
        case 'm':
            result += "پ";
            break;
        case ',':
            result += "و";
            break;
        case ' ':
            result += " ";
            break;
            //TODO: add UPERCASE buttons
        default:
            result += QString(c);
            break;
        }
    }
    return result;

}
