/*
 * File:   gps.h
 * Author: rt
 *
 * Created on September 24, 2016, 6:21 PM
 */

#ifndef GPS_H
#define	GPS_H

#ifdef	__cplusplus
extern "C" {
#endif


    struct GPS{
        float latitud;
        float longitud;
        int numero_de_satelites;
        float altitud;
    };
    
    

#ifdef	__cplusplus
}
#endif

#endif	/* GPS_H */
