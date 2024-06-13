/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */




@protocol AVAudioPlayerDelegate <NSObject>
@optional
- (void)audioPlayerEndInterruption:(id)interruption;
- (void)audioPlayerEndInterruption:(id)interruption withFlags:(unsigned)flags;
- (void)audioPlayerBeginInterruption:(id)interruption;
- (void)audioPlayerDecodeErrorDidOccur:(id)audioPlayerDecodeError error:(id)error;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
@end

