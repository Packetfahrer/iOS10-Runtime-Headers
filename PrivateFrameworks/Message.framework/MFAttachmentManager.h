/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentManager : NSObject {
    NSObject<OS_dispatch_queue> * _arrayAccessQueue;
    MFInvocationQueue * _attachmentInvocationQueue;
    NSMutableDictionary * _attachments;
    NSObject<OS_dispatch_queue> * _imageScalingQueue;
    NSLock * _metaDataLock;
    NSMutableDictionary * _metadata;
    NSMutableDictionary * _providers;
}

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (id)allManagers;
+ (id)defaultManager;
+ (id)supportedDocumentUTIs;

- (void)_callProgressBlockForAttachmentURL:(id)arg1 withBytes:(unsigned long long)arg2 expectedSize:(unsigned long long)arg3;
- (id)_contentIDForAttachment:(id)arg1;
- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2;
- (void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2;
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2;
- (void)_fetchInvocationCallUsingBlock:(id /* block */)arg1;
- (id)_filePathForAttachment:(id)arg1;
- (bool)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3;
- (void)addProvider:(id)arg1 forBaseURL:(id)arg2;
- (id)attachmentForCID:(id)arg1;
- (id)attachmentForContentID:(id)arg1;
- (id)attachmentForContentID:(id)arg1 preferredSchemes:(id)arg2;
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;
- (id)attachmentForTextAttachment:(id)arg1 error:(id*)arg2;
- (id)attachmentForURL:(id)arg1 error:(id*)arg2;
- (id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3;
- (id)attachmentsForContext:(id)arg1;
- (id)attachmentsForURLs:(id)arg1 error:(id*)arg2;
- (void)cancelFetchForAttachment:(id)arg1;
- (void)clearMetadataForAttachment:(id)arg1;
- (void)dealloc;
- (void)fetchDataForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchDataSynchronouslyForAttachment:(id)arg1;
- (id)imageScalingQueue;
- (id)init;
- (void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2;
- (id)metadataForAttachment:(id)arg1 forKey:(id)arg2;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)removeAttachmentForURL:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)removeProviderForBaseURL:(id)arg1;
- (void)setContentID:(id)arg1 forAttachment:(id)arg2;
- (void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3;
- (bool)updateAttachment:(id)arg1 withNewData:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(bool)arg2 forContext:(id)arg3;

@end