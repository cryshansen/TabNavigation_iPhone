//
//  TabTest2AppDelegate.h
//  TabTest2
//
//  Created by Crystal Hansen on 11-03-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TabTest2AppDelegate : NSObject <UIApplicationDelegate> {
    IBOutlet UIWindow *window;
	IBOutlet UITabBarController *tabBarController;
	//IBOutlet UINavigationController	*navBarController;
	
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic,retain) UITabBarController *tabBarController;
//@property (nonatomic, retain) UINavigationController *navBarController;

@end

