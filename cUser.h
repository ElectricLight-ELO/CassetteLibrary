#pragma once
#include "imports.h"
#include "c�assette.h"


class User
{
public:
	struct sUs_initials
	{
		string name;
		string second_name;
		string id;
	};
	User() = default;
	User(sUs_initials author);

	sUs_initials retName();
	vector<�assette>& retBooks();
	void putBook(�assette cc);
private:
	sUs_initials initials;
	vector<�assette> booksGoted = vector<�assette>();
};

