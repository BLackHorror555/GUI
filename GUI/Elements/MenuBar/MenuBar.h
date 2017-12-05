#pragma once
#include "../../GUI/GUIBox.h"
#include <vector>
#include <string.h>
#include "../../Observable.h"
/*! ����� MenuBar ������� ����, 
������ ����������� ����� ������� ������� ���� � �����
*/
class MenuBar : public GUIBox 
{
private:
	std::vector<std::shared_ptr <GUIBox> > buttonVect; ///< ������, ���������� ��� ������

	int buttonPosHelp=0; ///< ���������� �������� ������ ������������ ����������
	int buttonSizeHelp = 200; ///< ������ ������
	GUILayer * layer;
	friend class GUILayer;
	TextStyle *tstyle;///< ����� ������
	Text text; ///< �����
	RectangleShape * staticBar;///< �������� ��� ������

protected:
	/// �����������
	MenuBar(RenderWindow* renderWindow_, float x, float y, float width, float height,
		std::string text, TextStyle *tstyle, GUIStyle *gstyle,
		float leftBorder, float rightBorder, Color staticBarColor, GUILayer* layer); 
	/// �������������� ������� Draw()
	virtual void Draw() override; 
public:
	void addButton(std::string name , void(*action)());///< ����� �������� ����� ������ �� ���� ����
	
	virtual void SetPosition(Vector2f position_) override;///< �������������� ������� SetPosition(Vector2f position_)
	
	void SetPosition(Vector2f position_, Vector2f coefficient_) override;///< �������������� ������� SetPosition(Vector2f position_, Vector2f coefficient_)
	virtual void SetSize(Vector2f size_) override;///< �������������� ������� SetSize(Vector2f size_)
	void SetSize(Vector2f size_, Vector2f coefficient_) override;///< �������������� ������� SetSize(Vector2f size_, Vector2f coefficient_


	
};

