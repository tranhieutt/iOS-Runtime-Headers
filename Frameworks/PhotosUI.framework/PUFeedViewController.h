/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSDictionary, NSIndexPath, NSMutableArray, NSMutableSet, NSString, PHCachingImageManager, PLCloudSharedAlbum, PLCloudSharedComment, PLDateRangeFormatter, PLManagedAlbumList, PLManagedAsset, PUAlbumStreamActivity, PUFeedAssetContainerList, PUFeedSectionInfosManager, PUFeedViewController, PUFeedViewControllerRestorableState, PUFeedViewControllerSpec, PUPhotoPinchGestureRecognizer, PUPhotosPickerViewController, PUScrollViewSpeedometer, UIBarButtonItem, UICollectionView, UITapGestureRecognizer, UIViewController, _UIContentUnavailableView;

@interface PUFeedViewController : UIViewController <PLCloudFeedNavigating, PLNavigableCloudFeedViewController, PUAlbumStreamActivityDelegate, PUFeedCollectionViewLayoutDelegate, PUFeedImageCellDelegate, PUFeedInvitationCellDelegate, PUFeedSectionInfosManagerDelegate, PUFeedTextCellDelegate, PUPhotoBrowserZoomTransitionDelegate, PUScrollViewSpeedometerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, _UISettingsKeyObserver> {
    PUAlbumStreamActivity *__albumStreamActivity;
    BOOL __appJustEnteredForeground;
    int __barsState;
    PUFeedAssetContainerList *__browsingAssetContainerList;
    PLManagedAsset *__browsingSelectedAsset;
    PLCloudSharedComment *__browsingSelectedComment;
    PHCachingImageManager *__cachingImageManager;
    BOOL __collectionViewScrolledToNewest;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    UICollectionView *__currentCollectionView;
    int __currentCollectionViewType;
    PLDateRangeFormatter *__dateRangeFormatter;
    _UIContentUnavailableView *__emptyPlaceholderView;
    PUFeedSectionInfosManager *__feedSectionInfosManager;
    BOOL __flowDirectionReversed;
    NSIndexPath *__indexPathForImageHiddenDuringZoomTransition;
    BOOL __interfaceBatchUpdateScheduled;
    UIBarButtonItem *__invitationsBarButtonItem;
    PUFeedViewController *__invitationsPopoverRootController;
    BOOL __invitationsPopoverShowPending;
    NSDictionary *__justLikedSections;
    NSMutableArray *__lastPreheatIndexPathInfoList;
    NSMutableArray *__lastPreheatIndexPathList;
    struct CGPoint { 
        float x; 
        float y; 
    } __lastPreheatedContentOffset;
    BOOL __libraryUpdatingPreviouslyExpired;
    int __loadedSectionInfosWindowSize;
    PUPhotoPinchGestureRecognizer *__pinchGestureRecognizer;
    UICollectionView *__pinchedCollectionView;
    float __preheatingWindowSize;
    PUPhotosPickerViewController *__presentedPhotosPickerViewController;
    PLCloudSharedAlbum *__pushedAlbum;
    UIViewController *__pushedViewController;
    PUFeedViewControllerRestorableState *__rotationLastRestorableState;
    NSMutableSet *__sectionInfosWithCommentChanges;
    PLManagedAlbumList *__sharedAlbumList;
    BOOL __shouldSuspendQualityImageFormats;
    int __sizeTransitionState;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UICollectionView *__targetCollectionView;
    int __targetCollectionViewType;
    struct CGSize { 
        float width; 
        float height; 
    } __targetSize;
    NSMutableSet *__updatedAssets;
    BOOL __userDidDismissPlaceholder;
    BOOL __viewDidAppear;
    BOOL __viewsInSyncWithModel;
    int _contentType;
    PUFeedViewControllerSpec *_spec;
}

