//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CEmoticonWrap, MMUIViewController, NSArray, NSDictionary, NSString, NSURL, ServiceAppData, UIImage;

@protocol MMInputToolViewDelegate <NSObject>

@optional
- (_Bool)isHiddenInputChangeButton;
- (void)onToolViewDidMoveToWindow;
- (void)clearCaptureViewParams;
- (NSDictionary *)captureViewParams;
- (_Bool)shouldHideToolViewOnKeyboardHide;
- (_Bool)shouldInitWXEmoticonView;
- (void)keyboardWillHide;
- (MMUIViewController *)GetCurrentViewController;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowWxTalkFollowSight;
- (void)initAllowShareCard;
- (void)initAllowRecommendApp;
- (void)initAllowMultiTalk;
- (void)initAllowWxTalk;
- (void)initAllowVoiceInput;
- (void)initAllowVoip;
- (_Bool)isViewControllerAnimated;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)onTextDeleteAll;
- (void)sendCaptruedImage:(NSURL *)arg1;
- (void)pasteImage:(UIImage *)arg1;
- (NSString *)getCurrentChatName;
- (void)redEnvelopesLogic;
- (void)transferMoneyLogic;
- (void)openServiceAppListController;
- (_Bool)hasGroupPayEntry;
- (_Bool)hasCardPkgEntry;
- (_Bool)hasRedEnvelopesEntry;
- (_Bool)hasTransferMoneyEntry;
- (_Bool)hasServiceEntry;
- (NSArray *)getServiceAppList;
- (NSArray *)getAttachmentViewServiceAppList;
- (void)openServiceApp:(ServiceAppData *)arg1;
- (void)onStreamVoiceInputButtonClick;
- (NSString *)chatUserNameForSightStatistics;
- (void)onGroupPayButtonClick;
- (void)onOpenMyCardPkgViewController;
- (void)openMyFavoritesListController;
- (void)openEnterpriseBrandEntry;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowLocation;
- (_Bool)canShowFavEntry;
- (_Bool)canShowSight;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (_Bool)shouldShowOpenTrackRoom;
- (void)onSelectLocation;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)onMultiTalkButtonClick;
- (void)onShareCard;
- (void)SendEmoticonMesssageToolView:(CEmoticonWrap *)arg1;
- (void)TextDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onSightPictureTaken:(UIImage *)arg1 withFrontCamera:(_Bool)arg2;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4;
- (void)openCameraController;
- (void)openMediaBrowser;
- (void)CancelRecording;
- (void)StopRecording;
- (void)StartRecording;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)SendEmojiArtMessageToolView:(NSString *)arg1;
- (void)SendTextMessageToolView:(NSString *)arg1;
@end

