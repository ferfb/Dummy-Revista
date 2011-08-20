//
//  RevistaAppDelegate.h
//  Revista
//
//  Created by Fernando Fuentes Basurto on 8/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RevistaViewController;

@interface RevistaAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet RevistaViewController *viewController;

@end
