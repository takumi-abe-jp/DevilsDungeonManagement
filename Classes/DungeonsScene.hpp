//
//  DungeonsScene.hpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/20.
//
//

#ifndef dungeonsScene_hpp
#define dungeonsScene_hpp

#include <stdio.h>

class DungeonsScene : public cocos2d::Layer
{
public :
    static cocos2d::Scene *createScene();

    virtual bool init();

    CREATE_FUNC(DungeonsScene);

};

#endif /* dungeonsScene_hpp */
