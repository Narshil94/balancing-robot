#include "Arduino.h"
#include "M5Stack.h"


enum SelectionMode
{
	Kp = 0,
	Ki,
	Kd,
	Setpoint
};

class Selector
{
public:
	Selector();
	~Selector() = default;

	void changeSelection();
	String getSelectionString();
	SelectionMode getSelection();
	void unlockSelection();
	
private:
	SelectionMode selection_mode = Kp;
	bool selection_lock = false;


};