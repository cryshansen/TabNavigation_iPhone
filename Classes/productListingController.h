//
//  productListing.h
//  TabTest2
//
//  Created by Crystal Hansen on 11-03-30.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class OverlayViewController;

@interface productListingController : UITableViewController {
	
	NSMutableArray *listItems;
	NSMutableArray *copyListItems;
	IBOutlet UIButton *linkBtn;
	BOOL letUserSelectRow;
	
	OverlayViewController *ovController;

}
@property (nonatomic, retain) NSMutableArray *listItems;
@property (nonatomic, retain) NSMutableArray *copyListItems;
@property (nonatomic, retain) UIButton *linkBtn;

-(UITableViewCell *) getCellContentView:(NSString *)cellIdentifier;

@end
