/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface PRSStateTask : NSObject <PRSTriggerTask> {
    NSString *_localeIdentifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _reply;

    NSString *_userAgent;
}

@property(retain) NSString * localeIdentifier;
@property(copy) id reply;
@property(retain) NSString * userAgent;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)arg1 userAgent:(id)arg2 reply:(id)arg3;
- (id)localeIdentifier;
- (id)reply;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)triggerQuery:(BOOL)arg1;
- (id)userAgent;

@end
