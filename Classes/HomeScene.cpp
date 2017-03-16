//
//  HomeScene.cpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/16.
//
//

#include "HomeScene.hpp"
#include "cocos2d.h"

USING_NS_CC;

Scene *HomeScene::createScene(){
    auto scene = Scene::create();
    auto layer = HomeScene::create();

    scene->addChild(layer);
    return scene;
}

bool HomeScene::init() {
    if (!Layer::init())
    {
        return false;
    }

    return true;
}