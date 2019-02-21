#ifndef SIMPLETIMERMAH_H
#define SIMPLETIMERMAH_H

class SimpleTimer { 
    int start;
    int current;
    int timeOut;
  public:
    SimpleTimer(int t);
    int elapsed();// return the elapsed time.
    bool timedOut();// function to check whether the timer has timed out. If it has, reports true and resets the timer
    void reset(); // reset the timer.  
};

SimpleTimer::SimpleTimer(int t){
  timeOut=t;
  start=millis();
  current=start;
}

int SimpleTimer::elapsed(){
  current=millis();
  return current-start;
}

bool SimpleTimer::timedOut(){
  if(elapsed() >= timeOut){
    reset();
    return true;
  }
	else{
    return false;
  }
}

void SimpleTimer::reset(){
  start=millis();
  current=start;
}

#endif SIMPLETIMERMAH_H
