//
//  HomeScene.hpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/16.
//
//

#ifndef HomeScene_hpp
#define HomeScene_hpp

#include <stdio.h>

USING_NS_CC;

class HomeScene : cocos2d::Layer
{
public :
    static Scene *createScene();

    virtual bool init();

    CREATE_FUNC(HomeScene);
};

#endif /* HomeScene_hpp */
