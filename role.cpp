#include "role.h"

Role::Role()
{
    m_role=RoleDef::blbl22;
    m_AudioPath = BiLiBiLi::bl22::AudioPath;
    m_ImagePath = BiLiBiLi::bl22::ImagePath;
}

void Role::SetRole(RoleDef role)
{
    m_role=role;
    switch (role) {
    //bilibili
    case RoleDef::blbl22:{
        m_AudioPath = BiLiBiLi::bl22::AudioPath;
        m_ImagePath = BiLiBiLi::bl22::ImagePath;
        break;
    }
    //AzurLane
    case RoleDef::biruishuiyi:{
        m_AudioPath = AzurLane::biruishuiyi::AudioPath;
        m_ImagePath = AzurLane::biruishuiyi::ImagePath;
        break;
    }
    case RoleDef::dadi:{
        m_AudioPath = AzurLane::dadi::AudioPath;
        m_ImagePath = AzurLane::dadi::ImagePath;
        break;
    }
    case RoleDef::dadi_h:{
        m_AudioPath = AzurLane::dadi_h::AudioPath;
        m_ImagePath = AzurLane::dadi_h::ImagePath;
        break;
    }
    case RoleDef::heitaizi:{
        m_AudioPath = AzurLane::heitaizi::AudioPath;
        m_ImagePath = AzurLane::heitaizi::ImagePath;
        break;
    }
    case RoleDef::heitaizishuizhuo:{
        m_AudioPath = AzurLane::heitaizishuizhuo::AudioPath;
        m_ImagePath = AzurLane::heitaizishuizhuo::ImagePath;
        break;
    }
    case RoleDef::huonvlulu:{
        m_AudioPath = AzurLane::huonvlulu::AudioPath;
        m_ImagePath = AzurLane::huonvlulu::ImagePath;
        break;
    }
    case RoleDef::kulasuo:{
        m_AudioPath = AzurLane::kulasuo::AudioPath;
        m_ImagePath = AzurLane::kulasuo::ImagePath;
        break;
    }
    case RoleDef::nengdai:{
        m_AudioPath = AzurLane::nengdai::AudioPath;
        m_ImagePath = AzurLane::nengdai::ImagePath;
        break;
    }
    case RoleDef::niaohai:{
        m_AudioPath = AzurLane::niaohai::AudioPath;
        m_ImagePath = AzurLane::niaohai::ImagePath;
        break;
    }
    case RoleDef::tianlangxinglifu:{
        m_AudioPath = AzurLane::tianlangxinglifu::AudioPath;
        m_ImagePath = AzurLane::tianlangxinglifu::ImagePath;
        break;
    }
    case RoleDef::xili:{
        m_AudioPath = AzurLane::xili::AudioPath;
        m_ImagePath = AzurLane::xili::ImagePath;
        break;
    }
    //LianTong
    case RoleDef::liantong1:{
        m_AudioPath = LianTong::liantong1::AudioPath;
        m_ImagePath = LianTong::liantong1::ImagePath;
        break;
    }
    //VOCALOID
    case RoleDef::luotianyi01:{
        m_AudioPath = VOCALOID::luotianyi01::AudioPath;
        m_ImagePath = VOCALOID::luotianyi01::ImagePath;
        break;
    }
    case RoleDef::luotianyi02:{
        m_AudioPath = VOCALOID::luotianyi02::AudioPath;
        m_ImagePath = VOCALOID::luotianyi02::ImagePath;
        break;
    }
    case RoleDef::luotianyi03:{
        m_AudioPath = VOCALOID::luotianyi03::AudioPath;
        m_ImagePath = VOCALOID::luotianyi03::ImagePath;
        break;
    }
    case RoleDef::luotianyi04:{
        m_AudioPath = VOCALOID::luotianyi04::AudioPath;
        m_ImagePath = VOCALOID::luotianyi04::ImagePath;
        break;
    }
    case RoleDef::luotianyi05:{
        m_AudioPath = VOCALOID::luotianyi05::AudioPath;
        m_ImagePath = VOCALOID::luotianyi05::ImagePath;
        break;
    }
    //VirtuaReal
    case RoleDef::yousa:{
        m_AudioPath = VirtuaReal::yousa::AudioPath;
        m_ImagePath = VirtuaReal::yousa::ImagePath;
        break;
    }
    }
}

const QString Role::GetRoleAudio(AudioDef audio)
{
    QString path;
    switch (audio) {
    case AudioDef::Open:
        path=m_AudioPath+AudioResources::OpenPath;
        break;
    case AudioDef::Chat1:
        path=m_AudioPath+AudioResources::Chat1Path;
        break;
    case AudioDef::Chat2:
        path=m_AudioPath+AudioResources::Chat2Path;
        break;
    case AudioDef::Chat3:
        path=m_AudioPath+AudioResources::Chat3Path;
        break;
    }
    return path;
}

const QString Role::GetRoleAudioText(AudioDef audio)
{
    QString path;
    switch (audio) {
    case AudioDef::Open:
        path=GetRoleOpenText();
        break;
    case AudioDef::Chat1:
        path=GetRoleChat1Text();
        break;
    case AudioDef::Chat2:
        path=GetRoleChat2Text();
        break;
    case AudioDef::Chat3:
        path=GetRoleChat3Text();
        break;
    }
    return path;
}

