//
//  lockAppDelegate.h
//  lock
//
//  Created by Mac on 4/20/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class lockViewController;

@interface lockAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet lockViewController *viewController;

@end
