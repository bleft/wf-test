//
//  wf_testTests.m
//  wf-testTests
//
//  Created by Sven Bautz on 20.02.13.
//  Copyright (c) 2013 slooft.com. All rights reserved.
//

#import "wf_testTests.h"

@implementation wf_testTests

- (void)setUp
{
    [super setUp];
    
    // Set-up code here.
}

- (void)tearDown
{
    // Tear-down code here.
    
    [super tearDown];
}

- (void)testExample
{
    NSString *a = @"a";
    NSString *b = @"a";
    
    STAssertEqualObjects(a, a, @"a == a");
    STAssertEquals(a, b, @"Inhalt gleich?");
    // STFail(@"Unit tests are not implemented yet in wf-testTests");
}

@end
