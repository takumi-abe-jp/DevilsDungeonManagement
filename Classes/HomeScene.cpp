//
//  HomeScene.cpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/16.
//
//

#include "HomeScene.hpp"
#include "cocos2d.h"
#include "Common.hpp"

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

    // 画面サイズ取得
    Size visibleSize { Director::getInstance()->getVisibleSize() };

    // 背景を追加
    Sprite *background { Sprite::create("home.png") };
    background->setPosition(visibleSize / 2);
    this->addChild(background);

    // メニューを作成
    Vector<MenuItemImage *> menuItemImage;
    MenuItemImage* home { MenuItemImage::create("homeBackground.png", "homeBackground_hover.png", [](Ref *sender) {
        CCLOG("test");
    })};
    menuItemImage.pushBack(home);

    MenuItemImage* dungeon { MenuItemImage::create("dungeonBackground.png", "dungeonBackground_hover.png", [](Ref *sender) {
        CCLOG("dungeon");
    })};
    menuItemImage.pushBack(dungeon);
    
    MenuItemImage* demon { MenuItemImage::create("demonBackground.png", "demonBackground_hover.png", [](Ref *sender) {
        CCLOG("demon");
    })};
    menuItemImage.pushBack(demon);

    MenuItemImage* setting { MenuItemImage::create("settingBackground.png", "settingBackground_hover.png", [](Ref *sender) {
        CCLOG("setting");
    })};
    menuItemImage.pushBack(setting);

    for (int i = 0; i < MENU; i++) {
        menuItemImage.at(i)->setAnchorPoint(Vec2(0, 0));
        menuItemImage.at(i)->setPosition(Vec2(68 + i * menuItemImage.at(i)->getContentSize().width, 50));
    }

    Menu *menu { Menu::create(home, dungeon, demon, setting,  NULL) };
    menu->setPosition(Point::ZERO);
    this->addChild(menu);

    return true;
}