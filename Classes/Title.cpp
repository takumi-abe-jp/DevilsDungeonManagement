//
//  Title.cpp
//  DevilsDungeonManagement
//
//  Created by 長井亨 on 2017/03/16.
//
//

#include <cocos/ui/UIButton.h>
#include "Title.hpp"
#include "HomeScene.hpp"

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

    // 画面サイズを取得
    Size visibleSize { Director::getInstance()->getVisibleSize() };

    // 背景を設置
    Sprite* background { Sprite::create("title.png") };
    background->setPosition(visibleSize / 2);
    this->addChild(background);

    // スタートボタン
    ui::Button* startButton { ui::Button::create("title.png") };
    startButton->setVisible(true);
    startButton->setOpacity(0);
    startButton->setPosition(visibleSize / 2);
    addChild(startButton);
    startButton->addTouchEventListener([this](Ref *pSender, cocos2d::ui::Widget::TouchEventType type) {
        if (type == cocos2d::ui::Widget::TouchEventType::BEGAN) {
            Scene* homeScene { HomeScene::createScene() };
            auto fade = TransitionTurnOffTiles::create(1.0f, homeScene);
            Director::getInstance()->replaceScene(fade);
        }
    });


    return true;
}

