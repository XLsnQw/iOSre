/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/Stocks-Structs.h>
#import <Stocks/XXUnknownSuperclass.h>

@class NSDate, NSTimeZone, NSString, StockGraphImageSet, NSArray;

@interface StockChartData : XXUnknownSuperclass {
	NSString *symbol;	// 4 = 0x4
	int chartInterval;	// 8 = 0x8
	XXStruct_cDPEpC *stockValues;	// 12 = 0xc
	unsigned stockValueCount;	// 16 = 0x10
	NSArray *interestingIndexes;	// 20 = 0x14
	NSDate *marketOpenDate;	// 24 = 0x18
	NSDate *marketCloseDate;	// 28 = 0x1c
	NSTimeZone *marketTimeZone;	// 32 = 0x20
	XXStruct_cDPEpC *minValue;	// 36 = 0x24
	XXStruct_cDPEpC *maxValue;	// 40 = 0x28
	double expirationTime;	// 44 = 0x2c
	BOOL isUnavailable;	// 52 = 0x34
	BOOL hasVolume;	// 53 = 0x35
	StockGraphImageSet *graphImageSets[2];	// 56 = 0x38
	NSArray *labelInfoArrays[4];	// 64 = 0x40
}
@property(copy, nonatomic) NSString *symbol;	// G=0xc0f1; S=0xd4f5; @synthesize
@property(assign, nonatomic) int chartInterval;	// G=0xc0d1; S=0xc0e1; @synthesize
@property(readonly, assign) XXStruct_cDPEpC *stockValues;	// G=0xc0c1; @synthesize
@property(readonly, assign) unsigned stockValueCount;	// G=0xc0b1; @synthesize
@property(retain, nonatomic) NSArray *interestingIndexes;	// G=0xc0a1; S=0xd519; @synthesize
@property(retain, nonatomic) NSDate *marketOpenDate;	// G=0xc091; S=0xd541; @synthesize
@property(retain, nonatomic) NSDate *marketCloseDate;	// G=0xc081; S=0xd569; @synthesize
@property(retain, nonatomic) NSTimeZone *marketTimeZone;	// G=0xc071; S=0xd591; @synthesize
@property(assign, nonatomic) XXStruct_cDPEpC *minValue;	// G=0xc051; S=0xc061; @synthesize
@property(assign, nonatomic) XXStruct_cDPEpC *maxValue;	// G=0xc031; S=0xc041; @synthesize
@property(assign, nonatomic) double expirationTime;	// G=0xc005; S=0xc01d; @synthesize
@property(assign, nonatomic) BOOL isUnavailable;	// G=0xbfe5; S=0xbff5; @synthesize
@property(assign, nonatomic) BOOL hasVolume;	// G=0xbfc5; S=0xbfd5; @synthesize
- (id)initWithSymbol:(id)symbol interval:(int)interval;	// 0xd499
- (XXStruct_cDPEpC *)allocateStockValuesWithCount:(unsigned)count;	// 0xd845
- (id)imageSetForStockGraphSize:(int)stockGraphSize;	// 0xbf99
- (void)setImageSet:(id)set forStockGraphSize:(int)stockGraphSize;	// 0xd7d9
- (void)clearAllImageSets;	// 0xd78d
- (id)labelInfoArrayForYAxis:(BOOL)yaxis detailedMode:(BOOL)mode;	// 0xbfad
- (void)setLabelInfoArray:(id)array forYAxis:(BOOL)yaxis detailedMode:(BOOL)mode;	// 0xd759
- (id)description;	// 0xd6a9
- (void)dealloc;	// 0xd5b9
// declared property getter: - (BOOL)hasVolume;	// 0xbfc5
// declared property setter: - (void)setHasVolume:(BOOL)volume;	// 0xbfd5
// declared property getter: - (BOOL)isUnavailable;	// 0xbfe5
// declared property setter: - (void)setIsUnavailable:(BOOL)unavailable;	// 0xbff5
// declared property getter: - (double)expirationTime;	// 0xc005
// declared property setter: - (void)setExpirationTime:(double)time;	// 0xc01d
// declared property getter: - (XXStruct_cDPEpC *)maxValue;	// 0xc031
// declared property setter: - (void)setMaxValue:(XXStruct_cDPEpC *)value;	// 0xc041
// declared property getter: - (XXStruct_cDPEpC *)minValue;	// 0xc051
// declared property setter: - (void)setMinValue:(XXStruct_cDPEpC *)value;	// 0xc061
// declared property getter: - (id)marketTimeZone;	// 0xc071
// declared property setter: - (void)setMarketTimeZone:(id)zone;	// 0xd591
// declared property getter: - (id)marketCloseDate;	// 0xc081
// declared property setter: - (void)setMarketCloseDate:(id)date;	// 0xd569
// declared property getter: - (id)marketOpenDate;	// 0xc091
// declared property setter: - (void)setMarketOpenDate:(id)date;	// 0xd541
// declared property getter: - (id)interestingIndexes;	// 0xc0a1
// declared property setter: - (void)setInterestingIndexes:(id)indexes;	// 0xd519
// declared property getter: - (unsigned)stockValueCount;	// 0xc0b1
// declared property getter: - (XXStruct_cDPEpC *)stockValues;	// 0xc0c1
// declared property getter: - (int)chartInterval;	// 0xc0d1
// declared property setter: - (void)setChartInterval:(int)interval;	// 0xc0e1
// declared property getter: - (id)symbol;	// 0xc0f1
// declared property setter: - (void)setSymbol:(id)symbol;	// 0xd4f5
@end
