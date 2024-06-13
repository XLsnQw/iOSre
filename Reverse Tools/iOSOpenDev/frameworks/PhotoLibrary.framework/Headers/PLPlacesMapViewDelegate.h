/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/MKMapViewDelegate.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLPlacesMapViewDelegate.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>

@class UIButton, PLPlaces, NSMutableArray, PLAnnotationPen;
@protocol PlacesMapViewDelegateDetailsDelegate;

@interface PLPlacesMapViewDelegate : XXUnknownSuperclass <MKMapViewDelegate> {
	BOOL _didFirstAdjustment;	// 4 = 0x4
	UIButton *_moreDetailsButton;	// 8 = 0x8
	PLPlaces *_places;	// 12 = 0xc
	NSMutableArray *_delegatePlaces;	// 16 = 0x10
	unsigned _activeDeletes;	// 20 = 0x14
	unsigned _activeSplits;	// 24 = 0x18
	PLAnnotationPen *_pendingAdds;	// 28 = 0x1c
	XXStruct_SRdqoD _previousRegion;	// 32 = 0x20
	id<PlacesMapViewDelegateDetailsDelegate> _detailsDelegate;	// 64 = 0x40
}
- (void)_flushAnnotation:(id)annotation fromMap:(id)map;	// 0x6a31
- (void)_setupMapViewCenteredOnAllPlaces:(id)places;	// 0x4349
- (void)_updateVisibleAnnotationsAfterUpdatingMapView:(id)view;	// 0x5cf9
- (void)_updatePlaces:(id)places inMapView:(id)mapView;	// 0x6eb5
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x6c3d
- (void)mapView:(id)view didAddAnnotationViews:(id)views;	// 0x6249
- (void)_updateAnnotationsInMapView:(id)mapView;	// 0x4dbd
- (void)mapView:(id)view annotationView:(id)view2 calloutAccessoryControlTapped:(id)tapped;	// 0x2fb69
- (id)_borderedPosterImageFromImage:(id)image withSize:(CGSize)size;	// 0x6181
- (id)mapView:(id)view viewForAnnotation:(id)annotation;	// 0x5e8d
- (BOOL)_didMapViewChangeZoomLevel:(id)level;	// 0x5889
- (void)mapView:(id)view regionDidChangeAnimated:(BOOL)region;	// 0x4139
- (void)mapViewWillStartLoadingMap:(id)mapView;	// 0x2fb39
- (void)updateMapView:(id)view WithAddedAssets:(id)addedAssets deletedAssets:(id)assets updatedAssets:(id)assets4;	// 0xa64cd
- (void)fullResetOfMapView:(id)mapView;	// 0xa648d
- (void)setDetailsDelegate:(id)delegate;	// 0x4121
- (void)dealloc;	// 0xa6405
- (id)initWithPlaces:(id)places;	// 0x3fe1
@end

@interface PLPlacesMapViewDelegate (Private)
- (BOOL)_displaysAlbumPosterOnLeft;	// 0x616d
- (BOOL)_displayMoreDetailsButton;	// 0x6169
- (id)_createAnnotationViewWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;	// 0x6111
@end
