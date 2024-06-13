/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <ToneLibrary/ToneLibrary-Structs.h>
#import <ToneLibrary/XXUnknownSuperclass.h>

@class TLToneTableController, UITableView;

@interface TLTonePicker : XXUnknownSuperclass {
@private
	UITableView *_table;	// 48 = 0x30
	TLToneTableController *_tableController;	// 52 = 0x34
	id _delegate;	// 56 = 0x38
}
@property(assign, nonatomic) id delegate;	// G=0x1cb5; S=0x1731; @synthesize=_delegate
@property(retain) id selectedVibrationIdentifier;	// G=0x1a9d; S=0x1abd; converted property
@property(retain) id selectedRingtoneIdentifier;	// G=0x1985; S=0x1949; converted property
+ (id)tonePickerWithFrame:(CGRect)frame;	// 0x13fd
+ (id)texttonePickerWithFrame:(CGRect)frame;	// 0x1391
+ (id)ringtonePickerWithFrame:(CGRect)frame;	// 0x1329
// declared property getter: - (id)delegate;	// 0x1cb5
- (void)ringtoneTableController:(id)controller willPlayRingtoneWithIdentifier:(id)identifier;	// 0x1c5d
- (void)ringtoneTableController:(id)controller selectedRingtoneWithIdentifier:(id)identifier;	// 0x1c05
- (float)contentHeight;	// 0x1bb5
- (void)finishedWithPicker;	// 0x1b95
- (void)stopPlayingWithFadeOut:(BOOL)fadeOut;	// 0x1b75
- (void)stopPlaying;	// 0x1b55
- (void)displayScrollerIndicators;	// 0x1b35
- (void)didMoveToWindow;	// 0x1add
// converted property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x1abd
// converted property getter: - (id)selectedVibrationIdentifier;	// 0x1a9d
- (void)setShowsNoVibrationSelected:(BOOL)selected;	// 0x1a7d
- (void)setShowsNoneVibration:(BOOL)vibration;	// 0x1a5d
- (void)setShowsUserGeneratedVibrations:(BOOL)vibrations;	// 0x1a3d
- (void)setShowsDefaultVibration:(BOOL)vibration;	// 0x1a1d
- (void)setShowsVibrationsAlongsideTones:(BOOL)tones;	// 0x19e1
- (void)setShowsVibrations:(BOOL)vibrations;	// 0x19a5
// converted property getter: - (id)selectedRingtoneIdentifier;	// 0x1985
// converted property setter: - (void)setSelectedRingtoneIdentifier:(id)identifier;	// 0x1949
- (void)ringtoneManagerContentsChanged:(id)changed;	// 0x18f9
- (void)buildUIWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x1775
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1731
- (void)setShowsNothingSelected:(BOOL)selected;	// 0x16f5
- (void)setNoneString:(id)string;	// 0x16b9
- (void)setDefaultIdentifier:(id)identifier;	// 0x167d
- (void)setNoneAtTop:(BOOL)top;	// 0x1641
- (void)setShowsNone:(BOOL)none;	// 0x1621
- (void)setShowsDefault:(BOOL)aDefault;	// 0x15e5
- (void)setShowsRingtonesStore:(BOOL)store;	// 0x15a9
- (void)setAVController:(id)controller;	// 0x1589
- (void)_reloadData;	// 0x1521
- (void)dealloc;	// 0x1469
- (id)initWithFrame:(CGRect)frame avController:(id)controller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x12cd
- (id)initWithFrame:(CGRect)frame avController:(id)controller;	// 0x1299
- (id)initWithFrame:(CGRect)frame;	// 0x126d
@end
