//
//  UnityAdsProperties.m
//  UnityAds
//
//  Created by bluesun on 11/2/12.
//  Copyright (c) 2012 Unity Technologies. All rights reserved.
//

#import "UnityAdsProperties.h"
#import "../UnityAdsDevice/UnityAdsDevice.h"

NSString * const kUnityAdsVersion = @"1.0";

@implementation UnityAdsProperties

static UnityAdsProperties *sharedProperties = nil;

+ (id)sharedInstance
{
	@synchronized(self)
	{
		if (sharedProperties == nil)
      sharedProperties = [[UnityAdsProperties alloc] init];
	}
	
	return sharedProperties;
}

- (UnityAdsProperties *)init {
  if (self = [super init]) {
    ///src/
    [self setCampaignDataUrl:@"https://impact.applifier.com/mobile/campaigns"];
    //[self setCampaignDataUrl:@"http://192.168.1.152:3500/mobile/campaigns"];
    [self setCampaignQueryString:[self _createCampaignQueryString]];
  }
  
  return self;
}

- (NSString *)_createCampaignQueryString
{
	//NSString *advertisingIdentifier = self.md5AdvertisingIdentifier != nil ? self.md5AdvertisingIdentifier : @"";
  NSString *queryParams = @"?";
  
  queryParams = [NSString stringWithFormat:@"%@deviceId=%@&platform=%@&gameId=%@", queryParams, [UnityAdsDevice md5DeviceId], @"ios", [self adsGameId]];
  
  if ([UnityAdsDevice md5AdvertisingIdentifierString] != nil)
    queryParams = [NSString stringWithFormat:@"%@&advertisingTrackingId=%@", queryParams, [UnityAdsDevice md5AdvertisingIdentifierString]];
  
  if ([UnityAdsDevice canUseTracking]) {
    queryParams = [NSString stringWithFormat:@"%@&softwareVersion=%@&hardwareVersion=%@&deviceType=%@&apiVersion=%@&connectionType=%@", queryParams, [UnityAdsDevice softwareVersion], @"unknown", [UnityAdsDevice analyticsMachineName], kUnityAdsVersion, [UnityAdsDevice currentConnectionType]];
    if ([UnityAdsDevice md5AdvertisingIdentifierString] == nil) {
      queryParams = [NSString stringWithFormat:@"%@&macAddress=%@&openUdid=%@", queryParams, [UnityAdsDevice md5MACAddressString], [UnityAdsDevice md5OpenUDIDString]];
    }
  }
  
  if ([self testModeEnabled]) {
    queryParams = [NSString stringWithFormat:@"%@test=true", queryParams];
  }
  
  return queryParams;
}

- (void)refreshCampaignQueryString {
  [self setCampaignQueryString:[self _createCampaignQueryString]];
}

@end