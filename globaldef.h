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
    Open=50,
    Chat1,
    Chat2,
    Chat3
};

enum RoleDef{//定义角色
    //BiLiBiLi
    blbl22=100,
    //AzurLane
    biruishuiyi,
    dadi,
    dadi_h,
    heitaizi,
    heitaizishuizhuo,
    huonvlulu,
    kulasuo,
    nengdai,
    niaohai,
    tianlangxinglifu,
    xili,
    //LianTong
    liantong1,
    //VOCALOID
    luotianyi01,
    luotianyi02,
    luotianyi03,
    luotianyi04,
    luotianyi05,
    //VirtuaReal
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
const QString BiLiBiLiImagePath=":/images/bilibili";
const QString AzurLaneImagePath=":/images/AzurLane";
const QString LianTongImagePath=":/images/liantong";
const QString VirtuaRealImagePath=":/images/VirtuaReal";
const QString VOCALOIDImagePath=":/images/VOCALOID";
const QString BackgroundImage="/background.png";
const QString HeadImage="/head.png";
}

//UI path define
namespace UIResources{
const QString UIImagePath=":/images/other";
const QString UITextBackground=UIImagePath+"/TextBackground.png";
const QString UITextborder=UIImagePath+"/Textborder.png";
const QString UIButtonUpPage=UIImagePath+"/uppage.png";
const QString UIButtonUpPageHover=UIImagePath+"/uppagehover.png";
const QString UIButtonUpPagePressed=UIImagePath+"/uppagepressed.png";
const QString UIButtonNextPage=UIImagePath+"/nextpage.png";
const QString UIButtonNextPageHover=UIImagePath+"/nextpagehover.png";
const QString UIButtonNextPagePressed=UIImagePath+"/nextpagepressed.png";
const QString UIButtonPage=UIImagePath+"/page.png";
const QString UIButtonCurrentPage=UIImagePath+"/curpage.png";
}

//role define
namespace BiLiBiLi{
namespace bl22 {
const QString Name="22";
const QString ImagePath=ImageResources::BiLiBiLiImagePath+"/22";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/22";
const QString OpenText="这里是来着bilibili星球，永远都充满干劲的22哟。";
const QString ChatText1="好痒好痒，不要戳啦！";
const QString ChatText2="哔哩哔哩 (゜-゜)つロ 干杯~";
const QString ChatText3="工作真是辛苦呢...";
}
}

