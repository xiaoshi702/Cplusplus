#include "stdafx.cpp"
#include "client.h"

void CLIENT::ChangeServerName(char name)
{
    CLIENT::ServerName = name;
    CLIENT::ClientNum++;
}
//��̬���ݳ�Ա������
//ע�����"����::"������
int CLIENT::getClientNum()
{
    return CLIENT::ClientNum;
}


