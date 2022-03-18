#pragma once

class Menu abstract
{
public:
	virtual void Show() abstract;
};

class InventoryMenu : public Menu
{
public:
	virtual void Show() override;
};