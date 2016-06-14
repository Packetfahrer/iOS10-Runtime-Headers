/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISpeechSynthesisElement : NSObject {
    NSString * _animationIdentifier;
    id /* block */  _completion;
    <AFUISpeechSynthesisElementDelegate> * _delegate;
    bool  _durationHasElapsed;
    bool  _eligibleForSynthesis;
    bool  _isPhonetic;
    bool  _preprationBlockCompleted;
    bool  _provisional;
    VSSpeechRequest * _speechRequest;
    long long  _synthesisResult;
    NSString * _text;
}

@property (nonatomic, readonly) NSString *animationIdentifier;
@property (getter=_completion, nonatomic, readonly) id /* block */ completion;
@property (nonatomic) <AFUISpeechSynthesisElementDelegate> *delegate;
@property (setter=_setDurationHasElapsed:) bool durationHasElapsed;
@property (getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:, nonatomic) bool eligibleForSynthesis;
@property (nonatomic) bool isPhonetic;
@property (setter=_setPreparationBlockCompleted:) bool preprationBlockCompleted;
@property (getter=isProvisional, nonatomic, readonly) bool provisional;
@property (nonatomic, retain) VSSpeechRequest *speechRequest;
@property (nonatomic) long long synthesisResult;
@property (setter=_setText:, nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id /* block */)_completion;
- (void)_setDurationHasElapsed:(bool)arg1;
- (void)_setEligibleForSynthesis:(bool)arg1;
- (void)_setPreparationBlockCompleted:(bool)arg1;
- (void)_setText:(id)arg1;
- (void)_updateSynthesisEligibility;
- (id)animationIdentifier;
- (id)delegate;
- (id)description;
- (bool)durationHasElapsed;
- (void)executeCompletion;
- (id)init;
- (id)initWithText:(id)arg1 provisional:(bool)arg2 eligibleAfterDuration:(double)arg3 preparation:(id /* block */)arg4 completion:(id /* block */)arg5 animationIdentifier:(id)arg6;
- (bool)isEligibleForSynthesis;
- (bool)isPhonetic;
- (bool)isProvisional;
- (bool)preprationBlockCompleted;
- (void)setDelegate:(id)arg1;
- (void)setIsPhonetic:(bool)arg1;
- (void)setSpeechRequest:(id)arg1;
- (void)setSynthesisResult:(long long)arg1;
- (id)speechRequest;
- (long long)synthesisResult;
- (id)text;

@end