class Logbook{
public:
	// Constructor
	Logbook ( int month, int year );        
	// Logbook marking operations
	void putEntry ( int day, int value );   
	int getEntry ( int day ) const;        
	int getMonth () const;                 
	int getYear () const;                  
	int getDaysInMonth () const;                          
private:
	bool isLeapYear() const;
	// Data members
	int logMonth, logYear, logentries[31];  
};

Logbook::Logbook(int month, int year)
{
	logMonth = month;
	logYear = year;
	for (int i = 0; i < getDaysInMonth(); i++)
		logentries[i] = 0;
}

void Logbook::putEntry(int day, int value)
{
	logentries[day - 1] = value;
}

int Logbook::getEntry(int day) const
{
	return logentries[day];
}

int Logbook::getMonth() const
{
	return logMonth;
}

int Logbook::getYear() const
{
	return logYear;
}

int Logbook::getDaysInMonth() const
{
	if (logMonth == 1 || logMonth == 3 || logMonth == 5 || logMonth == 7 || logMonth == 8 || logMonth == 10 || logMonth == 12)
		return 31;
	else
	{
		if (logMonth != 2)
			return 30;
		else
		if (isLeapYear())
				return 29;
			else
				return 28;
	}
}

bool Logbook::isLeapYear() const
{
	if (((logYear % 4) != 0) || ( ((logYear % 100) == 0) && ((logYear % 400) != 0) ))
		return false;
	else
		return true;
}
