#include <iostream>
#include <string>
#include <Windows.h>


int Throw()
{
	srand(time(NULL));
		int x = rand() % 6 + 1;
		short score = 0;

		switch (x)
		{
		case 1:
			std::cout << "     \n  @  \n     " << std::endl;
			for (int i = 0; i < 3; i++)
			{
				std::cout<<
			}
			score = 1;
			return score;
			break;
		case 2:
			std::cout << "     \n@   @\n     " << std::endl;
			score = 2;
			return score;
			break;
		case 3:
			std::cout << "@    \n  @  \n    @" << std::endl;
			score = 3;
			return score;
			break;
		case 4:
			std::cout << "@   @\n     \n@   @" << std::endl;
			score = 4;
			return score;
			break;
		case 5:
			std::cout << "@   @\n  @  \n@   @" << std::endl;
			score = 5;
			return score;
			break;
		case 6:
			std::cout << "@   @\n@   @\n@   @" << std::endl;
			score = 6;
			return score;
			break;
		default: 
			std::cout << "\nПовторите бросок! " << std::endl;
			return 0;
			break;
		}
}

int main()
{
	int scoreUser = 0;
	int scoreComputer = 0;
	setlocale(0, "");
	std::string name;
	std::cout << "Введите свой ник: ";
	std::cin >> name;
	int round;
	std::cout << "Введите количество раундов? 1 - 10 : ";
	std::cin >> round;
	std::cout << "Право первого хода. " << std::endl;
	std::cout << "Нажмите enter для броска..." << std::endl;
	system("pause");
	bool step;
	int userTempScore;
	int compTempScore;
	while (true)
	{
		Sleep(1000);
		std::cout << "Ваш результат: " << std::endl;
		userTempScore = Throw();
		std::cout << "\nБросок компьютера... " << std::endl;
		Sleep(1000);
		std::cout << "Результат компьютера: " << std::endl;
		compTempScore = Throw();
		if (userTempScore == compTempScore) continue;
		else break;
	}
		
	system("pause");

	step = (userTempScore > compTempScore);
	
	std::string user;	
	if (step) user = "первым ";
	else user = "вторым ";
	
	int count = 1;
	int userScore = 0;
	int compScore = 0;

	std::cout << "Вы ходите " << user << std::endl;
	system("pause");
	system("cls");
	
	
	
	std::cout << "Раунд " << count << ". " << std::endl;
	if (step)
	{
		while (count++ <= round)
		{
			std::cout << "Вы бросаете кубики..." << std::endl;
			system("pause");
			userScore += Throw();
			std::cout << "Компьютер бросает кубики..." << std::endl;
			Sleep(1000);
			compScore += Throw();
		}
	}
	else
	{
		while (count++ <= round)
		{
			std::cout << "Компьютер бросает кубики..." << std::endl;
			Sleep(1000);
			compScore += Throw();
			std::cout << "Вы бросаете кубики..." << std::endl;
			system("pause");
			userScore += Throw();
		}
	}
	if (userScore > compScore)
	{
		std::cout << "Вы победили! ";
	}
	else
	{
		std::cout << "Вы проиграли! ";
	}
		
	
}
	

	





