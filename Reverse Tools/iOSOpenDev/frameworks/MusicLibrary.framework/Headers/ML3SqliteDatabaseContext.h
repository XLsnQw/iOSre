/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface ML3SqliteDatabaseContext : XXUnknownSuperclass {
@private
	sqlite3 **_dbStack;	// 4 = 0x4
	unsigned _dbStackCurrentIndex;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 12 = 0xc
	BOOL _isInTransaction;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x36ffd; S=0x3700d; @synthesize=_isInTransaction
@property(readonly, assign, nonatomic) sqlite3 *db;	// G=0x5f39; 
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x3700d
// declared property getter: - (BOOL)isInTransaction;	// 0x36ffd
- (void)popDB;	// 0x36f5d
- (void)pushDB:(sqlite3 *)db;	// 0x36f0d
// declared property getter: - (sqlite3 *)db;	// 0x5f39
- (sqlite3_stmt *)statementForSQL:(id)sql;	// 0xc1ad
- (BOOL)executeSQL:(id)sql;	// 0x36ed1
- (void)dealloc;	// 0x36e35
- (id)initWithDB:(sqlite3 *)db;	// 0x5e89
@end