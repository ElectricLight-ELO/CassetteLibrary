#include "cUser.h"

User::User(sUs_initials auth)
{
	initials = auth;
}

User::sUs_initials User::retName()
{
	return initials;
}

vector<�assette>& User::retBooks()
{
	return booksGoted;
}

void User::putBook(�assette cc)
{
	booksGoted.push_back(cc);
}
