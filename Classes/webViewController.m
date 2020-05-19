    //
//  webViewController.m
//  TabTest2
//
//  Created by Crystal Hansen on 11-03-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "webViewController.h"


@implementation webViewController
@synthesize webView;

-(void)awakeFromNib{
	
	//[webView loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"http://artssheets.com/index.html"]]];
	
	[self GetUrl];
	/*
	NSString *addressText = @"1 Infinite Loop, Edmonton, AB T6K 3Y1";
	addressText = [addressText stringByAddingPercentEscapesUsingEncoding:NSASCIIStringEncoding];
	NSString *urlText = [NSString stringWithFormat:@"http://maps.google.com/maps?q=%@",addressText];
	
	NSLog(@"myurl:%@",urlText);
	
	[[UIApplication sharedApplication] openURL:[NSURL URLWithString:urlText]];
	*/
	
	
}

 -(void)GetUrl{
	 NSString *addressText = @"660 Lakewood Rd N, Edmonton, AB T6K 3Y1";
	 addressText = [addressText stringByAddingPercentEscapesUsingEncoding:NSASCIIStringEncoding];
	 NSString *urlText = [NSString stringWithFormat:@"http://maps.google.com/maps?q=%@",addressText];
	 
	 NSLog(@"myurl:%@",urlText);
	 
	 [[UIApplication sharedApplication] openURL:[NSURL URLWithString:urlText]];
 
 }
	 
/*
 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}
*/

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}


@end
