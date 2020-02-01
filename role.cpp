#include "role.h"

Role::Role()
{
    m_role=RoleDef::blbl22;
    m_AudioPath = gAudioFolderPath22;
    m_ImagePath = gImageFolderPath22;
}

void Role::SetRole(RoleDef role)
{
    m_role=role;
    switch (role) {
    case RoleDef::blbl22:{
        m_AudioPath = gAudioFolderPath22;
        m_ImagePath = gImageFolderPath22;
        break;
    }
    case RoleDef::yousa:{
        m_AudioPath = gAudioFolderPathYousa;
        m_ImagePath = gImageFolderPathYousa;
        break;
    }
    case RoleDef::liantong1:{
        m_AudioPath = gAudioFolderPathLiantong1;
        m_ImagePath = gImageFolderPathLiantong1;
        break;
    }
    case RoleDef::kulasuo:{
        m_AudioPath = gAudioFolderPathKulasuo;
        m_ImagePath = gImageFolderPathKulasuo;
        break;
    }
    }
}

const QString Role::GetRoleAudio(AudioDef audio)
{
    QString path;
    switch (m_role) {
    case RoleDef::blbl22:{
        path = BiLiBiLi22(audio,DataTypeDef::Audio);
        break;
    }
    case RoleDef::yousa:{
        break;
    }
    case RoleDef::liantong1:{
        path = LianTong1(audio,DataTypeDef::Audio);
        break;
    }
    case RoleDef::kulasuo:{
        path = Kulasuo(audio,DataTypeDef::Audio);
        break;
    }
    }
    return path;
}

const QString Role::GetRoleAudioText(AudioDef audio)
{
    QString path;
    switch (m_role) {
    case RoleDef::blbl22:{
        path = BiLiBiLi22(audio,DataTypeDef::Text);
        break;
    }
    case RoleDef::yousa:{
        break;
    }
    case RoleDef::liantong1:{
        path = LianTong1(audio,DataTypeDef::Text);
        break;
    }
    case RoleDef::kulasuo:{
        path = Kulasuo(audio,DataTypeDef::Text);
        break;
    }
    }
    return path;
}

const QString Role::GetRoleBackgroundImage()
{
    return m_ImagePath+gBackgroundImage;
}

const QString Role::RoleAudio(AudioDef audio)
{
    QString path;
    switch (audio) {
    case AudioDef::Open:{
        path=m_AudioPath+gOpenAudio;
        break;
    }
    case AudioDef::Chat1:{
        path=m_AudioPath+gChat1Audio;
        break;
    }
    case AudioDef::Chat2:{
        path=m_AudioPath+gChat2Audio;
        break;
    }
    case AudioDef::Chat3:{
        path=m_AudioPath+gChat3Audio;
        break;
    }
    }
    return path;
}

const QString Role::BiLiBiLi22(AudioDef audio, DataTypeDef type)
{
    QString path;
    switch (type) {
    case DataTypeDef::Audio:{
        path=RoleAudio(audio);
        break;
    }
    case DataTypeDef::Text:{
        switch (audio) {
        case AudioDef::Open:{
            path=gOpenAudioText22;
            break;
        }
        case AudioDef::Chat1:{
            path=gChatAudioText22_1;
            break;
        }
        case AudioDef::Chat2:{
            path=gChatAudioText22_2;
            break;
        }
        case AudioDef::Chat3:{
            path=gChatAudioText22_3;
            break;
        }
        }
        break;
    }
    }
    return path;
}

const QString Role::LianTong1(AudioDef audio, DataTypeDef type)
{
    QString path;
    switch (type) {
    case DataTypeDef::Audio:{
        path=RoleAudio(audio);
        break;
    }
    case DataTypeDef::Text:{
        switch (audio) {
        case AudioDef::Open:{
            path=gOpenAudioTextLiantong1;
            break;
        }
        case AudioDef::Chat1:{
            path=gChatAudioTextLiantong1_1;
            break;
        }
        case AudioDef::Chat2:{
            path=gChatAudioTextLiantong1_2;
            break;
        }
        case AudioDef::Chat3:{
            path=gChatAudioTextLiantong1_3;
            break;
        }
        }
        break;
    }
    }
    return path;
}

const QString Role::Kulasuo(AudioDef audio, DataTypeDef type)
{
    QString path;
    switch (type) {
    case DataTypeDef::Audio:{
        path=RoleAudio(audio);
        break;
    }
    case DataTypeDef::Text:{
        switch (audio) {
        case AudioDef::Open:{
            path=gOpenAudioTextKulasuo;
            break;
        }
        case AudioDef::Chat1:{
            path=gChatAudioTextKulasuo_1;
            break;
        }
        case AudioDef::Chat2:{
            path=gChatAudioTextKulasuo_2;
            break;
        }
        case AudioDef::Chat3:{
            path=gChatAudioTextKulasuo_3;
            break;
        }
        }
        break;
    }
    }
    return path;
}
