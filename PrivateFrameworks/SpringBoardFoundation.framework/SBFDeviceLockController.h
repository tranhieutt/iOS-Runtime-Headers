/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, PCPersistentTimer, SBFPasscodeLockAssertionManager, SBFPasscodeLockDisableAssertion;

@interface SBFDeviceLockController : NSObject {
    SBFPasscodeLockAssertionManager *_assertionManager;
    BOOL _cachedPasscodeLockedOrBlocked;
    double _deviceLockUnblockTime;
    PCPersistentTimer *_deviceLockUnblockTimer;
    BOOL _hasBeenUnlockedOnceSinceBoot;
    BOOL _isBlockedForThermalCondition;
    BOOL _isPermanentlyBlocked;
    NSString *_lastIncorrectPasscodeAttempt;
    double _lastLockDate;
    BOOL _lastPasscodeLockStateWasLocked;
    int _lockState;
    BOOL _okToSendNotifications;
    NSDictionary *_originalDefaultsForRollback;
    NSObject<OS_dispatch_queue> *_persistentStateQueue;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    BOOL _shouldFetchPasscodeLockState;
    BOOL _speculativePasscodeFailureChargeOutstanding;
    SBFPasscodeLockDisableAssertion *_transientPasscodeCheckingAssertion;
}

+ (id)_copyLockControllerDefaults;
+ (id)_journalPath;
+ (id)_journaledDefaultsAndTypes;
+ (void)_loadLockControllerDefaults:(id)arg1;
+ (void)_loadLockControllerDefaultsJournalIfNecessary;
+ (id)_lockStateDefaults;
+ (void)_updateLockControllerDefaultsJournal;

- (void)_addDeviceLockDisableAssertion:(id)arg1;
- (void)_cachePassword:(id)arg1;
- (void)_clearBlockedState;
- (void)_clearUnblockTimer;
- (void)_commitSpeculativeFailureCharge;
- (void)_enablePasscodeLockImmediately:(BOOL)arg1;
- (void)_evaluatePendingWipe;
- (void)_keybagLockStateChangedTo:(int)arg1;
- (void)_lockStateChangedFrom:(int)arg1 to:(int)arg2;
- (void)_noteBlockedReasonsMayHaveChanged;
- (void)_notePasscodeLockedOrBlockedStateMayHaveChanged:(BOOL)arg1;
- (void)_notifyOfFirstUnlock;
- (void)_persistentStateQueue_beginSpeculativeFailureCharge;
- (void)_persistentStateQueue_cancelSpeculativeFailureCharge;
- (void)_removeDeviceLockDisableAssertion:(id)arg1;
- (void)_scheduleUnblockTimer;
- (void)_sendBlockStateChangeNotification;
- (void)_setDeviceLockUnblockTime:(double)arg1;
- (void)_setLockState:(int)arg1;
- (void)_setupRunLoopObserverIfNecessary;
- (BOOL)_shouldLockDeviceNow;
- (BOOL)_shouldSuppressLockOnInit;
- (BOOL)_temporarilyBlocked;
- (void)_unblockTimerFired;
- (void)_uncachePasscodeIfNecessary;
- (void)_updateDeviceLockedState;
- (void)_wipeDevice;
- (BOOL)attemptDeviceUnlockWithPassword:(id)arg1 appRequested:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)deviceHasBeenPasscodeUnlockedOnceSinceBoot;
- (BOOL)deviceHasPasscodeSet;
- (void)enablePasscodeLockImmediately;
- (id)init;
- (BOOL)isBlocked;
- (BOOL)isBlockedForThermalCondition;
- (BOOL)isPasscodeLocked;
- (BOOL)isPasscodeLockedCached;
- (BOOL)isPasscodeLockedOrBlocked;
- (BOOL)isPermanentlyBlocked:(double*)arg1;
- (id)lastLockDate;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)setBlockedForThermalCondition:(BOOL)arg1;
- (void)synchronize;
- (id)updateLockControllerDefaultsWithBlock:(id)arg1 journaled:(BOOL)arg2;

@end
