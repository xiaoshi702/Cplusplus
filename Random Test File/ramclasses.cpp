#include <iostream>
#include <string>
using namespace std;

enum RAM_type{DDR4=1,DDR3,DDR2};//RAM枚举
enum nozzle_type{SATA=1,USB,CD};//CD_ROM接口类型枚举
enum Install{external=1,bulit_in};//安装方式枚举
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};//CPU类

class CPU
{
private:
    CPU_Rank rank;
    int frequency;
    float voltage;
public:
    CPU(CPU_Rank r,int f,float v)//构造函数
    {
        rank=r;
        frequency=f;
        voltage=v;
        cout<<"构造了一个CPU!"<<endl;
    }
    
    CPU(CPU&c)
    {
        rank=c.rank;
        frequency=c.frequency;
        voltage=c.voltage;

        cout<<"拷贝构造了一个CPU!"<<endl;
    }

    ~CPU(){cout<<"析构了一个CPU"<<endl;}
    
    CPU_Rank GetRank() const{return rank;}
    int GetFrequency() const{return frequency;}
    float GetVoltage() const{return voltage;}

    void SetRank(CPU_Rank r){rank=r;}//定义外部接口
    void SetFrequency(int f){frequency=f;}
    void SetVoltage(float v){voltage=v;}

    void Run(){cout<<"CPU is Running!"<<endl;}
    void Stop(){cout<<"CPU is Stop!"<<endl;}
};

class RAM
{
private:
    RAM_type ram; 
    int volume;
    float frequency;
public:
    RAM(RAM_type r,int v,float f)
    {
        ram=r;
        volume=v;
        frequency=f;
        cout<<"构造了一个RAM_type"<<endl;
    }

    RAM(RAM&r)
    {
        ram=r.ram;
        volume=r.volume;
        frequency=r.frequency;
        cout<<"拷贝构造了一个RAM"<<endl;
    }

    ~RAM(){cout<<"析构了一个RAM_type"<<endl;}

    RAM_type getType() const {return ram;}
    int getVolume() const {return volume;}
    float getFrequency() const {return frequency;}

    void setType(RAM_type r){ram=r;}
    void setVolume(int v){volume=v;}
    void setFrequency(float f){frequency=f;}

    void Run(){cout<<"RAM is Running!"<<endl;}
    void Stop(){cout<<"RAM is Stoppig"<<endl;}
};

class CD_ROM
{
private:
    nozzle_type nozzle;
    float buffer;
    Install install;
public:
    CD_ROM(nozzle_type n,float b,Install i)
    {
        nozzle=n;buffer=b;install=i;
        cout<<"构造了一个CD_ROM!"<<endl;
    }

    CD_ROM(CD_ROM&cd)
    {
        nozzle = cd.nozzle;
        buffer = cd.buffer;
        install = cd.install;
        cout<<"拷贝构造了一个CD_ROM"<<endl;
    }

    ~CD_ROM(){cout<<"析构了一个CD_ROM!"<<endl;}

    inline nozzle_type getNozzle() const {return nozzle;}//inline函数
    float getBuffer() const {return buffer;}
    inline Install getInstaller() const {return install;}

    void setNozzele(nozzle_type n) {nozzle=n;}
    void setBuffer(int b) {buffer=b;}
    void setInstaller(Install i) {install=i;}

    void Run(){cout<<"CD_ROM is Running!"<<endl;}
    void Stop(){cout<<"CD_ROM is Stopping"<<endl;}
};

class COMPUTER
{
private:
    CPU my_cpu;
    RAM my_ram;
    CD_ROM my_cdrom;
    unsigned int storage_size;//GB
    unsigned int bandwidth;//MB 

public:
    COMPUTER(CPU c,RAM r,CD_ROM cd,unsigned int s,unsigned int b);    
    ~COMPUTER(){cout<<"析构了一个COMPUTER"<<endl;}

    void Run()
    {
        my_cpu.Run();
        my_ram.Run();
        my_cdrom.Run();
        cout<<"COMPUTER开始运行!"<<endl;
    }

    void Stop()
    {
        my_cpu.Stop();
        my_ram.Stop();
        my_cdrom.Stop();
        cout<<"COMPUTER停止运行!"<<endl;
    }
};

COMPUTER::COMPUTER(CPU c,RAM r,CD_ROM cd,//拷贝构造函数
unsigned int s,
unsigned int b):my_cpu(c),my_ram(r),my_cdrom(cd)
//：后为内嵌对象，因此要初始化列表，调用相对应类的初始化函数
{
    storage_size = s;
    bandwidth = b;

    cout<<"构造了一个COMPUTER!"<<endl;
}


int main()

{
    CPU a(P6,300,2.8);
    a.Run();
    a.Stop();
    cout<<"*****************\n";

    RAM b(DDR3,1600,8);
    b.Run();
    b.Stop();
    cout<<"*****************\n";
    
    CD_ROM c(SATA,2,bulit_in);
    c.Run();
    c.Stop();
    cout<<"*****************\n";

    COMPUTER my_computer(a,b,c,128,10);
    cout<<"*****************\n";
    
    my_computer.Run();
    my_computer.Stop();
    cout<<"*****************\n";
    system("pause");
    return 0;    
}