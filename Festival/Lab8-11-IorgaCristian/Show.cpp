#include "Show.h"
#include "IE.h"
using namespace std;

Show::Show() {
	this->date = "";
	this->place = "";
	this->availablePlaces = 0;
	this->occupiedPlaces = 0;
}
Show::Show(string date, string place, int availablePlaces, int occupiedPlaces) {
	this->date = date;
	this->place = place;
	this->availablePlaces = availablePlaces;
	this->occupiedPlaces = occupiedPlaces;
}
Show::Show(const Show& s) {
	this->date = s.date;
	this->place = s.place;
	this->availablePlaces = s.availablePlaces;
	this->occupiedPlaces = s.occupiedPlaces;
}
Show::~Show() {
}
Show& Show::operator=(const Show& s) {
	this->date = s.date;
	this->place = s.place;
	this->availablePlaces = s.availablePlaces;
	this->occupiedPlaces = s.occupiedPlaces;
	return *this;
}
bool Show::operator==(const Show& s) const {
	return (this->date == s.date) && (this->place == s.place) && (this->availablePlaces == s.availablePlaces) &&
		(this->occupiedPlaces == s.occupiedPlaces);
}
string Show::getDate() {
	return this->date;
}
string Show::getPlace() {
	return this->place;
}
int Show::getAvailablePlaces() {
	return this->availablePlaces;
}
int Show::getOccupiedPlaces() {
	return this->occupiedPlaces;
}
void Show::setDate(string date) {
	this->date = date;
}
void Show::setPlace(string place) {
	this->place = place;
}
void Show::setAvaiablePlaces(int availablePlaces) {
	this->availablePlaces = availablePlaces;
}
void Show::setOccupiedPlaces(int occupiedPlaces) {
	this->occupiedPlaces = occupiedPlaces;
}
void Show::copy(IE* e) {
	Show* s = (Show*)e;
	this->date = s->date;
	this->place = s->place;
	this->availablePlaces = s->availablePlaces;
	this->occupiedPlaces = s->occupiedPlaces;
}
IE* Show::clone() {
	return new Show(this->date, this->place, this->availablePlaces, this->occupiedPlaces);
}
bool Show::equals(IE* e) {
	return this->date == ((Show*)e)->date && this->place == ((Show*)e)->place && this->availablePlaces == ((Show*)e)->availablePlaces && this->occupiedPlaces == ((Show*)e)->occupiedPlaces;
}
string Show::toStringTXT() {
	string toShow;
	toShow = this->date + ',' + this->place + ',' + to_string(this->availablePlaces) + ',' + to_string(this->occupiedPlaces);
	return toShow;
}
string Show::toStringCSV() {
	string toShow;
	toShow = this->date + ' ' + this->place + ' ' + to_string(this->availablePlaces) + ' ' + to_string(this->occupiedPlaces);
	return toShow;
}
