/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

#import <SportsTrainer/XXUnknownSuperclass.h>


@interface STWorkoutController : XXUnknownSuperclass {
	int _workoutState;	// 4 = 0x4
	int _workoutType;	// 8 = 0x8
	int _calibrationType;	// 12 = 0xc
	int _workoutPreset;	// 16 = 0x10
	float _customWorkoutDuration;	// 20 = 0x14
	float _customWorkoutDistance;	// 24 = 0x18
	int _customWorkoutCalories;	// 28 = 0x1c
	double _elapsedWorkoutTime;	// 32 = 0x20
	int _distanceUnits;	// 40 = 0x28
	BOOL _skipNextEmpedSearch;	// 44 = 0x2c
}
+ (id)shortDescriptionForWorkoutType:(int)workoutType preset:(int)preset;	// 0x1d81
+ (id)stringQuantificationForWorkoutType:(int)workoutType preset:(int)preset;	// 0x1791
@end
