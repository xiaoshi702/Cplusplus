#ifndef CLIENT_H_
#define CLIENT_H_

class CLIENT
{
public:
    static void ChangeServerName(char ServerName);
    static int getClientNum();
private:
    static char ServerName;static int ClientNum;
};

#endif CLIENT_H_