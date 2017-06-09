//
//  ViewController.h
//  Galileo Viewer AR Version
//
//  Created by Robert Zimmelman on 6/9/17.
//  Copyright © 2017 Robert Zimmelman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SceneKit/SceneKit.h>
#import <ARKit/ARKit.h>

@interface ViewController : UIViewController<UIAlertViewDelegate,ARSessionDelegate>
@property NSString *myDefaultURL;
@property NSArray *myAnchors;
@end
