/*  
 * mystring_B.cpp 
 * lab 2 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
 */
// ENSF 480 - Lab 2 - Exercise A
#include "mystring_B.h"
#include <string.h>
#include <iostream>
using namespace std;

Mystring::Mystring()
{ 
  charsM = new char[1];

  // make sure memory is allocated.
  memory_check(charsM); 
  charsM[0] = '\0';
  lengthM = 0;
}

Mystring::Mystring(const char *s)
  : lengthM(strlen(s))
{
  charsM = new char[lengthM + 1];

 // make sure memory is allocated.
  memory_check(charsM);

  strcpy(charsM, s);
}

Mystring::Mystring(int n)
  : lengthM(0), charsM(new char[n])
{
  // make sure memory is allocated.
  memory_check(charsM);
  charsM[0] = '\0';
}

Mystring::Mystring(const Mystring& source):
  lengthM(source.lengthM), charsM(new char[source.lengthM+1])
{
  memory_check(charsM);
  strcpy (charsM, source.charsM);
}

Mystring::~Mystring()
{
  delete [] charsM;
}

int Mystring::length() const
{
  return lengthM;
}

char Mystring::get_char(int pos) const
{
  if(pos < 0 && pos >= length()){
    cerr << "\nERROR: get_char: the position is out of boundary." ;
  }

  return charsM[pos];
}

const char * Mystring::c_str() const
{
  return charsM;
}

void Mystring::set_char(int pos, char c)
{
  if(pos < 0 && pos >= length()){
    cerr << "\nset_char: the position is out of boundary."
	 << " Nothing was changed.";
    return;
  } 

  if (c != '\0'){
    cerr << "\nset_char: char c is empty."
	 << " Nothing was changed.";
    return;
  }

  charsM[pos] = c;
}

Mystring& Mystring::operator =(const Mystring& S)
{
  if(this == &S)
    return *this;
  delete [] charsM;
  lengthM = (int)strlen(S.charsM);
  charsM = new char [lengthM+1];
  memory_check(charsM);
  strcpy(charsM,S.charsM);

  return *this;
}
bool Mystring::operator >= (const Datum& x)
{
	int compare = strcmp(storageM, x.storageM);
	bool result = (compare >= 0)? true : false;
	return result;
}	
bool Mystring::operator <= (const Datum& x)
{
	int compare = strcmp(storageM, x.storageM);
	bool result = (compare < 0)? true : false;
	return result;
}
bool Mystring::operator < (const Datum& x)
{
	int compare = strcmp(storageM, x.storageM);
	bool result = (compare < 0)? true : false;
	return result;
}
bool Mystring::operator > (const Datum& x)
{
	int compare = strcmp(storageM, x.storageM);
	bool result = (compare > 0)? true : false;
	return result;
}
bool Mystring::operator == (const Datum& x)
{
	int compare = strcmp(storageM, x.storageM);
	bool result = (compare == 0)? true : false;
	return result;
}
bool Mystring::operator != (const Datum& x)
{
	int compare = strcmp(storageM, x.storageM);
	bool result = (compare != 0)? true : false;
	return result;
}

char& Mystring::operator[](int index)
{// it recieves a datum&
	if (index<0||index >= lengthM){
		cout<< "index is out of bounds"<<endl;
	}
	return charsM[index];
}
ostream& operator <<(ostream& os, const Datum& x){
	os<<x.charsM;
	return os;
}

Mystring& Mystring::append(const Mystring& other)
{
  char *tmp = new char [lengthM + other.lengthM + 1];
  memory_check(tmp);
  lengthM+=other.lengthM;
  strcpy(tmp, charsM);
  strcat(tmp, other.charsM);
  delete []charsM;
  charsM = tmp;

  return *this;
}

 void Mystring::set_str(char* s)
{
    delete []charsM;
    lengthM = (int)strlen(s);
    charsM=new char[lengthM+1];
    memory_check(charsM);

    strcpy(charsM, s);
}

int Mystring::isEqual (const Mystring& s)const
{
  return (strcmp(charsM, s.charsM)== 0);
}


void Mystring::memory_check(char* s)
{
  if(s == 0)
    {
      cerr <<"Memory not available.";
      exit(1);
    }
}











