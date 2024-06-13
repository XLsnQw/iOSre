/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import <SyncedDefaults/SyncedDefaults-Structs.h>
#import <SyncedDefaults/SYDRemotePreferencesSource.h>
#import <SyncedDefaults/XXUnknownSuperclass.h>

@class NSMutableDictionary, SYDClient;

@interface SYDRemotePreferencesSource : XXUnknownSuperclass {
@private
	int _generationCount;	// 4 = 0x4
	int _lastGenerationFromDisk;	// 8 = 0x8
	CFStringRef preferenceID;	// 12 = 0xc
	CFURLRef urlOnDisk;	// 16 = 0x10
	CFDictionaryRef cache;	// 20 = 0x14
	long long storageChangeCount;	// 24 = 0x18
	long long initialSyncChangeCount;	// 32 = 0x20
	unsigned char isInitialSync;	// 40 = 0x28
	CFSetRef dirtyKeys;	// 44 = 0x2c
	SYDClient *client;	// 48 = 0x30
	CFDictionaryRef configurationDictionary;	// 52 = 0x34
	NSMutableDictionary *externalChanges;	// 56 = 0x38
	id registrationBlock;	// 60 = 0x3c
}
@property(readonly, assign) unsigned char isInitialSync;	// G=0x159d; converted property
+ (id)SYDRemotePreferencesSourceDidChangeNotification;	// 0x15bd
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;	// 0x15c9
- (void)_storeConfiguration:(CFDictionaryRef)configuration;	// 0x15d5
- (CFDictionaryRef)copyConfigurationDictionary;	// 0x16a5
- (long)configurationValueForKey:(CFStringRef)key;	// 0x1e55
- (long)maximumKeyCount;	// 0x1829
- (long)maximumKeyLength;	// 0x1845
- (long)maximumDataLengthPerKey;	// 0x1861
- (long)maximumTotalDataLength;	// 0x187d
- (id)initWithApplicationID:(CFStringRef)applicationID shared:(BOOL)shared;	// 0x30f1
- (void)dealloc;	// 0x3005
- (void)finalize;	// 0x1f79
- (void *)getValueForKey:(CFStringRef)key;	// 0x2fb9
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x2dfd
- (void)_cachePlistFromDisk;	// 0x2801
- (void)scheduleRemoteSynchronization;	// 0x279d
- (unsigned char)synchronize;	// 0x19e5
- (unsigned char)synchronizeForced:(unsigned char)forced;	// 0x2455
// converted property getter: - (unsigned char)isInitialSync;	// 0x159d
- (unsigned char)hasExternalChanges;	// 0x19fd
- (id)copyExternalChangesWithChangeCount:(long long *)changeCount;	// 0x2271
- (void)discardExternalChangesForChangeCount:(long long)changeCount;	// 0x1b19
- (CFArrayRef)copyKeyList;	// 0x21f1
- (CFDictionaryRef)copyDictionary;	// 0x20bd
- (long)generationCount;	// 0x15ad
- (void)registerForSynchronizedDefaults;	// 0x2035
- (void)unregisterForSynchronizedDefaults;	// 0x1b91
- (void)updateConfiguration;	// 0x1bd9
@end

@interface SYDRemotePreferencesSource (SYDManagement)
+ (void)resetAllApplicationsWithCompletionHandler:(id)completionHandler;	// 0x1c91
+ (void)noteAccountChanges:(id)changes;	// 0x3309
@end