namespace AzurLane {
namespace biruishuiyi {
const QString Name="比叡睡衣";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/biruishuiyi";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/biruishuiyi";
const QString OpenText="指挥官想要睡哪个枕头？软的这个？还是硬的这个？还是说…想要睡在我的膝枕上呢～呵呵";
const QString ChatText1="嘻嘻，好像可以办一场睡衣派对了呢。指挥官觉得如何，要一起参加吗～？";
const QString ChatText2="安心的睡吧，指挥官。到了必要的时刻，我会把你叫醒的。";
const QString ChatText3="华灯初上，夜梅盛开…指挥官，不妨一起来赏花吧。";
}
namespace dadi {
const QString Name="大帝";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/dadi";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/dadi";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
namespace dadi_h {
const QString Name="大帝H";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/dadi_h";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/dadi_h";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
namespace heitaizi {
const QString Name="黑太子";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/heitaizi";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/heitaizi";
const QString OpenText="是破敌的长弓，还是御敌的盾牌……我会照着你的想法，成为你的力量。";
const QString ChatText1="女仆？啊，虽然不是，不过，红茶和简单的料理，我都没问题哦？";
const QString ChatText2="从这里能看到大海呢……指挥官，喜欢大海吗？";
const QString ChatText3="指挥官，是在发呆吗？要不，我也跟着指挥官发一会呆？";
}
namespace heitaizishuizhuo{
const QString Name="黑太子水着";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/heitaizishuizhuo";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/heitaizishuizhuo";
const QString OpenText="我还以为这身泳装不怎么显眼，没想到指挥官却一下子就找到我了。";
const QString ChatText1="海上是波涛汹涌的战场，海滩却是安详美好的乐园，真是神奇呢。";
const QString ChatText2="指挥官，累了吗？";
const QString ChatText3="海滩上的沙子软软的，细细的，踩在上面感觉很舒服呢……";
}
namespace huonvlulu {
const QString Name="火奴鲁鲁";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/huonvlulu";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/huonvlulu";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
namespace kulasuo {
const QString Name="库拉索";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/kulasuo";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/kulasuo";
const QString OpenText="久违的享受下休息的时光吧，指挥官？";
const QString ChatText1="女仆的义务可不止限定在穿着女仆装的时候，有什么需求尽管和我说吧。";
const QString ChatText2="想在腿上躺一会吗？指挥官您的话，请便就是～";
const QString ChatText3="如果有什么需要的话，尽管吩咐我就好了～";
}
namespace nengdai {
const QString Name="能代";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/nengdai";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/nengdai";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
namespace niaohai {
const QString Name="鸟海";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/niaohai";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/niaohai";
const QString OpenText="总觉得好像很久以前在哪里见过指挥官呢……我是鸟海，摩耶的同胞妹妹，以后请多多指教了哟。";
const QString ChatText1="指挥官，一直都很温柔呢……";
const QString ChatText2="指挥官，等到天气晴朗，适合踏青的时候，一起去看看风信子们吧。";
const QString ChatText3="指挥官，要休息吗？我为了这种情况特意联系了按摩技巧呢，来吧请不要客气～";
}
namespace tianlangxinglifu{
const QString Name="天狼星礼服";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/tianlangxinglifu";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/tianlangxinglifu";
const QString OpenText="主人，今天想要探讨什么？文学名著？军事艺术？绘画雕塑？亦或是…“爱”的问题？";
const QString ChatText1="主人，为何一直看着天狼星？莫，莫非我给主人带来了困扰？…是我多虑了吗…";
const QString ChatText2="项链很适合我…？谢谢您的夸奖，我骄傲的主人。";
const QString ChatText3="这种肢体接触还请在他人看不到的地方做，我骄傲的主人。";
}
namespace xili{
const QString Name="夕立";
const QString ImagePath=ImageResources::AzurLaneImagePath+"/xili";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/xili";
const QString OpenText="喔，有什么事吗";
const QString ChatText1="指挥官，能别当着我的面扔飞盘吗，我不是小狗……";
const QString ChatText2="肉的香味！在哪里？！快告诉我！";
const QString ChatText3="没有架打时好无聊啊……指挥官，来比试一下吧！";
}
}

namespace LianTong {
namespace liantong1 {
const QString Name="小红";
const QString ImagePath=ImageResources::LianTongImagePath+"/liantong1";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/liantong1";
const QString OpenText="呀！！吓我一跳，还以为是大灰狼来了...";
const QString ChatText1="和别人单独相处……好可怕……";
const QString ChatText2="我也……想和大家一起……";
const QString ChatText3="欢，欢迎回来……";
}
}

namespace VOCALOID {
namespace luotianyi01 {
const QString Name="洛天依01";
const QString ImagePath=ImageResources::VOCALOIDImagePath+"/luotianyi/01";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/luotianyi/01";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
namespace luotianyi02 {
const QString Name="洛天依02";
const QString ImagePath=ImageResources::VOCALOIDImagePath+"/luotianyi/02";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/luotianyi/02";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
namespace luotianyi03 {
const QString Name="洛天依03";
const QString ImagePath=ImageResources::VOCALOIDImagePath+"/luotianyi/03";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/luotianyi/03";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
namespace luotianyi04 {
const QString Name="洛天依04";
const QString ImagePath=ImageResources::VOCALOIDImagePath+"/luotianyi/04";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/luotianyi/04";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
namespace luotianyi05 {
const QString Name="洛天依05";
const QString ImagePath=ImageResources::VOCALOIDImagePath+"/luotianyi/05";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/luotianyi/05";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
}

namespace VirtuaReal {
namespace yousa {
const QString Name="泠鸢yousa";
const QString ImagePath=ImageResources::VirtuaRealImagePath+"/yousa";
const QString HeadImagePath=ImagePath+ImageResources::HeadImage;
const QString AudioPath=AudioResources::AudioPath+"/yousa";
const QString OpenText="";
const QString ChatText1="";
const QString ChatText2="";
const QString ChatText3="";
}
}


#endif // GLOBALDEF_H
