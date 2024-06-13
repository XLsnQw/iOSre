/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/CHBDataLabel.h>


__attribute__((visibility("hidden")))
@interface CHBDataLabel : XXUnknownSuperclass {
}
+ (id)chdDataLabelFromXlChartSeriesFormat:(const XlChartSeriesFormat *)xlChartSeriesFormat state:(id)state;	// 0x16f855
+ (id)chdDataLabelFromXlChartCustomLabelText:(XlChartCustomLabelText *)xlChartCustomLabelText state:(id)state;	// 0x1eaf1d
@end

@interface CHBDataLabel (Private)
+ (int)chdLabelPositionEnumFromXlLabelPosition:(int)xlLabelPosition;	// 0x1eb115
+ (int)xlLabelPositionEnumFromCHDDataLabelPosition:(int)chddataLabelPosition;	// 0x25e085
@end
