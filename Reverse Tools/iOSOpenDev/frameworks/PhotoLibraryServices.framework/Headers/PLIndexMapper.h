/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/XXUnknownSuperclass.h>

@protocol PLIndexMapperDataSource;

@interface PLIndexMapper : XXUnknownSuperclass {
@private
	id<PLIndexMapperDataSource> _dataSource;	// 4 = 0x4
}
- (BOOL)applyContainerChangeNotification:(id)notification changeTypes:(int)types toFilteredIndexes:(id)filteredIndexes;	// 0x61859
- (unsigned)backingIndexForIndex:(unsigned)index;	// 0x61671
- (id)backingIndexesForIndexes:(id)indexes;	// 0x612e5
- (unsigned)indexForBackingIndex:(unsigned)backingIndex;	// 0x6129d
- (id)indexesForBackingIndexes:(id)backingIndexes;	// 0x61175
- (id)initWithDataSource:(id)dataSource;	// 0x610b5
@end
