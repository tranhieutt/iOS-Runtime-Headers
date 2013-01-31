/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVACLTaskDelegate>, NSArray;

@interface CoreDAVACLTask : CoreDAVTask  {
    NSArray *_accessControlEntities;
}

@property <CoreDAVACLTaskDelegate> * delegate;
@property(retain) NSArray * accessControlEntities;


- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)httpMethod;
- (id)requestBody;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (void)setAccessControlEntities:(id)arg1;
- (id)accessControlEntities;
- (void)finishCoreDAVTaskWithError:(id)arg1;

@end