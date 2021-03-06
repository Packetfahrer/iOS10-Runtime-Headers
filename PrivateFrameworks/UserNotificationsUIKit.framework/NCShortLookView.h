/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCShortLookView : UIView <NCLookView, NCLookViewInternal> {
    bool  _backgroundBlurred;
    UIView * _backgroundView;
    bool  _banner;
    UIView * _clippingView;
    double  _cornerRadius;
    UIView * _customContentView;
    UIView * _headerContainerView;
    NCLookHeaderContentView * _headerContentView;
    UIView * _headerOverlayView;
    UIView * _mainContainerView;
    UIView * _mainOverlayView;
    UIImageView * _shadowView;
    bool  _usesBackgroundView;
}

@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, retain) UIView *backgroundView;
@property (getter=isBanner, nonatomic) bool banner;
@property (nonatomic, retain) UIView *colorInfusionView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) UIButton *iconButton;
@property (nonatomic, readonly) long long lookStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool usesBackgroundView;
@property (nonatomic, readonly) UIButton *utilityButton;

+ (id)_shadowImage;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_shadowImage:(id)arg1 frameForShortLookBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (double)titleInset;

- (void).cxx_destruct;
- (id)_backgroundMaterialView;
- (void)_configureBackgroundView:(id)arg1;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureClippingViewIfNecessary;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureHeaderContainerViewIfNecessary;
- (void)_configureHeaderContentViewIfNecessary;
- (void)_configureHeaderOverlayViewIfNecessary;
- (void)_configureMainContainerViewIfNecessary;
- (void)_configureMainOverlayViewIfNecessary;
- (void)_configureShadowViewIfNecessary;
- (id)_headerContentView;
- (id)_newDefaultBackgroundView;
- (id)backgroundView;
- (id)colorInfusionView;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)cornerRadius;
- (id)customContentView;
- (id)date;
- (id)groupName;
- (bool)headerHeedsHorizontalLayoutMargins;
- (id)icon;
- (id)iconButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackgroundBlurred;
- (bool)isBanner;
- (bool)isHeaderHidden;
- (void)layoutSubviews;
- (long long)lookStyle;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBanner:(bool)arg1;
- (void)setColorInfusionView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDate:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHeaderHeedsHorizontalLayoutMargins:(bool)arg1;
- (void)setHeaderNeedsLayout;
- (void)setIcon:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesBackgroundView:(bool)arg1;
- (void)setUtilityView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (bool)usesBackgroundView;
- (id)utilityButton;
- (id)utilityView;

@end
