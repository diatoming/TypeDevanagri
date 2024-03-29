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

@interface DJInputEngineFactory : NSObject {
    NSString* scriptName;
    NSString* schemeName;
    NSMutableDictionary* schemesCache;
}

+(DJInputMethodEngine*)inputEngine;
+(void)setCurrentSchemeWithName:(NSString*)schemeName scriptName:(NSString*)scriptName;
+(NSString*)currentScriptName;
+(NSString*)currentSchemeName;
+(NSArray*)availableScripts;
+(NSArray*)availableSchemesForScript:(NSString*)scriptName;
+(NSString*)schemesDirectory;

@end
