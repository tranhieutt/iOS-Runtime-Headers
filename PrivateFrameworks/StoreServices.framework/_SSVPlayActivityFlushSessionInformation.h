/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableIndexSet, NSString;

@interface _SSVPlayActivityFlushSessionInformation : NSObject {
    NSString *_endpointIdentifier;
    NSString *_revisionVersionToken;
    NSMutableIndexSet *_revisionsIndexSet;
    unsigned long long _sessionToken;
}

@property(copy) NSString * endpointIdentifier;
@property(copy) NSString * revisionVersionToken;
@property(retain) NSMutableIndexSet * revisionsIndexSet;
@property unsigned long long sessionToken;

- (void).cxx_destruct;
- (id)endpointIdentifier;
- (id)revisionVersionToken;
- (id)revisionsIndexSet;
- (unsigned long long)sessionToken;
- (void)setEndpointIdentifier:(id)arg1;
- (void)setRevisionVersionToken:(id)arg1;
- (void)setRevisionsIndexSet:(id)arg1;
- (void)setSessionToken:(unsigned long long)arg1;

@end
