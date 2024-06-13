/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>


@interface GMMIndex : XXUnknownSuperclass {
	int _tileXIndex;	// 4 = 0x4
	int _tileYIndex;	// 8 = 0x8
	BOOL _hasFace;	// 12 = 0xc
	int _face;	// 16 = 0x10
}
@property(assign, nonatomic) int face;	// G=0xd4c1; S=0xd165; @synthesize=_face
@property(assign, nonatomic) BOOL hasFace;	// G=0xd4a1; S=0xd4b1; @synthesize=_hasFace
@property(assign, nonatomic) int tileYIndex;	// G=0xd481; S=0xd491; @synthesize=_tileYIndex
@property(assign, nonatomic) int tileXIndex;	// G=0xd461; S=0xd471; @synthesize=_tileXIndex
// declared property getter: - (int)face;	// 0xd4c1
// declared property setter: - (void)setHasFace:(BOOL)face;	// 0xd4b1
// declared property getter: - (BOOL)hasFace;	// 0xd4a1
// declared property setter: - (void)setTileYIndex:(int)index;	// 0xd491
// declared property getter: - (int)tileYIndex;	// 0xd481
// declared property setter: - (void)setTileXIndex:(int)index;	// 0xd471
// declared property getter: - (int)tileXIndex;	// 0xd461
- (void)writeTo:(id)to;	// 0xd3f1
- (BOOL)readFrom:(id)from;	// 0xd2e1
- (id)dictionaryRepresentation;	// 0xd1f9
- (id)description;	// 0xd189
// declared property setter: - (void)setFace:(int)face;	// 0xd165
- (void)dealloc;	// 0xd139
@end
