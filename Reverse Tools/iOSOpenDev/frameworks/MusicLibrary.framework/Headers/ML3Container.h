/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Entity.h>
#import <MusicLibrary/MusicLibrary-Structs.h>

@class NSArray, NSString, ML3Predicate;

@interface ML3Container : ML3Entity {
}
@property(readonly, assign) long long limitValue;	// G=0x31725; 
@property(readonly, assign) NSArray *limitOrderingProperties;	// G=0x31681; 
@property(readonly, assign) NSArray *limitOrderingDirectionality;	// G=0x316d1; 
@property(readonly, assign) NSString *limitingProperty;	// G=0x31621; 
@property(readonly, assign, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;	// G=0x315c9; 
@property(readonly, assign, getter=isLimitedByCount) BOOL limitedByCount;	// G=0x3151d; 
@property(readonly, assign) ML3Predicate *dynamicPredicate;	// G=0x314c9; 
@property(readonly, assign) ML3Predicate *staticPredicate;	// G=0x31475; 
+ (void)populateDynamicContainersWithTrackPersistentID:(id)trackPersistentID inLibrary:(id)library;	// 0x3204d
+ (void)populateDynamicContainersInLibrary:(id)library;	// 0x32039
+ (void)populateStaticItemsOfDynamicContainersOnHandle:(sqlite3 *)dynamicContainersOnHandle;	// 0x31b6d
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)smartPlaylistsPIDs inLibrary:(id)library;	// 0x31221
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)smartPlaylistsPIDs;	// 0x30f7d
+ (BOOL)createMissingBuiltInSmartPlaylists:(id)smartPlaylists;	// 0x308fd
+ (void)_insertNewSmartPlaylist:(id)playlist criteriaBlob:(id)blob limited:(BOOL)limited trackOrder:(unsigned long)order distinguishedKind:(int)kind inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x305dd
+ (id)predicateForCriteriaList:(OpaqueSearchCriteriaList *)criteriaList dynamicCriteria:(BOOL)criteria;	// 0x3038d
+ (BOOL)hasCriterionInCriteriaList:(OpaqueSearchCriteriaList *)criteriaList forITDBTrackField:(int)itdbtrackField;	// 0x302e1
+ (void)populateSortOrdersOfPropertyValues:(id)propertyValues inLibrary:(id)library cachedNameOrders:(id)orders;	// 0xe281
+ (BOOL)smartCriteriaCanBeEvaluated:(id)evaluated;	// 0x2fcb5
+ (id)nextFilepathForPlaylistType:(int)playlistType withPersistentID:(unsigned long long)persistentID inLibrary:(id)library;	// 0xdc25
+ (id)persistentIDColumnForTable:(id)table;	// 0xfe35
+ (id)extraTablesToDelete;	// 0x2fca5
+ (id)foreignColumnForProperty:(id)property;	// 0x2fc89
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x2fc6d
+ (id)sectionPropertyForProperty:(id)property;	// 0x2fc51
+ (id)joinClauseForProperty:(id)property;	// 0x2fa1
+ (id)defaultOrderingProperties;	// 0xbc25
+ (int)revisionTrackingCode;	// 0x10009
+ (id)databaseTable;	// 0x3091
+ (void)initialize;	// 0x1f59
- (BOOL)setTracksWithSwappedPersistentIDData:(id)swappedPersistentIDData;	// 0x33ee1
- (BOOL)setTracksWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count notify:(BOOL)notify;	// 0x33b9d
- (BOOL)setTracksWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count;	// 0x33b79
- (BOOL)moveTrackFromIndex:(unsigned)index toIndex:(unsigned)index2;	// 0x3376d
- (BOOL)addTracksWithPersistentIDs:(long long *)persistentIDs count:(unsigned)count notify:(BOOL)notify;	// 0x333d1
- (BOOL)addTracksWithPersistentIDs:(long long *)persistentIDs count:(unsigned)count;	// 0x333ad
- (BOOL)addTrackWithPersistentID:(long long)persistentID;	// 0x33381
- (BOOL)removeTracksWithPersistentIDs:(const long long *)persistentIDs atFilteredIndexes:(id)filteredIndexes;	// 0x33241
- (BOOL)removeTracksAtIndexes:(id)indexes;	// 0x33221
- (BOOL)removeTracksAtIndexes:(id)indexes notify:(BOOL)notify;	// 0x331fd
- (BOOL)setContainsTrack:(BOOL)track forPersistentID:(long long)persistentID notify:(BOOL)notify;	// 0x32f2d
- (BOOL)removeTracksAtIndexes:(id)indexes notify:(BOOL)notify indexesTransformBlock:(id)block;	// 0x32ac1
- (void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)block;	// 0x32925
- (BOOL)removeAllTracks;	// 0x32901
- (BOOL)_setSwappedItemPersistentIDs:(const long long *)ids size:(int)size;	// 0x328dd
- (BOOL)_setSwappedItemPersistentIDs:(const long long *)ids size:(int)size notify:(BOOL)notify;	// 0x32649
- (void)bindPopulateStatement:(sqlite3_stmt *)statement withStaticTrackPersistentID:(id)staticTrackPersistentID;	// 0x31b0d
- (id)populateSQLWithStaticTrackPersistentID:(id)staticTrackPersistentID;	// 0x31955
- (void)getDisplayOrderingProperties:(id *)properties isDescending:(BOOL *)descending;	// 0x317b9
// declared property getter: - (long long)limitValue;	// 0x31725
// declared property getter: - (id)limitOrderingDirectionality;	// 0x316d1
// declared property getter: - (id)limitOrderingProperties;	// 0x31681
// declared property getter: - (id)limitingProperty;	// 0x31621
- (BOOL)isCustomContainerOrderingDescending;	// 0x315f5
// declared property getter: - (BOOL)isLimitOrderingDescending;	// 0x315c9
- (BOOL)_isDescendingForTrackOrderProperty:(id)trackOrderProperty reverseOrderProperty:(id)property;	// 0x31559
// declared property getter: - (BOOL)isLimitedByCount;	// 0x3151d
// declared property getter: - (id)dynamicPredicate;	// 0x314c9
// declared property getter: - (id)staticPredicate;	// 0x31475
- (OpaqueSearchCriteriaList *)importedCriteriaList;	// 0x313fd
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x2febd
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0xd6e5
@end
