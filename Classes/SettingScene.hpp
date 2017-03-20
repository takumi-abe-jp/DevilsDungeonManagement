//
//  SettingScene.hpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/20.
//
//

#ifndef settingScene_hpp
#define settingScene_hpp

#include <stdio.h>

class SettingScene : public cocos2d::Layer
{
public :
    static cocos2d::Scene *createScene();

    virtual bool init();

    CREATE_FUNC(SettingScene);

};


#endif /* settingScene_hpp */
