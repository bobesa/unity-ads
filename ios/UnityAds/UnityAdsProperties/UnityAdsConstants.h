//
//  UnityAdsConstants.h
//  UnityAds
//
//  Created by bluesun on 1/10/13.
//  Copyright (c) 2013 Unity Technologies. All rights reserved.
//

#import <Foundation/Foundation.h>

/* WebView */

typedef enum {
  kUnityAdsViewStateWebView,
  kUnityAdsViewStateVideoPlayer,
  kUnityAdsViewStateNone
} UnityAdsViewState;

extern NSString * const kUnityAdsWebViewJSPrefix;
extern NSString * const kUnityAdsWebViewJSInit;
extern NSString * const kUnityAdsWebViewJSChangeView;
extern NSString * const kUnityAdsWebViewJSHandleNativeEvent;

extern NSString * const kUnityAdsWebViewAPIActionKey;
extern NSString * const kUnityAdsWebViewAPIPlayVideo;
extern NSString * const kUnityAdsWebViewAPINavigateTo;
extern NSString * const kUnityAdsWebViewAPIInitComplete;
extern NSString * const kUnityAdsWebViewAPIClose;
extern NSString * const kUnityAdsWebViewAPIOpen;
extern NSString * const kUnityAdsWebViewAPIAppStore;
extern NSString * const kUnityAdsWebViewAPIActionVideoStartedPlaying;

extern NSString * const kUnityAdsWebViewViewTypeCompleted;
extern NSString * const kUnityAdsWebViewViewTypeStart;
extern NSString * const kUnityAdsWebViewViewTypeNone;

extern NSString * const kUnityAdsWebViewDataParamCampaignDataKey;
extern NSString * const kUnityAdsWebViewDataParamPlatformKey;
extern NSString * const kUnityAdsWebViewDataParamDeviceIdKey;
extern NSString * const kUnityAdsWebViewDataParamGameIdKey;
extern NSString * const kUnityAdsWebViewDataParamDeviceTypeKey;
extern NSString * const kUnityAdsWebViewDataParamOpenUdidIdKey;
extern NSString * const kUnityAdsWebViewDataParamMacAddressKey;
extern NSString * const kUnityAdsWebViewDataParamSdkVersionKey;
extern NSString * const kUnityAdsWebViewDataParamIosVersionKey;

extern NSString * const kUnityAdsWebViewEventDataCampaignIdKey;
extern NSString * const kUnityAdsWebViewEventDataRewatchKey;
extern NSString * const kUnityAdsWebViewEventDataClickUrlKey;



/* Native Events */

extern NSString * const kUnityAdsNativeEventHideSpinner;
extern NSString * const kUnityAdsNativeEventShowSpinner;


/* Native Event Params */

extern NSString * const kUnityAdsTextKeyKey;
extern NSString * const kUnityAdsTextKeyBuffering;
extern NSString * const kUnityAdsTextKeyLoading;
extern NSString * const kUnityAdsItemKeyKey;


/* JSON Data Root */

extern NSString * const kUnityAdsJsonDataRootKey;


/* Campaign JSON Properties */

extern NSString * const kUnityAdsCampaignsKey;
extern NSString * const kUnityAdsCampaignEndScreenKey;
extern NSString * const kUnityAdsCampaignClickURLKey;
extern NSString * const kUnityAdsCampaignPictureKey;
extern NSString * const kUnityAdsCampaignTrailerDownloadableKey;
extern NSString * const kUnityAdsCampaignTrailerStreamingKey;
extern NSString * const kUnityAdsCampaignGameIDKey;
extern NSString * const kUnityAdsCampaignGameNameKey;
extern NSString * const kUnityAdsCampaignIDKey;
extern NSString * const kUnityAdsCampaignTaglineKey;
extern NSString * const kUnityAdsCampaignStoreIDKey;
extern NSString * const kUnityAdsCampaignCacheVideoKey;


/* Reward Item JSON Properties */

extern NSString * const kUnityAdsRewardItemKeyKey;
extern NSString * const kUnityAdsRewardNameKey;
extern NSString * const kUnityAdsRewardPictureKey;
extern NSString * const kUnityAdsRewardItemKey;
extern NSString * const kUnityAdsRewardItemsKey;

/* Gamer JSON Properties */

extern NSString * const kUnityAdsGamerIDKey;


/* Unity Ads Base JSON Properties */

