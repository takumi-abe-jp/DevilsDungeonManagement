//
//  Title.hpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/16.
//
//

#ifndef Title_hpp
#define Title_hpp

#include <stdio.h>
#include "cocos2d.h"
class Title : public cocos2d::Layer
{
public :
    static cocos2d::Scene *createScene();

    virtual bool init();

    CREATE_FUNC(Title);
};
#endif /* Title_hpp */
