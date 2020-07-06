#include "stdafx.cpp"
#include "client.h"

void CLIENT::ChangeServerName(char name)
{
    CLIENT::ServerName = name;
    CLIENT::ClientNum++;
}
//静态数据成员的引用
//注意加上"类名::"来修饰
int CLIENT::getClientNum()
{
    return CLIENT::ClientNum;
}


