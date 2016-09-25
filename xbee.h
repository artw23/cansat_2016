/*
 * File:   xbee.h
 * Author: rt
 *
 * Created on September 24, 2016, 6:57 PM
 */

#ifndef XBEE_H
#define	XBEE_H

#ifdef	__cplusplus
extern "C" {
#endif


  void initUART(int baud_rate);

  void sendChar(char ch);

  void sendString(const char *str, int newLine);


#ifdef	__cplusplus
}
#endif

#endif	/* XBEE_H */
