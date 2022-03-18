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

class RestaurantMenu : public Menu
{
public:
	virtual void Show() override;
};

class FieldMenu : public Menu
{
public:
	virtual void Show() override;
};