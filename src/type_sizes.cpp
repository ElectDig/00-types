/*
 *  Project 00-types
 *
 *  Austral - Electronica Digital - 2023 - EAM 
 *
 * 	type_sizes.cpp
 * 		Shows normal type sizes in C
 *
 *  For running in ESP32
 */

#include <Arduino.h>

/*
 * 	System includes
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * 	Macros
 */

#define	print_size(type)												\
do																		\
	printf( "%2zu byte%s -> %s\n", 										\
			sizeof(type), sizeof(type) == 1 ? " ": "s", #type );		\
while(0)

/*
 * 	main
 * 		Shows C type sizes
 */

void
setup( void )
{
	printf( "*** Type sizes in C...\n" );
	printf( "--- Integer types...\n" );
	print_size( char );
	print_size( short int );
	print_size( int );
	print_size( long int );
	print_size( long long int );
	print_size( size_t );
	print_size( void * );
	printf( "--- Float types...\n" );
	print_size( float );
	print_size( double );
	print_size( long double );
}

void
loop( void )
{
}





