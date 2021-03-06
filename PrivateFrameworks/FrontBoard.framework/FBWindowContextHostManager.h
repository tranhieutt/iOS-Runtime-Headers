/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class <FBWindowContextHostManagerDelegate>, FBOrderedRequesters, FBScene, FBWindowContextHostView, FBWindowContextManager, NSHashTable, NSMutableDictionary, NSString, UIColor;

@interface FBWindowContextHostManager : NSObject <FBWindowContextHostViewDelegate> {
    FBWindowContextManager *_contextManager;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    <FBWindowContextHostManagerDelegate> *_delegate;
    struct { 
        unsigned int delegateOverrideRequester : 1; 
        unsigned int delegateShouldEnableContextHostingForRequester : 1; 
    } _flags;
    NSMutableDictionary *_hostRequesterInfo;
    FBOrderedRequesters *_hostRequesters;
    FBWindowContextHostView *_hostView;
    NSString *_identifier;
    BOOL _invalidated;
    NSHashTable *_observers;
    FBScene *_scene;
    BOOL _suspended;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy) UIColor * defaultBackgroundColorWhileHosting;
@property(copy) UIColor * defaultBackgroundColorWhileNotHosting;
@property <FBWindowContextHostManagerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * identifier;
@property(readonly) FBScene * scene;
@property(readonly) Class superclass;

- (void)_applyRequesterInfo:(id)arg1;
- (id)_hostViewForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)_infoForRequester:(id)arg1;
- (void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)arg1 originalProperties:(id)arg2 forRequester:(id)arg3;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (unsigned int)_populateContextIDs:(unsigned int*)arg1 forSnapshotExcludingContexts:(id)arg2;
- (id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
- (void)_removeRequesterInfo:(id)arg1;
- (struct CGImage { }*)_snapshotCGImageRefForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4 outIOSurfaceRef:(id*)arg5;
- (void)_updateHostViewFrameForRequester:(id)arg1;
- (void)addObserver:(id)arg1;
- (unsigned int)contextCount;
- (void)dealloc;
- (id)defaultBackgroundColorWhileHosting;
- (id)defaultBackgroundColorWhileNotHosting;
- (id)delegate;
- (id)description;
- (void)disableHostingForRequester:(id)arg1;
- (void)enableHostingForRequester:(id)arg1 orderFront:(BOOL)arg2;
- (void)enableHostingForRequester:(id)arg1 priority:(int)arg2;
- (id)hostViewForRequester:(id)arg1;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned int)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 appearanceStyle:(unsigned int)arg3;
- (id)identifier;
- (id)initWithContextManager:(id)arg1 scene:(id)arg2;
- (void)invalidate;
- (void)orderRequesterFront:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resumeContextHosting;
- (id)scene;
- (void)setContextId:(unsigned int)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3;
- (void)setDefaultBackgroundColorWhileHosting:(id)arg1;
- (void)setDefaultBackgroundColorWhileNotHosting:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (struct CGImage { }*)snapshotCGImageRefForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
- (struct __IOSurface { }*)snapshotIOSurfaceForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
- (id)snapshotUIImageForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
- (id)snapshotViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3;
- (void)suspendContextHosting;
- (id)visibleContexts;
- (void)windowContextHostViewHostedContextsDidChange:(id)arg1;

@end
