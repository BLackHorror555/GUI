#pragma once
#include "../Button/GUIButton.h"
/*!
\brief �����, ����������� ������������ ������

������, ����������� ���� ��������� ��� �������
*/
class GUICheckButton : public GUIButton
{
public:
	/*!
	\brief ����������� ������

	\param renderWindow ����, � ������� ����� ���������� label
	\param x �-����������
	\param y �-����������
	\param width ������
	\param height ������
	\param text ������ ������
	\param tstyle ����� ������
	\param gstyle ����� ��� Box
	\param action ������� ���������� ��� �������

	*/
	GUICheckButton(GUILayer* layer_, RenderWindow* renderWindow_, float x, float y, float width, float height, std::string text, TextStyle *tstyle, GUIStyle *gstyle, void(*action)());
	~GUICheckButton();
	//! ������ ��������� ������
	bool GetState();
	//! ���������� ����������� �������
	void handleEvent(const sf::Event& event) override;
};

