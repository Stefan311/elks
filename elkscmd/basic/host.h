/* host dependent definitions */

#define DISK_FUNCTIONS			1	/* compile in DELETE/DIR/LIST/SAVE */
#define MATH_FUNCTIONS			1	/* compile in COS, SIN, TAN, etc */
#define MATH_DBL_PRECISION		0	/* 0=use 4-byte floats vs 8-byte double */

#if MATH_DBL_PRECISION
#define MATH_PRECISION	14
#define float double
#define COS(x)		cos(x)
#define SIN(x)		sin(x)
#define TAN(x)		tan(x)
#define ACOS(x)		acos(x)
#define ASIN(x)		asin(x)
#define ATAN(x)		atan(x)
#define EXP(x)		exp(x)
#define LOG(x)		log(x)
#define POW(x,y)	pow(x,y)
#else
#define MATH_PRECISION	6
#define COS(x)		cosf(x)
#define SIN(x)		sinf(x)
#define TAN(x)		tanf(x)
#define ACOS(x)		acosf(x)
#define ASIN(x)		asinf(x)
#define ATAN(x)		atanf(x)
#define EXP(x)		expf(x)
#define LOG(x)		logf(x)
#define POW(x,y)	powf(x,y)
#endif

#define PROGMEM
#define pgm_read_word(x)        (x)
#define pgm_read_byte_near(x)	(x)

void host_cls();
void host_showBuffer();
void host_moveCursor(int x, int y);
void host_outputString(char *str);
void host_outputChar(char c);
void host_outputLong(long num);
void host_outputFloat(float f);
char *host_floatToStr(float f, char *buf);
void host_newLine();
char *host_readLine();
char host_getKey();
int host_ESCPressed();
void host_outputFreeMem(unsigned int val);
void host_sleep(long ms);
void host_digitalWrite(int pin,int state);
int host_digitalRead(int pin);
int host_analogRead(int pin);
void host_pinMode(int pin, int mode);
float host_floor(float x);

#if DISK_FUNCTIONS
int host_directoryListing();
int host_saveProgramToFile(char *fileName, int autoexec);
int host_loadProgramFromFile(char *fileName);
int host_removeFile(char *fileName);
#endif