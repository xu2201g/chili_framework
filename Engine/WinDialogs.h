#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <Commdlg.h>
#include <WinUser.h>

using namespace std;

class WinDialogs
{

public:

	wstring  GetFileName(const wstring & prompt) {
		const int BUFSIZE = 1024;
		wchar_t buffer[BUFSIZE] = { 0 };
		OPENFILENAME ofns = { 0 };
		ofns.lStructSize = sizeof(ofns);
		ofns.lpstrFile = buffer;
		ofns.nMaxFile = BUFSIZE;
		ofns.lpstrTitle = prompt.c_str();
		GetOpenFileName(&ofns);
		return buffer;
	}

	bool OpenDialog()
	{

		wstring fname = GetFileName(L"Number which file: ");
		ifstream ifs(fname.c_str());
		if (!ifs.is_open()) {
			//cerr << "cannot open " << fname << " for input" << endl;
		}
		else {
			string line;
			int lineno = 1;
			while (getline(ifs, line)) {
				cout << setw(5) << right << lineno++ << " : " << line << "\n";
			}
		}

		return true;
	}

};





