/*
 * LipikaIME a user-configurable phonetic Input Method Engine for Mac OS X.
 * Copyright (C) 2013 Ranganath Atreya
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Foundation/Foundation.h>
#import "DJInputMethodEngine.h"

@interface DJLipikaBufferManager : NSObject {
    // One instance of the engine per connection
    DJInputMethodEngine* engine;
    // Holds NSString outputs that need to be handed off to the client
    NSMutableArray* uncommittedOutput;
    // New output from the engine will replace all output after this index
    unsigned long finalizedIndex;
}

-(id)init;
-(void)changeToSchemeWithName:(NSString*)schemeName forScript:scriptName;
-(NSString*)outputForInput:(NSString*)string;
-(BOOL)hasDeletable;
-(void)delete;
-(BOOL)hasOutput;
-(NSString*)output;
-(NSString*)input;
-(NSString*)flush;

@end
