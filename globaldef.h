#ifndef GLOBALDEF_H
#define GLOBALDEF_H
#include <QString>
#include <QDir>
enum RightClickEenuDef{
    Calculator=1,
    OpenRoleSelectionWindow,
    OpenSetUpWindow,
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
    biruishuiyi,
    heitaizi,
    heitaizishuizhuo,
    kulasuo,
    liantong1,
    niaohai,
    tianlangxinglifu,
    xili,
    yousa
};
//Resource Path
const QString ImagesResourcePath = QDir::currentPath()+"/release/resource/images.rcc";
const QString AudioResourcePath = QDir::currentPath()+"/release/resource/audio.rcc";
//const QString ImagesResourcePath = QDir::currentPath()+"/resource/images.rcc";
//const QString AudioResourcePath = QDir::currentPath()+"/resource/audio.rcc";
//audio path define
namespace AudioResources{
const QString AudioPath="qrc:/audio";
const QString OpenPath = "/open.mp3";
const QString Chat1Path = "/chat1.mp3";
const QString Chat2Path = "/chat2.mp3";
const QString Chat3Path = "/chat3.mp3";
}

//image path define
namespace ImageResources{
const QString ImagePath=":/images";
const QString BackgroundImage="/background.png";
const QString HeadImage="/head.png";
}

//UI path define
namespace UIResources{
const QString UIimagePath=":/images/other";
const QString UITextBackground=UIimagePath+"/TextBackground.png";
const QString UITextborder=UIimagePath+"/Textborder.png";
}

//role define
namespace RoleResources{
namespace  blbl22 {
const QString Name="22";
const QString ImagePath=ImageResources::ImagePath+"/22";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/22";
const QString OpenText="这里是来着bilibili星球，永远都充满干劲的22哟。";
const QString ChatText1="好痒好痒，不要戳啦！";
const QString ChatText2="哔哩哔哩 (゜-゜)つロ 干杯~";
const QString ChatText3="工作真是辛苦呢...";
}
namespace biruishuiyi {
const QString Name="比叡睡衣";
const QString ImagePath=ImageResources::ImagePath+"/biruishuiyi";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/biruishuiyi";
const QString OpenText="指挥官想要睡哪个枕头？软的这个？还是硬的这个？还是说…想要睡在我的膝枕上呢～呵呵";
const QString ChatText1="嘻嘻，好像可以办一场睡衣派对了呢。指挥官觉得如何，要一起参加吗～？";
const QString ChatText2="安心的睡吧，指挥官。到了必要的时刻，我会把你叫醒的。";
const QString ChatText3="华灯初上，夜梅盛开…指挥官，不妨一起来赏花吧。";
}
namespace heitaizi {
const QString Name="黑太子";
const QString ImagePath=ImageResources::ImagePath+"/heitaizi";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/heitaizi";
const QString OpenText="是破敌的长弓，还是御敌的盾牌……我会照着你的想法，成为你的力量。";
const QString ChatText1="女仆？啊，虽然不是，不过，红茶和简单的料理，我都没问题哦？";
const QString ChatText2="从这里能看到大海呢……指挥官，喜欢大海吗？";
const QString ChatText3="指挥官，是在发呆吗？要不，我也跟着指挥官发一会呆？";
}
namespace heitaizishuizhuo{
const QString Name="黑太子水着";
const QString ImagePath=ImageResources::ImagePath+"/heitaizishuizhuo";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/heitaizishuizhuo";
const QString OpenText="我还以为这身泳装不怎么显眼，没想到指挥官却一下子就找到我了。";
const QString ChatText1="海上是波涛汹涌的战场，海滩却是安详美好的乐园，真是神奇呢。";
const QString ChatText2="指挥官，累了吗？";
const QString ChatText3="海滩上的沙子软软的，细细的，踩在上面感觉很舒服呢……";
}
namespace kulasuo {
const QString Name="库拉索";
const QString ImagePath=ImageResources::ImagePath+"/kulasuo";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/kulasuo";
const QString OpenText="久违的享受下休息的时光吧，指挥官？";
const QString ChatText1="女仆的义务可不止限定在穿着女仆装的时候，有什么需求尽管和我说吧。";
const QString ChatText2="想在腿上躺一会吗？指挥官您的话，请便就是～";
const QString ChatText3="如果有什么需要的话，尽管吩咐我就好了～";
}
namespace liantong1 {
const QString Name="小红";
const QString ImagePath=ImageResources::ImagePath+"/liantong1";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/liantong1";
const QString OpenText="呀！！吓我一跳，还以为是大灰狼来了...";
const QString ChatText1="和别人单独相处……好可怕……";
const QString ChatText2="我也……想和大家一起……";
const QString ChatText3="欢，欢迎回来……";
}
namespace niaohai {
const QString Name="鸟海";
const QString ImagePath=ImageResources::ImagePath+"/niaohai";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/niaohai";
const QString OpenText="总觉得好像很久以前在哪里见过指挥官呢……我是鸟海，摩耶的同胞妹妹，以后请多多指教了哟。";
const QString ChatText1="指挥官，一直都很温柔呢……";
const QString ChatText2="指挥官，等到天气晴朗，适合踏青的时候，一起去看看风信子们吧。";
const QString ChatText3="指挥官，要休息吗？我为了这种情况特意联系了按摩技巧呢，来吧请不要客气～";
}
namespace tianlangxinglifu{
const QString Name="天狼星礼服";
const QString ImagePath=ImageResources::ImagePath+"/tianlangxinglifu";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/tianlangxinglifu";
const QString OpenText="主人，今天想要探讨什么？文学名著？军事艺术？绘画雕塑？亦或是…“爱”的问题？";
const QString ChatText1="主人，为何一直看着天狼星？莫，莫非我给主人带来了困扰？…是我多虑了吗…";
const QString ChatText2="项链很适合我…？谢谢您的夸奖，我骄傲的主人。";
const QString ChatText3="这种肢体接触还请在他人看不到的地方做，我骄傲的主人。";
}
namespace xili{
const QString Name="夕立";
const QString ImagePath=ImageResources::ImagePath+"/xili";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/xili";
const QString OpenText="喔，有什么事吗";
const QString ChatText1="指挥官，能别当着我的面扔飞盘吗，我不是小狗……";
const QString ChatText2="肉的香味！在哪里？！快告诉我！";
const QString ChatText3="没有架打时好无聊啊……指挥官，来比试一下吧！";
}
namespace yousa {
const QString Name="泠鸢yousa";
const QString ImagePath=ImageResources::ImagePath+"/yousa";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/yousa";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
}


#endif // GLOBALDEF_H
