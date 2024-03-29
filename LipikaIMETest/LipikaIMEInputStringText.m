//
//  LipikaIMEInputStringText.m
//  LipikaIME
//
//  Created by Atreya, Ranganath on 4/1/13.
//  Copyright (c) 2013 com.daivajnanam. All rights reserved.
//

#import "LipikaIMEInputStringText.h"

@interface DJLipikaBufferManager (Test)

-(id)initWithEngine:(DJInputMethodEngine*)myEngine;

@end

@implementation LipikaIMEInputStringText

-(void)setUp {
    [super setUp];
    DJInputMethodScheme* scheme = [[DJInputMethodScheme alloc] initWithSchemeFile:@"/Users/ratreya/workspace/Lipika_IME/LipikaIMETest/Schemes/TestMultipleReplay.scm"];
    DJInputMethodEngine* engine = [[DJInputMethodEngine alloc] initWithScheme:scheme];
    manager = [[DJLipikaBufferManager alloc] initWithEngine:engine];
}

-(void)tearDown {
    [manager flush];
    [super tearDown];
}

-(void)testHappyCase_NilOutput {
    // abcdf should output pqs
    NSString* output = [manager outputForInput:@"a"];
    STAssertTrue([@"a" isEqualToString:[manager input]], [NSString stringWithFormat:@"Unexpected input: %@", [manager input]]);
    output = [manager outputForInput:@"b"];
    STAssertTrue([@"ab" isEqualToString:[manager input]], [NSString stringWithFormat:@"Unexpected input: %@", [manager input]]);
    output = [manager outputForInput:@"c"];
    STAssertTrue([@"abc" isEqualToString:[manager input]], [NSString stringWithFormat:@"Unexpected input: %@", [manager input]]);
    output = [manager outputForInput:@"d"];
    STAssertTrue([@"abcd" isEqualToString:[manager input]], [NSString stringWithFormat:@"Unexpected input: %@", [manager input]]);
    output = [manager outputForInput:@"f"];
    STAssertTrue([@"abcdf" isEqualToString:[manager input]], [NSString stringWithFormat:@"Unexpected input: %@", [manager input]]);
    output = [manager outputForInput:@"g"];
    STAssertTrue([@"abcdfg" isEqualToString:[manager input]], [NSString stringWithFormat:@"Unexpected input: %@", [manager input]]);
    output = [manager outputForInput:@" "];
    STAssertTrue([output isEqualToString:@"qs "], [NSString stringWithFormat:@"Unexpected output: %@", output]);
}

@end