extern NSString * const kUnityAdsUrlKey;
extern NSString * const kUnityAdsWebViewUrlKey;
extern NSString * const kUnityAdsAnalyticsUrlKey;


/* Analytics Uploader */

extern NSString * const kUnityAdsAnalyticsTrackingPath;
extern NSString * const kUnityAdsAnalyticsInstallTrackingPath;
extern NSString * const kUnityAdsAnalyticsQueryDictionaryQueryKey;
extern NSString * const kUnityAdsAnalyticsQueryDictionaryBodyKey;
extern NSString * const kUnityAdsAnalyticsUploaderRequestKey;
extern NSString * const kUnityAdsAnalyticsUploaderConnectionKey;
extern NSString * const kUnityAdsAnalyticsUploaderRetriesKey;
extern NSString * const kUnityAdsAnalyticsSavedUploadsKey;
extern NSString * const kUnityAdsAnalyticsSavedUploadURLKey;
extern NSString * const kUnityAdsAnalyticsSavedUploadBodyKey;
extern NSString * const kUnityAdsAnalyticsSavedUploadHTTPMethodKey;

extern NSString * const kUnityAdsAnalyticsQueryParamGameIdKey;
extern NSString * const kUnityAdsAnalyticsQueryParamEventTypeKey;
extern NSString * const kUnityAdsAnalyticsQueryParamTrackingIdKey;
extern NSString * const kUnityAdsAnalyticsQueryParamProviderIdKey;
extern NSString * const kUnityAdsAnalyticsQueryParamRewardItemKey;

extern NSString * const kUnityAdsAnalyticsEventTypeVideoStart;
extern NSString * const kUnityAdsAnalyticsEventTypeVideoFirstQuartile;
extern NSString * const kUnityAdsAnalyticsEventTypeVideoMidPoint;
extern NSString * const kUnityAdsAnalyticsEventTypeVideoThirdQuartile;
extern NSString * const kUnityAdsAnalyticsEventTypeVideoEnd;
extern NSString * const kUnityAdsAnalyticsEventTypeOpenAppStore;

extern NSString * const kUnityAdsTrackingEventTypeVideoStart;
extern NSString * const kUnityAdsTrackingEventTypeVideoEnd;


/* Devicetypes */

extern NSString * const kUnityAdsDeviceIphone;
extern NSString * const kUnityAdsDeviceIphone3g;
extern NSString * const kUnityAdsDeviceIphone3gs;
extern NSString * const kUnityAdsDeviceIphone4;
extern NSString * const kUnityAdsDeviceIphone4s;
extern NSString * const kUnityAdsDeviceIphone5;
extern NSString * const kUnityAdsDeviceIpod;
extern NSString * const kUnityAdsDeviceIpodTouch1gen;
extern NSString * const kUnityAdsDeviceIpodTouch2gen;
extern NSString * const kUnityAdsDeviceIpodTouch3gen;
extern NSString * const kUnityAdsDeviceIpodTouch4gen;
extern NSString * const kUnityAdsDeviceIpad;
extern NSString * const kUnityAdsDeviceIpad1;
extern NSString * const kUnityAdsDeviceIpad2;
extern NSString * const kUnityAdsDeviceIpad3;
extern NSString * const kUnityAdsDeviceIosUnknown;
extern NSString * const kUnityAdsDeviceSimulator;


/* Init Query Params */

extern NSString * const kUnityAdsInitQueryParamDeviceIdKey;
extern NSString * const kUnityAdsInitQueryParamDeviceTypeKey;
extern NSString * const kUnityAdsInitQueryParamPlatformKey;
extern NSString * const kUnityAdsInitQueryParamGameIdKey;
extern NSString * const kUnityAdsInitQueryParamOpenUdidKey;
extern NSString * const kUnityAdsInitQueryParamMacAddressKey;
extern NSString * const kUnityAdsInitQueryParamAdvertisingTrackingIdKey;
extern NSString * const kUnityAdsInitQueryParamTrackingEnabledKey;
extern NSString * const kUnityAdsInitQueryParamSoftwareVersionKey;
extern NSString * const kUnityAdsInitQueryParamHardwareVersionKey;
extern NSString * const kUnityAdsInitQueryParamSdkVersionKey;
extern NSString * const kUnityAdsInitQueryParamConnectionTypeKey;
extern NSString * const kUnityAdsInitQueryParamTestKey;


@interface UnityAdsConstants : NSObject

@end