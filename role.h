#ifndef ROLE_H
#define ROLE_H

#include "globaldef.h"
class Role
{
public:
    Role();
    void SetRole(RoleDef role);
    const QString GetRoleAudio(AudioDef audio);
    const QString GetRoleAudioText(AudioDef audio);
    const QString GetRoleBackgroundImage();
private:
    RoleDef m_role;
    QString m_AudioPath;
    QString m_ImagePath;
    const QString RoleAudio(AudioDef audio);
    const QString BiLiBiLi22(AudioDef audio,DataTypeDef type);
    const QString LianTong1(AudioDef audio,DataTypeDef type);
    const QString Kulasuo(AudioDef audio,DataTypeDef type);
};

#endif // ROLE_H
