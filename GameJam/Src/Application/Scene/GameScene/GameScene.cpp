#include "GameScene.h"
#include"../SceneManager.h"

#include "../../GameObject/Player/Player.h"

void GameScene::Event()
{
}

void GameScene::Init()
{
	// プレイヤー
	std::shared_ptr<Player> _spPlayer = std::make_shared<Player>();
	_spPlayer->Init();
	AddObject(_spPlayer);
}
