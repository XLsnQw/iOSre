/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <Weather/XXUnknownSuperclass.h>

@class NSString;

@interface HourlyForecast : XXUnknownSuperclass {
	NSString *_time24Hour;	// 4 = 0x4
	NSString *_temperature;	// 8 = 0x8
	int _conditionCode;	// 12 = 0xc
	float _percentPrecipitation;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *time24Hour;	// G=0x1c95; S=0x2f35; @synthesize=_time24Hour
@property(copy, nonatomic) NSString *temperature;	// G=0x1c85; S=0x2f59; @synthesize=_temperature
@property(assign, nonatomic) int conditionCode;	// G=0x1c65; S=0x1c75; @synthesize=_conditionCode
@property(assign, nonatomic) float percentPrecipitation;	// G=0x1c45; S=0x1c55; @synthesize=_percentPrecipitation
- (void)dealloc;	// 0x2ee1
- (id)description;	// 0x2091
// declared property getter: - (float)percentPrecipitation;	// 0x1c45
// declared property setter: - (void)setPercentPrecipitation:(float)precipitation;	// 0x1c55
// declared property getter: - (int)conditionCode;	// 0x1c65
// declared property setter: - (void)setConditionCode:(int)code;	// 0x1c75
// declared property getter: - (id)temperature;	// 0x1c85
// declared property setter: - (void)setTemperature:(id)temperature;	// 0x2f59
// declared property getter: - (id)time24Hour;	// 0x1c95
// declared property setter: - (void)setTime24Hour:(id)hour;	// 0x2f35
@end
