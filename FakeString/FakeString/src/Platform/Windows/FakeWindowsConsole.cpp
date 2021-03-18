#include "FakeWindowsConsole.h"

#include <Windows.h>
#include <iostream>

namespace Utils
	{
	static int32 ConvertForeground(FakeConsoleForeground foreground)
		{
		switch (foreground)
			{
			case FakeConsoleForeground::NONE: return 39;
			case FakeConsoleForeground::BLACK: return 30;
			case FakeConsoleForeground::DARK_RED: return 31;
			case FakeConsoleForeground::DARK_GREEN: return 32;
			case FakeConsoleForeground::DARK_YELLOW: return 33;
			case FakeConsoleForeground::DARK_BLUE: return 34;
			case FakeConsoleForeground::DARK_MAGENTA: return 35;
			case FakeConsoleForeground::DARK_CYAN: return 36;
			case FakeConsoleForeground::GRAY: return 37;
			case FakeConsoleForeground::DARK_GRAY: return 90;
			case FakeConsoleForeground::RED: return 91;
			case FakeConsoleForeground::GREEN:return  92;
			case FakeConsoleForeground::YELLOW: return 93;
			case FakeConsoleForeground::BLUE: return 94;
			case FakeConsoleForeground::MAGENTA: return 95;
			case FakeConsoleForeground::CYAN: return 96;
			case FakeConsoleForeground::WHITE: return 97;
			}

		return -1;
		}

	static int32 ConvertBackground(FakeConsoleBackground background)
		{
		switch (background)
			{
			case FakeConsoleBackground::NONE: return 49;
			case FakeConsoleBackground::BLACK: return 40;
			case FakeConsoleBackground::DARK_RED: return 41;
			case FakeConsoleBackground::DARK_GREEN: return 42;
			case FakeConsoleBackground::DARK_YELLOW: return 43;
			case FakeConsoleBackground::DARK_BLUE: return 44;
			case FakeConsoleBackground::DARK_MAGENTA: return 45;
			case FakeConsoleBackground::DARK_CYAN: return 46;
			case FakeConsoleBackground::GRAY: return 47;
			case FakeConsoleBackground::DARK_GRAY: return 100;
			case FakeConsoleBackground::RED: return 101;
			case FakeConsoleBackground::GREEN: return 102;
			case FakeConsoleBackground::YELLOW: return 103;
			case FakeConsoleBackground::BLUE: return 104;
			case FakeConsoleBackground::MAGENTA: return 105;
			case FakeConsoleBackground::CYAN: return 106;
			case FakeConsoleBackground::WHITE: return 107;
			}

		return -1;
		}
	}

void FakeWindowsConsole::SetColor(int32 color)
	{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	}

void FakeWindowsConsole::EnableVirtualTerminalProcessing()
	{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode = 0;
	GetConsoleMode(hOut, &dwMode);
	if (!(dwMode & ENABLE_VIRTUAL_TERMINAL_PROCESSING))
		{
		dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
		SetConsoleMode(hOut, dwMode);
		}
	}

void FakeWindowsConsole::ResetTerminalFormat()
	{
	std::cout << u8"\033[0m";
	}

void FakeWindowsConsole::SetVirtualTerminalFormat(FakeConsoleForeground foreground, FakeConsoleBackground background, std::set<FakeConsoleTextStyle> styles)
	{
	std::string format = u8"\033[";
	format.append(std::to_string(Utils::ConvertForeground(foreground)));
	format.append(u8";");
	format.append(std::to_string(Utils::ConvertBackground(background)));

	if (styles.size() > 0)
		{
		for (auto it = styles.begin(); it != styles.end(); ++it)
			{
			format.append(u8";");
			format.append(std::to_string(static_cast<int>(*it)));
			}
		}

	format.append(u8"m");
	std::cout << format;
	}

void FakeWindowsConsole::Clear()
	{
	std::system(u8"cls");
	}

void FakeWindowsConsole::Write(const FakeString &str, FakeConsoleForeground foreground, FakeConsoleBackground background, std::set<FakeConsoleTextStyle> styles)
	{
	EnableVirtualTerminalProcessing();
	SetVirtualTerminalFormat(foreground, background, styles);
	WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), str.W_Str(), static_cast<DWORD>(str.Length()), nullptr, nullptr);
	ResetTerminalFormat();
	}

void FakeWindowsConsole::WriteLine(const FakeString &str, FakeConsoleForeground foreground, FakeConsoleBackground background, std::set<FakeConsoleTextStyle> styles)
	{
	Write(str, foreground, background, styles);
	std::cout << std::endl;
	}

void FakeWindowsConsole::WriteLine()
	{
	std::cout << std::endl;
	}
