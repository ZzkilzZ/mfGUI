#include "../../includes/mfGUI.hpp"

// class game
// {

// mfGUI::Button::create

// };

// void init()
// {
// 	mfGUI::init(mWindow);

// }

// void update()
// {
// 	mfGUI::HandleEvents(event);
// }

// void render()
// {
// 	mfGUI::render();
// }

int main()
{
	sf::RenderWindow	window(sf::VideoMode(1600, 900), "Sandbox", sf::Style::Default);
	mf::GUI::Init(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			mf::GUI::HandleEvents(event);
		}
		window.clear(sf::Color::Red);
		mf::GUI::Render();
		window.display();
	}
}