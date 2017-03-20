//
//  DemonsScene.cpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/20.
//
//

#include "DemonsScene.hpp"
#include "Common.hpp"
#include "DungeonsScene.hpp"
#include "SettingScene.hpp"
#include "HomeScene.hpp"

USING_NS_CC;

Scene *DemonsScene::createScene() {
    auto scene = Scene::create();

    auto layer = DemonsScene::create();

    scene->addChild(layer);

    return scene;
}

bool DemonsScene::init() {
    if (!Layer::init())
    {
        return false;
    }

    // 画面サイズ取得
    Size visibleSize { Director::getInstance()->getVisibleSize() };

    // 背景を追加
    Sprite *background { Sprite::create("demons.png") };
    background->setPosition(visibleSize / 2);
    this->addChild(background);

    // ステータスバーを追加
    Sprite *status { Sprite::create("status.png") };
    status->setPosition(visibleSize / 2);
    this->addChild(status);

    // メニューを作成
    Vector<MenuItemImage *> menuItemImage;
    MenuItemImage* home { MenuItemImage::create("homeBackground.png", "homeBackground_hover.png", [](Ref *sender) {
        CCLOG("home");
        Scene *newScene { HomeScene::createScene() };
        auto fade = TransitionTurnOffTiles::create(0.5f, newScene);
        Director::getInstance()->replaceScene(fade);
    })};
    menuItemImage.pushBack(home);

    MenuItemImage* dungeon { MenuItemImage::create("dungeonBackground.png", "dungeonBackground_hover.png", [](Ref *sender) {
        CCLOG("dungeon");
        Scene *newScene { DungeonsScene::createScene() };
        auto fade = TransitionTurnOffTiles::create(0.5f, newScene);
        Director::getInstance()->replaceScene(fade);
    })};
    menuItemImage.pushBack(dungeon);

    MenuItemImage* demon { MenuItemImage::create("demonBackground.png", "demonBackground_hover.png", [](Ref *sender) {
        CCLOG("demon");
        Scene *newScene { DemonsScene::createScene() };
        auto fade = TransitionTurnOffTiles::create(0.5f, newScene);
        Director::getInstance()->replaceScene(fade);
    })};
    menuItemImage.pushBack(demon);

    MenuItemImage* setting { MenuItemImage::create("settingBackground.png", "settingBackground_hover.png", [](Ref *sender) {
        CCLOG("setting");
        Scene *newScene { SettingScene::createScene() };
        auto fade = TransitionTurnOffTiles::create(0.5f, newScene);
        Director::getInstance()->replaceScene(fade);
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