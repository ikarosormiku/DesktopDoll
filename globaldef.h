#ifndef GLOBALDEF_H
#define GLOBALDEF_H
#include <QString>
#include <QDir>
enum RightClickEenuDef{
    Calculator=1,
    OpenRoleSelectionWindow,
    WindowClose
};

enum AudioDef{
    Open=100,
    Chat1,
    Chat2,
    Chat3
};

enum RoleDef{//定义角色
    blbl22=200,
    yousa,
    liantong1,
    kulasuo
};

enum DataTypeDef{
    Audio=300,
    Text
};
//audio path define
const QString gAudioPath=QDir::currentPath()+"/release/audio";
const QString gOpenAudio = "/open.mp3";
const QString gChat1Audio = "/chat1.mp3";
const QString gChat2Audio = "/chat2.mp3";
const QString gChat3Audio = "/chat3.mp3";
//image path define
const QString gImagePath=QDir::currentPath()+"/release/images";
const QString gBackgroundImage="/background.png";
const QString gHeadImage="/head.png";
//UI path define
const QString gUIimagePath=QDir::currentPath()+"/release/images/other";
const QString gUITextBackground=gUIimagePath+"/TextBackground.png";
const QString gUITextborder=gUIimagePath+"/Textborder.png";
//role define
//bilibili22
const QString gImageFolderPath22=gImagePath+"/22";
const QString gAudioFolderPath22 = gAudioPath+"/22";
const QString gOpenAudioText22="这里是来着bilibili星球，永远都充满干劲的22哟";
const QString gChatAudioText22_1="好痒好痒，不要戳啦！";
const QString gChatAudioText22_2="哔哩哔哩 (゜-゜)つロ 干杯~";
const QString gChatAudioText22_3="工作真是辛苦呢...";

//泠鸢yousa
const QString gImageFolderPathYousa=gImagePath+"/yousa";
const QString gAudioFolderPathYousa = gAudioPath+"/yousa";
//liantong1炼铜
const QString gImageFolderPathLiantong1=gImagePath+"/liantong1";
const QString gAudioFolderPathLiantong1 = gAudioPath+"/liantong1";
const QString gOpenAudioTextLiantong1="呀！！吓我一跳，还以为是大灰狼来了...";
const QString gChatAudioTextLiantong1_1="和别人单独相处……好可怕……";
const QString gChatAudioTextLiantong1_2="我也……想和大家一起……";
const QString gChatAudioTextLiantong1_3="欢，欢迎回来……";
//kulasuo库拉索
const QString gImageFolderPathKulasuo=gImagePath+"/kulasuo";
const QString gAudioFolderPathKulasuo = gAudioPath+"/kulasuo";
const QString gOpenAudioTextKulasuo="久违的享受下休息的时光吧，指挥官？";
const QString gChatAudioTextKulasuo_1="女仆的义务可不止限定在穿着女仆装的时候，有什么需求尽管和我说吧。";
const QString gChatAudioTextKulasuo_2="想在腿上躺一会吗？指挥官您的话，请便就是～";
const QString gChatAudioTextKulasuo_3="如果有什么需要的话，尽管吩咐我就好了～";

#endif // GLOBALDEF_H
