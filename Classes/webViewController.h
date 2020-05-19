//
//  webViewController.h
//  TabTest2
//
//  Created by Crystal Hansen on 11-03-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface webViewController : UIViewController {
	IBOutlet UIWebView *webView;
	
}
@property (nonatomic, retain) UIWebView *webView;
-(void)GetUrl;

@end
