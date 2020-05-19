//
//  moreViewController.h
//  TabTest2
//
//  Created by Crystal Hansen on 11-03-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface moreViewController : UITableViewController {
	IBOutlet UITextField *txtName;
	IBOutlet UILabel *lblMessage;
	
}
@property (nonatomic, retain) IBOutlet UITextField *txtName;
@property (nonatomic, retain) IBOutlet UILabel *lblMessage;

-(IBAction) doSomething;
-(IBAction) makeKeyboardGoAway;


@end
