/*#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <QTranslator>
#include <QObject>
#include <QString>

class Translator : public QObject
{
    Q_OBJECT;
    Q_PROPERTY(QString textUpdate READ textUpdate NOTIFY languageChanged)
public:
    explicit Translator(QObject *parent = nullptr);

    Q_INVOKABLE void setLanguage(QString lang);

    QString textUpdate()
    {
        return "";
    }

signals:
    void languageChanged();
private:
    QString m_textUpdate;
    QTranslator m_translator;
};

#endif // TRANSLATOR_H */
