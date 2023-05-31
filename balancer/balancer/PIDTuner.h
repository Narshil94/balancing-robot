#ifndef PIDTUNER_
#define PIDTUNER_

#include <Arduino.h>
#include <M5Stack.h>
#include <PID_v1.h>
#include "datatypes.h"

class PIDTuner
{
public:
	PIDTuner::PIDTuner(PID& pid, PID_DATA& pid_data);
	void PIDTuner::handle_buttons();

private:
	PID& pid_;
	PID_DATA& pid_data_;
};

#endif // !PIDTUNER_