@property(setter=_setAlbumStreamActivity:,retain) PUAlbumStreamActivity * _albumStreamActivity;
@property(setter=_setAppJustEnteredForeground:) BOOL _appJustEnteredForeground;
@property(setter=_setBarsState:) int _barsState;
@property(setter=_setBrowsingAssetContainerList:,retain) PUFeedAssetContainerList * _browsingAssetContainerList;
@property(setter=_setBrowsingSelectedAsset:,retain) PLManagedAsset * _browsingSelectedAsset;
@property(setter=_setBrowsingSelectedComment:,retain) PLCloudSharedComment * _browsingSelectedComment;
@property(readonly) PHCachingImageManager * _cachingImageManager;
@property(getter=_isCollectionViewScrolledToNewest,setter=_setCollectionViewScrolledToNewest:) BOOL _collectionViewScrolledToNewest;
@property(setter=_setCollectionViewSpeedometer:,retain) PUScrollViewSpeedometer * _collectionViewSpeedometer;
@property(setter=_setCurrentCollectionView:,retain) UICollectionView * _currentCollectionView;
@property(setter=_setCurrentCollectionViewType:) int _currentCollectionViewType;
@property(readonly) PLDateRangeFormatter * _dateRangeFormatter;
@property(setter=_setEmptyPlaceholderView:,retain) _UIContentUnavailableView * _emptyPlaceholderView;
@property(readonly) PUFeedSectionInfosManager * _feedSectionInfosManager;
@property(getter=_isFlowDirectionReversed,setter=_setFlowDirectionReversed:) BOOL _flowDirectionReversed;
@property(setter=_setIndexPathForImageHiddenDuringZoomTransition:,copy) NSIndexPath * _indexPathForImageHiddenDuringZoomTransition;
@property(getter=_isInterfaceBatchUpdateScheduled,setter=_setInterfaceBatchUpdateScheduled:) BOOL _interfaceBatchUpdateScheduled;
@property(setter=_setInvitationsBarButtonItem:,retain) UIBarButtonItem * _invitationsBarButtonItem;
@property(setter=_setInvitationsPopoverRootController:,retain) PUFeedViewController * _invitationsPopoverRootController;
@property(getter=_isInvitationsPopoverShowPending,setter=_setInvitationsPopoverShowPending:) BOOL _invitationsPopoverShowPending;
@property(setter=_setJustLikedSections:,retain) NSDictionary * _justLikedSections;
@property(retain) NSMutableArray * _lastPreheatIndexPathInfoList;
@property(retain) NSMutableArray * _lastPreheatIndexPathList;
@property(setter=_setLastPreheatedContentOffset:) struct CGPoint { float x1; float x2; } _lastPreheatedContentOffset;
@property(getter=_isLibraryUpdatingPreviouslyExpired,setter=_setLibraryUpdatingPreviouslyExpired:) BOOL _libraryUpdatingPreviouslyExpired;
@property(setter=_setLoadedSectionInfosWindowSize:) int _loadedSectionInfosWindowSize;
@property(setter=_setPinchGestureRecognizer:,retain) PUPhotoPinchGestureRecognizer * _pinchGestureRecognizer;
@property(setter=_setPinchedCollectionView:,retain) UICollectionView * _pinchedCollectionView;
@property(setter=_setPreheatingWindowSize:) float _preheatingWindowSize;
@property(setter=_setPresentedPhotosPickerViewController:,retain) PUPhotosPickerViewController * _presentedPhotosPickerViewController;
@property(setter=_setPushedAlbum:,retain) PLCloudSharedAlbum * _pushedAlbum;
@property(setter=_setPushedViewController:,retain) UIViewController * _pushedViewController;
@property(setter=_setRotationLastRestorableState:,retain) PUFeedViewControllerRestorableState * _rotationLastRestorableState;
@property(setter=_setSectionInfosWithCommentChanges:,retain) NSMutableSet * _sectionInfosWithCommentChanges;
@property(readonly) PLManagedAlbumList * _sharedAlbumList;
@property(setter=_setShouldSuspendQualityImageFormats:) BOOL _shouldSuspendQualityImageFormats;
@property(setter=_setSizeTransitionState:) int _sizeTransitionState;
@property(setter=_setTapGestureRecognizer:,retain) UITapGestureRecognizer * _tapGestureRecognizer;
@property(setter=_setTargetCollectionView:,retain) UICollectionView * _targetCollectionView;
@property(setter=_setTargetCollectionViewType:) int _targetCollectionViewType;
@property(setter=_setTargetSize:) struct CGSize { float x1; float x2; } _targetSize;
@property(setter=_setUpdatedAssets:,retain) NSMutableSet * _updatedAssets;
@property(setter=_setUserDidDismissPlaceholder:) BOOL _userDidDismissPlaceholder;
@property(setter=_setViewDidAppear:) BOOL _viewDidAppear;
@property(getter=_areViewsInSyncWithModel,setter=_setViewsInSyncWithModel:) BOOL _viewsInSyncWithModel;
@property(readonly) int contentType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) PUFeedViewControllerSpec * spec;
@property(readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_albumStreamActivity;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_appDidFinishEnteringForeground;
- (BOOL)_appJustEnteredForeground;
- (void)_appWillEnterForeground:(id)arg1;
- (BOOL)_areSharedStreamsEnabled;
- (BOOL)_areViewsInSyncWithModel;
- (id)_assetForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)_autoHideBarsNow;
- (int)_barsState;
- (BOOL)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)_browsingAssetContainerList;
- (id)_browsingSelectedAsset;
- (id)_browsingSelectedComment;
- (int)_browsingSelectedSection;
- (id)_cachingImageManager;
- (void)_cancelBarsAutoHide;
- (id)_collectionViewContainingView:(id)arg1;
- (id)_collectionViewSpeedometer;
- (int)_collectionViewTypeForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_collectionViews;
- (void)_configureCollectionView:(id)arg1;
- (void)_configureImageCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forThumbnailAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureInvitationCell:(id)arg1 forInvitationAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureSpeedometer:(id)arg1;
- (void)_configureStackCell:(id)arg1 forThumbnailsAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCaptionAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCommentAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (BOOL)_configureTextCell:(id)arg1 forFooterOfSection:(int)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfGroupID:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfSections:(id)arg2 inCollectionView:(id)arg3 animated:(BOOL)arg4;
- (void)_configureTextCell:(id)arg1 forLikesAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forTextAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_contextDidFinishRemoteMerge:(id)arg1;
- (void)_createNewStream;
- (id)_currentCollectionView;
- (int)_currentCollectionViewType;
- (id)_currentRestorableState;
- (id)_dateForSectionWithInfo:(id)arg1;
- (id)_dateRangeFormatter;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (int)_defaultMaximumScrollRegimeForQualityImageFormats;
- (void)_didTapSectionFooterFeedCell:(id)arg1;
- (void)_didTapSectionHeaderFeedCell:(id)arg1;
- (void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg1;
- (void)_dismissInvitationsPopoverIfNeeded;
- (id)_emptyPlaceholderView;
- (void)_ensureWindowOfLoadedSectionInfosIncludesSection:(int)arg1;
- (void)_enumerateCenterAssetsInRestorableState:(id)arg1 inCollectionView:(id)arg2 usingBlock:(id)arg3;
- (void)_expandWindowOfLoadedSectionInfos;
- (id)_feedSectionInfosManager;
- (void)_getDescriptionPhrase:(out id*)arg1 streamAffordanceLabel:(out id*)arg2 actionText:(out id*)arg3 buttonType:(int*)arg4 forSections:(id)arg5 inCollectionView:(id)arg6;
- (void)_getPhotoBrowserController:(out id*)arg1 transition:(out id*)arg2 withOptions:(int)arg3;
- (id)_groupIDForSectionWithInfo:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePlaceholderAction;
- (void)_handleTap:(id)arg1;
- (id)_indexPathForImageHiddenDuringZoomTransition;
- (id)_indexPathForItemWithAsset:(id)arg1 inCollectionView:(id)arg2;
- (void)_invalidateLastPreheatedContentOffset;
- (void)_invalidatePreheatedAssets;
- (id)_invitationsBarButtonItem;
- (void)_invitationsButtonAction:(id)arg1;
- (id)_invitationsPopoverRootController;
- (BOOL)_isAnySharedAlbumAvailable;
- (BOOL)_isCollectionViewEmpty:(id)arg1;
- (BOOL)_isCollectionViewScrolledToNewest;
- (BOOL)_isFlowDirectionReversed;
- (BOOL)_isInterfaceBatchUpdateScheduled;
- (BOOL)_isInvitationsPopoverShowPending;
- (BOOL)_isLibraryUpdatingPreviouslyExpired;
- (BOOL)_isLibraryUpdatingTimeoutExpired;
- (id)_justLikedSections;
- (id)_lastPreheatIndexPathInfoList;
- (id)_lastPreheatIndexPathList;
- (struct CGPoint { float x1; float x2; })_lastPreheatedContentOffset;
- (void)_libraryUpdatingDidExpire:(id)arg1;
- (id)_loadedSectionInfoForCloudFeedEntry:(id)arg1;
- (int)_loadedSectionInfosWindowSize;
- (void)_navigateToRevealAsset:(id)arg1 completion:(id)arg2;
- (BOOL)_navigateToRevealComment:(id)arg1 completion:(id)arg2;
- (void)_navigateToRevealPhoto:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(BOOL)arg3;
- (void)_navigateToSectionInfo:(id)arg1 atItemIndex:(int)arg2 completion:(id)arg3;
- (int)_numberOfSectionInfosForCollectionView:(id)arg1;
- (void)_openiCloudSettings;
- (void)_performInterfaceBatchUpdateNow;
- (id)_pinchGestureRecognizer;
- (id)_pinchedCollectionView;
- (int)_placeholderTypeForSizeTransitionState:(int)arg1;
- (void)_preheatSectionInfosAtIndexes:(id)arg1;
- (float)_preheatingWindowSize;
- (id)_presentedPhotosPickerViewController;
- (id)_pushedAlbum;
- (id)_pushedViewController;
- (void)_restoreScrollPositionInCollectionView:(id)arg1 fromRestorableState:(id)arg2;
- (id)_rotationLastRestorableState;
- (void)_scheduleBarsAutoHide;
- (void)_scheduleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg1 updatedAssets:(id)arg2;
- (id)_sectionInfoForSection:(int)arg1 collectionView:(id)arg2;
- (id)_sectionInfosForBrowsingFromSectionInfo:(id)arg1;
- (id)_sectionInfosForSections:(id)arg1 collectionView:(id)arg2;
- (id)_sectionInfosWithCommentChanges;
- (void)_setAlbumStreamActivity:(id)arg1;
- (void)_setAppJustEnteredForeground:(BOOL)arg1;
- (void)_setBarsState:(int)arg1;
- (void)_setBrowsingAssetContainerList:(id)arg1;
- (void)_setBrowsingSelectedAsset:(id)arg1;
- (void)_setBrowsingSelectedComment:(id)arg1;
- (void)_setCollectionViewScrolledToNewest:(BOOL)arg1;
- (void)_setCollectionViewSpeedometer:(id)arg1;
- (void)_setCurrentCollectionView:(id)arg1;
- (void)_setCurrentCollectionViewType:(int)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setFlowDirectionReversed:(BOOL)arg1;
- (void)_setIndexPathForImageHiddenDuringZoomTransition:(id)arg1;
- (void)_setInterfaceBatchUpdateScheduled:(BOOL)arg1;
- (void)_setInvitationsBarButtonItem:(id)arg1;
- (void)_setInvitationsPopoverRootController:(id)arg1;
- (void)_setInvitationsPopoverShowPending:(BOOL)arg1;
- (void)_setJustLikedSections:(id)arg1;
- (void)_setLastPreheatedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setLibraryUpdatingPreviouslyExpired:(BOOL)arg1;
- (void)_setLoadedSectionInfosWindowSize:(int)arg1;
- (void)_setPinchGestureRecognizer:(id)arg1;
- (void)_setPinchedCollectionView:(id)arg1;
- (void)_setPreheatingWindowSize:(float)arg1;
- (void)_setPresentedPhotosPickerViewController:(id)arg1;
- (void)_setPushedAlbum:(id)arg1;
- (void)_setPushedViewController:(id)arg1;
- (void)_setRotationLastRestorableState:(id)arg1;
- (void)_setSectionInfosWithCommentChanges:(id)arg1;
- (void)_setShouldSuspendQualityImageFormats:(BOOL)arg1;
- (void)_setSizeTransitionState:(int)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTargetCollectionView:(id)arg1;
- (void)_setTargetCollectionViewType:(int)arg1;
- (void)_setTargetSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setUpdatedAssets:(id)arg1;
- (void)_setUserCloudSharedLiked:(BOOL)arg1 forItemsInSections:(id)arg2 inCollectionView:(id)arg3;
- (void)_setUserDidDismissPlaceholder:(BOOL)arg1;
- (void)_setViewDidAppear:(BOOL)arg1;
- (void)_setViewsInSyncWithModel:(BOOL)arg1;
- (void)_setupBrowsingFromAsset:(id)arg1 orComment:(id)arg2;
- (BOOL)_setupBrowsingFromItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)_sharedAlbumList;
- (BOOL)_shouldHideHeaderForSectionWithType:(int)arg1;
- (BOOL)_shouldHideSectionInfo:(id)arg1 forCollectionView:(id)arg2;
- (BOOL)_shouldHideSectionWithType:(int)arg1 inCollectionViewType:(int)arg2;
- (BOOL)_shouldJoinSectionInfo:(id)arg1 withSectionInfo:(id)arg2 collectionViewType:(int)arg3;
- (BOOL)_shouldShowBarsForCollectionViewType:(int)arg1;
- (BOOL)_shouldShowTransitionUI;
- (BOOL)_shouldSuspendQualityImageFormats;
- (void)_showInvitationsPopoverAnimated:(BOOL)arg1;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(id)arg2;
- (int)_sizeTransitionState;
- (id)_suppressionContexts;
- (id)_tapGestureRecognizer;
- (id)_targetCollectionView;
- (int)_targetCollectionViewType;
- (struct CGSize { float x1; float x2; })_targetSize;
- (void)_tearDownBrowsing;
- (id)_textForDate:(id)arg1;
- (int)_typeForCollectionView:(id)arg1;
- (int)_typeForSectionInfo:(id)arg1;
- (void)_updateBrowsingAssetContainerList;
- (void)_updateCollectionViews;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (void)_updateInterfaceForDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)_updatePreheatedAssetsForCollectionView:(id)arg1;
- (void)_updateSectionsWithCaptionChangesFromUpdatedAssets:(id)arg1;
- (BOOL)_updateSpec;
- (void)_updateSubviewsOrdering;
- (void)_updateWindowOfLoadedSectionInfos;
- (id)_updatedAssets;
- (BOOL)_userDidDismissPlaceholder;
- (void)_userDidScrollFeed;
- (void)_userDidViewFeed;
- (BOOL)_viewDidAppear;
- (void)assetContainerListDidChange:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(int)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })arg5;
- (struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(int)arg3 andSection:(int)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })arg5;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(float*)arg3 minimumNumberOfTilesToOmit:(int*)arg4 forSection:(int)arg5;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(int)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(int)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(int)arg3 withSection:(int)arg4;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(int)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(int)arg3 andHeaderForGroupID:(id)arg4;
- (int)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(int)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)contentScrollView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (int)contentType;
- (void)dealloc;
- (void)didTapButtonInFeedTextCell:(id)arg1;
- (void)didTapCommentButtonInFeedImageCell:(id)arg1;
- (void)didTapFeedCell:(id)arg1;
- (void)didTapOverlayPlayButtonInFeedImageCell:(id)arg1;
- (void)feedInvitationCell:(id)arg1 didAccept:(BOOL)arg2;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSpec:(id)arg1 contentType:(int)arg2;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToNewestContentAnimated:(BOOL)arg1;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)ppt_currentCollectionView;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)pu_shouldActAsTabRootViewController;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(int)arg2 from:(int)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)set_lastPreheatIndexPathInfoList:(id)arg1;
- (void)set_lastPreheatIndexPathList:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldAutorotate;
- (id)spec;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(id)arg3;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;

@end
