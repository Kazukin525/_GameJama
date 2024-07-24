#pragma once
class Player : public KdGameObject
{
public:
	Player()					{}
	~Player()		override	{}

	void Update()	override;
	void DrawLit()	override;
	void Init()		override;

private:

	// アセット
	std::shared_ptr<KdTexture>	m_spTexture = nullptr;

	// 座標
	Math::Vector2				m_pos = Math::Vector2::Zero;

	// アニメーション
};
