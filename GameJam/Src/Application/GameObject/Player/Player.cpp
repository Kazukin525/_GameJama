#include "Player.h"

void Player::Update()
{
}

void Player::DrawLit()
{
	if (!m_spTexture) { return; }
	const int _width	= m_spTexture->GetWidth();
	const int _height	= m_spTexture->GetHeight();
	KdShaderManager::Instance().m_spriteShader.DrawTex(m_spTexture,(int)m_pos.x,(int)m_pos.y,_width,_height);
}

void Player::Init()
{
	if (!m_spTexture)
	{
		m_spTexture = std::make_shared<KdTexture>();
		
		bool _isLoad = false;
		_isLoad = m_spTexture->Load("");
		//assert(0 && "プレイヤー画像ロード失敗");
	}
}
