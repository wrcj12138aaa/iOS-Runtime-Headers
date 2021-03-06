/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSStateTask : NSObject <PRSTriggerTask> {
    NSString *_localeIdentifier;
    id /* block */ _reply;
    NSString *_userAgent;
}

@property (retain) NSString *localeIdentifier;
@property (copy) id /* block */ reply;
@property (retain) NSString *userAgent;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)arg1 userAgent:(id)arg2 reply:(id /* block */)arg3;
- (id)localeIdentifier;
- (id /* block */)reply;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setReply:(id /* block */)arg1;
- (void)setUserAgent:(id)arg1;
- (void)triggerQuery:(BOOL)arg1;
- (id)userAgent;

@end