const QString Role::GetRoleBackgroundImage()
{
    return m_ImagePath+ImageResources::BackgroundImage;
}

const QString Role::GetRoleOpenText()
{
    QString path;
    switch (m_role) {
    //bilibili
    case RoleDef::blbl22:
        path=BiLiBiLi::bl22::OpenText;
        break;
    //AzurLane
    case RoleDef::biruishuiyi:
        path=AzurLane::biruishuiyi::OpenText;
        break;
    case RoleDef::heitaizi:
        path=AzurLane::heitaizi::OpenText;
        break;
    case RoleDef::heitaizishuizhuo:
        path=AzurLane::heitaizishuizhuo::OpenText;
        break;
    case RoleDef::kulasuo:
        path=AzurLane::kulasuo::OpenText;
        break;
    case RoleDef::niaohai:
        path=AzurLane::niaohai::OpenText;
        break;
    case RoleDef::tianlangxinglifu:
        path=AzurLane::tianlangxinglifu::OpenText;
        break;
    case RoleDef::xili:
        path=AzurLane::xili::OpenText;
        break;
    //liantong
    case RoleDef::liantong1:
        path=LianTong::liantong1::OpenText;
        break;
    //VirtuaReal
    case RoleDef::yousa:
        path=VirtuaReal::yousa::OpenText;
        break;
    }
    return path;
}

const QString Role::GetRoleChat1Text()
{
    QString path;
    switch (m_role) {
    //bilibili
    case RoleDef::blbl22:
        path=BiLiBiLi::bl22::ChatText1;
        break;
    //AzurLane
    case RoleDef::biruishuiyi:
        path=AzurLane::biruishuiyi::ChatText1;
        break;
    case RoleDef::heitaizi:
        path=AzurLane::heitaizi::ChatText1;
        break;
    case RoleDef::heitaizishuizhuo:
        path=AzurLane::heitaizishuizhuo::ChatText1;
        break;
    case RoleDef::kulasuo:
        path=AzurLane::kulasuo::ChatText1;
        break;
    case RoleDef::niaohai:
        path=AzurLane::niaohai::ChatText1;
        break;
    case RoleDef::tianlangxinglifu:
        path=AzurLane::tianlangxinglifu::ChatText1;
        break;
    case RoleDef::xili:
        path=AzurLane::xili::ChatText1;
        break;
    //LianTong
    case RoleDef::liantong1:
        path=LianTong::liantong1::ChatText1;
        break;
    //VirtuaReal
    case RoleDef::yousa:
        path=VirtuaReal::yousa::ChatText1;
        break;
    }
    return path;
}

const QString Role::GetRoleChat2Text()
{
    QString path;
    switch (m_role) {
    //bilibili
    case RoleDef::blbl22:
        path=BiLiBiLi::bl22::ChatText2;
        break;
    //AzurLane
    case RoleDef::biruishuiyi:
        path=AzurLane::biruishuiyi::ChatText2;
        break;
    case RoleDef::heitaizi:
        path=AzurLane::heitaizi::ChatText2;
        break;
    case RoleDef::heitaizishuizhuo:
        path=AzurLane::heitaizishuizhuo::ChatText2;
        break;
    case RoleDef::kulasuo:
        path=AzurLane::kulasuo::ChatText2;
        break;
    case RoleDef::niaohai:
        path=AzurLane::niaohai::ChatText2;
        break;
    case RoleDef::tianlangxinglifu:
        path=AzurLane::tianlangxinglifu::ChatText2;
        break;
    case RoleDef::xili:
        path=AzurLane::xili::ChatText2;
        break;
    //LianTong
    case RoleDef::liantong1:
        path=LianTong::liantong1::ChatText2;
        break;
    //VirtuaReal
    case RoleDef::yousa:
        path=VirtuaReal::yousa::ChatText2;
        break;
    }
    return path;
}

const QString Role::GetRoleChat3Text()
{
    QString path;
    switch (m_role) {
    //bilibili
    case RoleDef::blbl22:
        path=BiLiBiLi::bl22::ChatText3;
        break;
    //AzurLane
    case RoleDef::biruishuiyi:
        path=AzurLane::biruishuiyi::ChatText3;
        break;
    case RoleDef::heitaizi:
        path=AzurLane::heitaizi::ChatText3;
        break;
    case RoleDef::heitaizishuizhuo:
        path=AzurLane::heitaizishuizhuo::ChatText3;
        break;
    case RoleDef::kulasuo:
        path=AzurLane::kulasuo::ChatText3;
        break;
    case RoleDef::niaohai:
        path=AzurLane::niaohai::ChatText3;
        break;
    case RoleDef::tianlangxinglifu:
        path=AzurLane::tianlangxinglifu::ChatText3;
        break;
    case RoleDef::xili:
        path=AzurLane::xili::ChatText3;
        break;
    //LianTong
    case RoleDef::liantong1:
        path=LianTong::liantong1::ChatText3;
        break;
    //VirtuaReal
    case RoleDef::yousa:
        path=VirtuaReal::yousa::ChatText3;
        break;
    }
    return path;
}
