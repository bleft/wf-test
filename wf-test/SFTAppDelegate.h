//
//  SFTAppDelegate.h
//  wf-test
//
//  Created by Sven Bautz on 20.02.13.
//  Copyright (c) 2013 slooft.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SFTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
