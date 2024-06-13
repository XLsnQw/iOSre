/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface CPPair : XXUnknownSuperclass {
@private
	NSObject *m_first;	// 4 = 0x4
	BOOL m_firstIsWrapped;	// 8 = 0x8
	NSObject *m_second;	// 12 = 0xc
	BOOL m_secondIsWrapped;	// 16 = 0x10
}
@property(readonly, retain) NSObject *first;	// G=0x2cd171; converted property
@property(readonly, retain) NSObject *second;	// G=0x2cd139; converted property
+ (id)pairWithFirst:(id)first andSecond:(id)second;	// 0x2cd06d
+ (id)pairWithFirstPointer:(id)firstPointer andSecond:(id)second;	// 0x2cd02d
+ (id)pairWithFirst:(id)first andSecondPointer:(id)pointer;	// 0x2ccfe9
+ (id)pairWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;	// 0x2ccf8d
- (id)initWithFirst:(id)first andSecond:(id)second;	// 0x2ccf0d
- (id)initWithFirstPointer:(id)firstPointer andSecond:(id)second;	// 0x2cd3a9
- (id)initWithFirst:(id)first andSecondPointer:(id)pointer;	// 0x2cd351
- (id)initWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;	// 0x2cd2d9
- (void)dealloc;	// 0x2cd279
- (BOOL)isEqual:(id)equal;	// 0x2cd1e9
- (unsigned)hash;	// 0x2cd1a9
// converted property getter: - (id)first;	// 0x2cd171
// converted property getter: - (id)second;	// 0x2cd139
- (id)description;	// 0x2cd0b9
@end
