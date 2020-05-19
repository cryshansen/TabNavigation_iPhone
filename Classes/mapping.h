//
//  mapping.h
//  TabTest2
//
//  Created by Crystal Hansen on 11-03-30.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface mapping : UIViewController {
	IBOutlet UITextField *txtInput;
	IBOutlet UILabel *lblMessage;

}
@property (nonatomic, retain)  UITextField *txtInput;
@property (nonatomic,retain)  UILabel *lblMessage;

-(BOOL)textFieldShouldReturn:(UITextField *)theTextField;

@end
