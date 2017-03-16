//
//  Title.cpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/16.
//
//

#include "Title.hpp"

USING_NS_CC;

Scene *Title::createScene() {
    auto scene = Scene::create();

    auto layer = Title::create();

    scene->addChild(layer);

    return scene;
}

bool Title::init()
{
    if (!Layer::init())
    {
        return false;
    }

    return true;
}