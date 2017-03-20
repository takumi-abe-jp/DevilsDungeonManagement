//
//  DemonsScene.hpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/20.
//
//

#ifndef demonsScene_hpp
#define demonsScene_hpp

#include <stdio.h>

class DemonsScene : public cocos2d::Layer
{
public :
    static cocos2d::Scene *createScene();

    virtual bool init();

    CREATE_FUNC(DemonsScene);

};
#endif /* demonsScene_hpp */
