/* @author Adam Claassen, 2014 <claassenadam@gmail.com>
* 
*/

#include <Serial.h>


char[] start_sentance = "$GP";
const char start = '$';
char[] gps_fix_data = "GGA";
char[] lat_lon_time = "GLL";
char[] active_sats = "GSA";
char[] sats_in_view = "GSV";
char[] true_heading = "HDT";
char[] date_time = "ZDA";


char[] packet;
HardwareSerial serial;

float time;
float lat;
float lon;
float heading;
int stats;
int day;
int month;
int year;
int tz_offset;
bool in_message = false;
String sentence;


void Parser::Parser(SerialPort _serial){
	/*
	* pass this the correct Serial object as &Serial or &Serial1 (for mega)
	*/
	serial = *_serial
}

void Parser::update(){
	char[] buffer;
	while(*serial.avalible()>0){
		buffer += *serial.read();
	}
	String strbuf = String(buffer);
	int index = strbuf.indexOf(start);

	if(in_message){
		sentence += strbuf.substring(0, index);
	}else{
		sentence = strbuf.substring(index, strbuf.indexOf(start, index+1))
	}

	if(sentence.equals(start_sentance+gps_fix_data)){

	}
	else if(sentence.equals())
	


}

float Parser::time(){
	/*
	* UTC time hhmmss.ss
	*/

}

float Parser::lat(){

}

float Parser::lon(){

}

int Parser::sats(){

}

float Parser::heading(){

}
