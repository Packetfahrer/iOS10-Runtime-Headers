/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserItemPayload : IMPluginPayload {
    NSDictionary * _attributionInfo;
    NSURL * _fileURL;
    UIViewController<CKPluginEntryViewController> * _photoShelfViewController;
    NSURL * _videoComplementFileURL;
}

@property (nonatomic, retain) NSDictionary *attributionInfo;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) UIViewController<CKPluginEntryViewController> *photoShelfViewController;
@property (nonatomic, retain) NSURL *videoComplementFileURL;

- (void).cxx_destruct;
- (id)__ck_urlFromTextBodyForRichLink;
- (id)attributionInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPluginPayload:(id)arg1;
- (id)mediaObjectFromPayload;
- (id)photoShelfViewController;
- (void)setAttributionInfo:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setPhotoShelfViewController:(id)arg1;
- (void)setVideoComplementFileURL:(id)arg1;
- (bool)shouldSendAsMediaObject;
- (bool)shouldSendAsRichLink;
- (bool)shouldSendAsText;
- (id)videoComplementFileURL;

@end
