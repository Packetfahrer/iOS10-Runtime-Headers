/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognitionAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBufferBase> { 
        struct RecogAudioBufferBase {} *px; 
        struct shared_count { 
            struct sp_counted_base {} *pi_; 
        } pn; 
    }  _buffer;
    bool  _cancelled;
    bool  _ended;
    NSObject<OS_dispatch_queue> * _queue;
    _EARSpeechRecognizer * _speechRecognizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithAudioBuffer:(struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; })arg1 speechRecognizer:(id)arg2;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2;
- (void)cancelRecognition;
- (void)dealloc;
- (void)endAudio;

@end