//
//  AppDelegate.h
//  Messagee
//
//  Created by Ernesto Vargas on 2/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UGClient.h"
#import <InstaOpsSDK/InstaOpsAppMonitor.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) InstaOpsAppMonitor* iopsAppMonitor;

@end
