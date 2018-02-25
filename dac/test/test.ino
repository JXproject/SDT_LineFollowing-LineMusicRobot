
// GLOBAL

// add some math library for arduino

byte CC[256];




// INSIDE YOUR SETUP FUNCTION

// Create your stored area of discretized sine values
for ( int i = 0; i < 256; i++)
{
    CC[i] = sine(2*i*PI/256); 
}

i = 0;

// now you have an array of sine values with 256 (2^8) intervals




// INSIDE YOUR LOOP

digitalWrite (LOWESTPIN, CC[i]&B00000001);
digitalWrite (SECONDPIN, CC[i]&B00000010);
digitalWrite (THIRDPIN, CC[i]&B00000100);
.
.
.
digitalWrite (LASTPIN, CC[i]&B10000000);

i = i+1;
delay(1);

// you've delayed 1ms, thus should get a roughly 1000Hz signal
