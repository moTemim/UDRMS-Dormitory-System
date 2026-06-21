#ifndef UDRMSEXCEPTION_H
#define UDRMSEXCEPTION_H
#include<stdexcept>
#include<QString>
class UDRMSException : public std::runtime_error{
public:
    UDRMSException(const QString& msg): std::runtime_error(msg.toStdString()){}
};

#endif // UDRMSEXCEPTION_H
