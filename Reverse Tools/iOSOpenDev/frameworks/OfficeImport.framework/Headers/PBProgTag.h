/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PBProgTag.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/OfficeImport-Structs.h>


__attribute__((visibility("hidden")))
@interface PBProgTag : XXUnknownSuperclass {
}
+ (const PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(const unsigned short *)progTagName;	// 0x21cddd
+ (void)readBulletStylesFromMainMaster:(id)mainMaster state:(id)state;	// 0xbfb5d
+ (void)readDocumentList:(id)list state:(id)state;	// 0xbcd29
+ (void)readClientData:(id)data state:(id)state;	// 0x7ddd9
+ (void)readBulletImagesFromContainerParent:(id)containerParent state:(id)state;	// 0x14ee35
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x7de6d
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0xbce61
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x21ce25
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x21ce79
@end

@interface PBProgTag (Private)
+ (void)readBulletStylesFromDocumentList:(id)documentList state:(id)state;	// 0xbcd89
+ (void)readBulletImagesFromDocumentList:(id)documentList state:(id)state;	// 0xbcfd9
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)documentList state:(id)state;	// 0xbd0f5
+ (id)readBulletStyleFromClientData:(id)clientData;	// 0x7de2d
+ (void)readMacCharStylesFromDocumentList:(id)documentList state:(id)state;	// 0xbd01d
+ (id)readMacCharStyleFromClientData:(id)clientData;	// 0x7dead
@end
