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
    const QString GetRoleOpenText();
    const QString GetRoleChat1Text();
    const QString GetRoleChat2Text();
    const QString GetRoleChat3Text();
};

#endif // ROLE_H
