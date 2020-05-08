#pragma once
#include "IE.h"

class Show : public IE {
private:
	std::string date;
	std::string place;
	int availablePlaces;
	int occupiedPlaces;
public:
	Show();
	Show(std::string date, std::string place, int availablePlaces, int occupiedPlaces);
	Show(const Show& s);
	~Show();
	Show& operator=(const Show& s);
	bool operator==(const Show& s) const;
	std::string getDate();
	std::string getPlace();
	int getAvailablePlaces();
	int getOccupiedPlaces();
	void setDate(std::string date);
	void setPlace(std::string place);
	void setAvaiablePlaces(int availablePlaces);
	void setOccupiedPlaces(int occupiedPlaces);
	void copy(IE* e);
	IE* clone();
	bool equals(IE* e);
	std::string toStringTXT();
	std::string toStringCSV();
};