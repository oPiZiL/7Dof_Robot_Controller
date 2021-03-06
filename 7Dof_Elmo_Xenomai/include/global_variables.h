#ifndef __GLOBAL_VARIABLES_CONFIG__
#define __GLOBAL_VARIABLES_CONFIG__

#define CYC_TIME 10
#define PI 3.1415926535897932384626433832795

/******demo******/
extern unsigned char CommandStackAppendPoint;

extern unsigned char SerialRxDataBuffer[];

typedef struct Command
{
    unsigned char DeviceCode;
    unsigned char ControlParameter;
    unsigned char DataH;
    unsigned char DataL;
}mycmd;
extern  mycmd CommandStack[];

void InitCommandStack() ;
/****************/

extern int cycle_counter;

typedef struct message_rc_to_tp
{
    bool done;
    double jointPos[7];
    double endPos[6];
}mes_rc2tp;
extern mes_rc2tp rc2tp;

typedef struct message_tp_to_rc
{
    bool exec;
    double tarpos;
    int jogMode;
    int jogVelo;
    int jogjoint[7];
    int jogend[6];
}mes_tp2rc;
extern mes_tp2rc tp2rc;

extern double jointPos[];
extern double jointPosArc[7];
extern double endPos[];

extern double psi_last;

#endif
