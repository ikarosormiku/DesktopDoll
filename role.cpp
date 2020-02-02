#include "role.h"

Role::Role()
{
    m_role=RoleDef::blbl22;
    m_AudioPath = RoleResources::blbl22::AudioPath;
    m_ImagePath = RoleResources::blbl22::ImagePath;
}

void Role::SetRole(RoleDef role)
{
    m_role=role;
    switch (role) {
    case RoleDef::blbl22:{
        m_AudioPath = RoleResources::blbl22::AudioPath;
        m_ImagePath = RoleResources::blbl22::ImagePath;
        break;
    }
    case RoleDef::biruishuiyi:{
        m_AudioPath = RoleResources::biruishuiyi::AudioPath;
        m_ImagePath = RoleResources::biruishuiyi::ImagePath;
        break;
    }
    case RoleDef::heitaizi:{
        m_AudioPath = RoleResources::heitaizi::AudioPath;
        m_ImagePath = RoleResources::heitaizi::ImagePath;
        break;
    }
    case RoleDef::heitaizishuizhuo:{
        m_AudioPath = RoleResources::heitaizishuizhuo::AudioPath;
        m_ImagePath = RoleResources::heitaizishuizhuo::ImagePath;
        break;
    }
    case RoleDef::kulasuo:{
        m_AudioPath = RoleResources::kulasuo::AudioPath;
        m_ImagePath = RoleResources::kulasuo::ImagePath;
        break;
    }
    case RoleDef::liantong1:{
        m_AudioPath = RoleResources::liantong1::AudioPath;
        m_ImagePath = RoleResources::liantong1::ImagePath;
        break;
    }
    case RoleDef::niaohai:{
        m_AudioPath = RoleResources::niaohai::AudioPath;
        m_ImagePath = RoleResources::niaohai::ImagePath;
        break;
    }
    case RoleDef::tianlangxinglifu:{
        m_AudioPath = RoleResources::tianlangxinglifu::AudioPath;
        m_ImagePath = RoleResources::tianlangxinglifu::ImagePath;
        break;
    }
    case RoleDef::xili:{
        m_AudioPath = RoleResources::xili::AudioPath;
        m_ImagePath = RoleResources::xili::ImagePath;
        break;
    }
    case RoleDef::yousa:{
        m_AudioPath = RoleResources::yousa::AudioPath;
        m_ImagePath = RoleResources::yousa::ImagePath;
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
    case RoleDef::blbl22:
        path=RoleResources::blbl22::OpenText;
        break;
    case RoleDef::biruishuiyi:
        path=RoleResources::biruishuiyi::OpenText;
        break;
    case RoleDef::heitaizi:
        path=RoleResources::heitaizi::OpenText;
        break;
    case RoleDef::heitaizishuizhuo:
        path=RoleResources::heitaizishuizhuo::OpenText;
        break;
    case RoleDef::kulasuo:
        path=RoleResources::kulasuo::OpenText;
        break;
    case RoleDef::liantong1:
        path=RoleResources::liantong1::OpenText;
        break;
    case RoleDef::niaohai:
        path=RoleResources::niaohai::OpenText;
        break;
    case RoleDef::tianlangxinglifu:
        path=RoleResources::tianlangxinglifu::OpenText;
        break;
    case RoleDef::xili:
        path=RoleResources::xili::OpenText;
        break;
    case RoleDef::yousa:
        path=RoleResources::yousa::OpenText;
        break;
    }
    return path;
}

const QString Role::GetRoleChat1Text()
{
    QString path;
    switch (m_role) {
    case RoleDef::blbl22:
        path=RoleResources::blbl22::ChatText1;
        break;
    case RoleDef::biruishuiyi:
        path=RoleResources::biruishuiyi::ChatText1;
        break;
    case RoleDef::heitaizi:
        path=RoleResources::heitaizi::ChatText1;
        break;
    case RoleDef::heitaizishuizhuo:
        path=RoleResources::heitaizishuizhuo::ChatText1;
        break;
    case RoleDef::kulasuo:
        path=RoleResources::kulasuo::ChatText1;
        break;
    case RoleDef::liantong1:
        path=RoleResources::liantong1::ChatText1;
        break;
    case RoleDef::niaohai:
        path=RoleResources::niaohai::ChatText1;
        break;
    case RoleDef::tianlangxinglifu:
        path=RoleResources::tianlangxinglifu::ChatText1;
        break;
    case RoleDef::xili:
        path=RoleResources::xili::ChatText1;
        break;
    case RoleDef::yousa:
        path=RoleResources::yousa::ChatText1;
        break;
    }
    return path;
}

const QString Role::GetRoleChat2Text()
{
    QString path;
    switch (m_role) {
    case RoleDef::blbl22:
        path=RoleResources::blbl22::ChatText2;
        break;
    case RoleDef::biruishuiyi:
        path=RoleResources::biruishuiyi::ChatText2;
        break;
    case RoleDef::heitaizi:
        path=RoleResources::heitaizi::ChatText2;
        break;
    case RoleDef::heitaizishuizhuo:
        path=RoleResources::heitaizishuizhuo::ChatText2;
        break;
    case RoleDef::kulasuo:
        path=RoleResources::kulasuo::ChatText2;
        break;
    case RoleDef::liantong1:
        path=RoleResources::liantong1::ChatText2;
        break;
    case RoleDef::niaohai:
        path=RoleResources::niaohai::ChatText2;
        break;
    case RoleDef::tianlangxinglifu:
        path=RoleResources::tianlangxinglifu::ChatText2;
        break;
    case RoleDef::xili:
        path=RoleResources::xili::ChatText2;
        break;
    case RoleDef::yousa:
        path=RoleResources::yousa::ChatText2;
        break;
    }
    return path;
}

const QString Role::GetRoleChat3Text()
{
    QString path;
    switch (m_role) {
    case RoleDef::blbl22:
        path=RoleResources::blbl22::ChatText3;
        break;
    case RoleDef::biruishuiyi:
        path=RoleResources::biruishuiyi::ChatText3;
        break;
    case RoleDef::heitaizi:
        path=RoleResources::heitaizi::ChatText3;
        break;
    case RoleDef::heitaizishuizhuo:
        path=RoleResources::heitaizishuizhuo::ChatText3;
        break;
    case RoleDef::kulasuo:
        path=RoleResources::kulasuo::ChatText3;
        break;
    case RoleDef::liantong1:
        path=RoleResources::liantong1::ChatText3;
        break;
    case RoleDef::niaohai:
        path=RoleResources::niaohai::ChatText3;
        break;
    case RoleDef::tianlangxinglifu:
        path=RoleResources::tianlangxinglifu::ChatText3;
        break;
    case RoleDef::xili:
        path=RoleResources::xili::ChatText3;
        break;
    case RoleDef::yousa:
        path=RoleResources::yousa::ChatText3;
        break;
    }
    return path;
}
