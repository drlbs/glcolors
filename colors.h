/* Named Color Triples for OpenGL - Structure Version 
 *    
 * Andrew J. Pounds, Ph.D.
 * Departments of Chemistry and Computer Science
 * Mercer University
 * Spring 2015
 *
 * Defines 500 colors by name in a structure so that
 * the color triples can be referenced like
 * lime.red lime.green lime.blue                                        
 *
 * This header defines the typedef and places all the variables
 * as extern.  This file should be included in any file that
 * wants to reference the colors by name
 *
 * IMPORTANT: you have to use glColor3ub, like this...
 * 
 * glColor3ub( lime.red, lime.green, lime.blue );
 *
 * A list of colors can be found at:
 *
 * http://cloford.com/resources/colours/500col.htm
 *
 */

#ifndef COLORS
#define COLORS

#include "headers.h"  // Need this to pick up GLint type

typedef struct color_quads {
    GLubyte red;
    GLubyte green;
    GLubyte blue;
    char *hex;
} color_struct;

extern color_struct indianred;
extern color_struct crimson;
extern color_struct lightpink;
extern color_struct lightpink1;
extern color_struct lightpink2;
extern color_struct lightpink3;
extern color_struct lightpink4;
extern color_struct pink;
extern color_struct pink1;
extern color_struct pink2;
extern color_struct pink3;
extern color_struct pink4;
extern color_struct palevioletred;
extern color_struct palevioletred1;
extern color_struct palevioletred2;
extern color_struct palevioletred3;
extern color_struct palevioletred4;
extern color_struct lavenderblush1;
extern color_struct lavenderblush2;
extern color_struct lavenderblush3;
extern color_struct lavenderblush4;
extern color_struct violetred1;
extern color_struct violetred2;
extern color_struct violetred3;
extern color_struct violetred4;
extern color_struct hotpink;
extern color_struct hotpink1;
extern color_struct hotpink2;
extern color_struct hotpink3;
extern color_struct hotpink4;
extern color_struct raspberry;
extern color_struct deeppink1;
extern color_struct deeppink2;
extern color_struct deeppink3;
extern color_struct deeppink4;
extern color_struct maroon1;
extern color_struct maroon2;
extern color_struct maroon3;
extern color_struct maroon4;
extern color_struct mediumvioletred;
extern color_struct violetred;
extern color_struct orchid;
extern color_struct orchid1;
extern color_struct orchid2;
extern color_struct orchid3;
extern color_struct orchid4;
extern color_struct thistle;
extern color_struct thistle1;
extern color_struct thistle2;
extern color_struct thistle3;
extern color_struct thistle4;
extern color_struct plum1;
extern color_struct plum2;
extern color_struct plum3;
extern color_struct plum4;
extern color_struct plum;
extern color_struct violet;
extern color_struct magenta;
extern color_struct magenta2;
extern color_struct magenta3;
extern color_struct magenta4;
extern color_struct purple;
extern color_struct mediumorchid;
extern color_struct mediumorchid1;
extern color_struct mediumorchid2;
extern color_struct mediumorchid3;
extern color_struct mediumorchid4;
extern color_struct darkviolet;
extern color_struct darkorchid;
extern color_struct darkorchid1;
extern color_struct darkorchid2;
extern color_struct darkorchid3;
extern color_struct darkorchid4;
extern color_struct indigo;
extern color_struct blueviolet;
extern color_struct purple1;
extern color_struct purple2;
extern color_struct purple3;
extern color_struct purple4;
extern color_struct mediumpurple;
extern color_struct mediumpurple1;
extern color_struct mediumpurple2;
extern color_struct mediumpurple3;
extern color_struct mediumpurple4;
extern color_struct darkslateblue;
extern color_struct lightslateblue;
extern color_struct mediumslateblue;
extern color_struct slateblue;
extern color_struct slateblue1;
extern color_struct slateblue2;
extern color_struct slateblue3;
extern color_struct slateblue4;
extern color_struct ghostwhite;
extern color_struct lavender;
extern color_struct blue;
extern color_struct blue2;
extern color_struct blue3;
extern color_struct blue4;
extern color_struct navy;
extern color_struct midnightblue;
extern color_struct cobalt;
extern color_struct royalblue;
extern color_struct royalblue1;
extern color_struct royalblue2;
extern color_struct royalblue3;
extern color_struct royalblue4;
extern color_struct cornflowerblue;
extern color_struct lightsteelblue;
extern color_struct lightsteelblue1;
extern color_struct lightsteelblue2;
extern color_struct lightsteelblue3;
extern color_struct lightsteelblue4;
extern color_struct lightslategray;
extern color_struct slategray;
extern color_struct slategray1;
extern color_struct slategray2;
extern color_struct slategray3;
extern color_struct slategray4;
extern color_struct dodgerblue1;
extern color_struct dodgerblue2;
extern color_struct dodgerblue3;
extern color_struct dodgerblue4;
extern color_struct aliceblue;
extern color_struct steelblue;
extern color_struct steelblue1;
extern color_struct steelblue2;
extern color_struct steelblue3;
extern color_struct steelblue4;
extern color_struct lightskyblue;
extern color_struct lightskyblue1;
extern color_struct lightskyblue2;
extern color_struct lightskyblue3;
extern color_struct lightskyblue4;
extern color_struct skyblue1;
extern color_struct skyblue2;
extern color_struct skyblue3;
extern color_struct skyblue4;
extern color_struct skyblue;
extern color_struct deepskyblue1;
extern color_struct deepskyblue2;
extern color_struct deepskyblue3;
extern color_struct deepskyblue4;
extern color_struct peacock;
extern color_struct lightblue;
extern color_struct lightblue1;
extern color_struct lightblue2;
extern color_struct lightblue3;
extern color_struct lightblue4;
extern color_struct powderblue;
extern color_struct cadetblue1;
extern color_struct cadetblue2;
extern color_struct cadetblue3;
extern color_struct cadetblue4;
extern color_struct turquoise1;
extern color_struct turquoise2;
extern color_struct turquoise3;
extern color_struct turquoise4;
extern color_struct cadetblue;
extern color_struct darkturquoise;
extern color_struct azure1;
extern color_struct azure2;
extern color_struct azure3;
extern color_struct azure4;
extern color_struct lightcyan1;
extern color_struct lightcyan2;
extern color_struct lightcyan3;
extern color_struct lightcyan4;
extern color_struct paleturquoise1;
extern color_struct paleturquoise2;
extern color_struct paleturquoise3;
extern color_struct paleturquoise4;
extern color_struct darkslategray;
extern color_struct darkslategray1;
extern color_struct darkslategray2;
extern color_struct darkslategray3;
extern color_struct darkslategray4;
extern color_struct cyan;
extern color_struct cyan2;
extern color_struct cyan3;
extern color_struct cyan4;
extern color_struct teal;
extern color_struct mediumturquoise;
extern color_struct lightseagreen;
extern color_struct manganeseblue;
extern color_struct turquoise;
extern color_struct coldgrey;
extern color_struct turquoiseblue;
extern color_struct aquamarine1;
extern color_struct aquamarine2;
extern color_struct aquamarine3;
extern color_struct aquamarine4;
extern color_struct mediumspringgreen;
extern color_struct mintcream;
extern color_struct springgreen;
extern color_struct springgreen1;
extern color_struct springgreen2;
extern color_struct springgreen3;
extern color_struct mediumseagreen;
extern color_struct seagreen1;
extern color_struct seagreen2;
extern color_struct seagreen3;
extern color_struct seagreen4;
extern color_struct emeraldgreen;
extern color_struct mint;
extern color_struct cobaltgreen;
extern color_struct honeydew1;
extern color_struct honeydew2;
extern color_struct honeydew3;
extern color_struct honeydew4;
extern color_struct darkseagreen;
extern color_struct darkseagreen1;
extern color_struct darkseagreen2;
extern color_struct darkseagreen3;
extern color_struct darkseagreen4;
extern color_struct palegreen;
extern color_struct palegreen1;
extern color_struct palegreen2;
extern color_struct palegreen3;
extern color_struct palegreen4;
extern color_struct limegreen;
extern color_struct forestgreen;
extern color_struct green1;
extern color_struct green2;
extern color_struct green3;
extern color_struct green4;
extern color_struct green;
extern color_struct darkgreen;
extern color_struct sapgreen;
extern color_struct lawngreen;
extern color_struct chartreuse1;
extern color_struct chartreuse2;
extern color_struct chartreuse3;
extern color_struct chartreuse4;
extern color_struct greenyellow;
extern color_struct darkolivegreen1;
extern color_struct darkolivegreen2;
extern color_struct darkolivegreen3;
extern color_struct darkolivegreen4;
extern color_struct darkolivegreen;
extern color_struct olivedrab;
extern color_struct olivedrab1;
extern color_struct olivedrab2;
extern color_struct olivedrab3;
extern color_struct olivedrab4;
extern color_struct ivory1;
extern color_struct ivory2;
extern color_struct ivory3;
extern color_struct ivory4;
extern color_struct beige;
extern color_struct lightyellow1;
extern color_struct lightyellow2;
extern color_struct lightyellow3;
extern color_struct lightyellow4;
extern color_struct lightgoldenrodyellow;
extern color_struct yellow1;
extern color_struct yellow2;
extern color_struct yellow3;
extern color_struct yellow4;
extern color_struct warmgrey;
extern color_struct olive;
extern color_struct darkkhaki;
extern color_struct khaki1;
extern color_struct khaki2;
extern color_struct khaki3;
extern color_struct khaki4;
extern color_struct khaki;
extern color_struct palegoldenrod;
extern color_struct lemonchiffon1;
extern color_struct lemonchiffon2;
extern color_struct lemonchiffon3;
extern color_struct lemonchiffon4;
extern color_struct lightgoldenrod1;
extern color_struct lightgoldenrod2;
extern color_struct lightgoldenrod3;
extern color_struct lightgoldenrod4;
extern color_struct banana;
extern color_struct gold1;
extern color_struct gold2;
extern color_struct gold3;
extern color_struct gold4;
extern color_struct cornsilk1;
extern color_struct cornsilk2;
extern color_struct cornsilk3;
extern color_struct cornsilk4;
extern color_struct goldenrod;
extern color_struct goldenrod1;
extern color_struct goldenrod2;
extern color_struct goldenrod3;
extern color_struct goldenrod4;
extern color_struct darkgoldenrod;
extern color_struct darkgoldenrod1;
extern color_struct darkgoldenrod2;
extern color_struct darkgoldenrod3;
extern color_struct darkgoldenrod4;
extern color_struct orange1;
extern color_struct orange2;
extern color_struct orange3;
extern color_struct orange4;
extern color_struct floralwhite;
extern color_struct oldlace;
extern color_struct wheat;
extern color_struct wheat1;
extern color_struct wheat2;
extern color_struct wheat3;
extern color_struct wheat4;
extern color_struct moccasin;
extern color_struct papayawhip;
extern color_struct blanchedalmond;
extern color_struct navajowhite1;
extern color_struct navajowhite2;
extern color_struct navajowhite3;
extern color_struct navajowhite4;
extern color_struct eggshell;
// Had to change following line from tan to tan0 to avoid conflict with math function
extern color_struct tan0;
extern color_struct brick;
extern color_struct cadmiumyellow;
extern color_struct antiquewhite;
extern color_struct antiquewhite1;
extern color_struct antiquewhite2;
extern color_struct antiquewhite3;
extern color_struct antiquewhite4;
extern color_struct burlywood;
extern color_struct burlywood1;
extern color_struct burlywood2;
extern color_struct burlywood3;
extern color_struct burlywood4;
extern color_struct bisque1;
extern color_struct bisque2;
extern color_struct bisque3;
extern color_struct bisque4;
extern color_struct melon;
extern color_struct carrot;
extern color_struct darkorange;
extern color_struct darkorange1;
extern color_struct darkorange2;
extern color_struct darkorange3;
extern color_struct darkorange4;
extern color_struct orange;
extern color_struct tan1;
extern color_struct tan2;
extern color_struct tan3;
extern color_struct tan4;
extern color_struct linen;
extern color_struct peachpuff1;
extern color_struct peachpuff2;
extern color_struct peachpuff3;
extern color_struct peachpuff4;
extern color_struct seashell1;
extern color_struct seashell2;
extern color_struct seashell3;
extern color_struct seashell4;
extern color_struct sandybrown;
extern color_struct rawsienna;
extern color_struct chocolate;
extern color_struct chocolate1;
extern color_struct chocolate2;
extern color_struct chocolate3;
extern color_struct chocolate4;
extern color_struct ivoryblack;
extern color_struct flesh;
extern color_struct cadmiumorange;
extern color_struct burntsienna;
extern color_struct sienna;
extern color_struct sienna1;
extern color_struct sienna2;
extern color_struct sienna3;
extern color_struct sienna4;
extern color_struct lightsalmon1;
extern color_struct lightsalmon2;
extern color_struct lightsalmon3;
extern color_struct lightsalmon4;
extern color_struct coral;
extern color_struct orangered1;
extern color_struct orangered2;
extern color_struct orangered3;
extern color_struct orangered4;
extern color_struct sepia;
extern color_struct darksalmon;
extern color_struct salmon1;
extern color_struct salmon2;
extern color_struct salmon3;
extern color_struct salmon4;
extern color_struct coral1;
extern color_struct coral2;
extern color_struct coral3;
extern color_struct coral4;
extern color_struct burntumber;
extern color_struct tomato1;
extern color_struct tomato2;
extern color_struct tomato3;
extern color_struct tomato4;
extern color_struct salmon;
extern color_struct mistyrose1;
extern color_struct mistyrose2;
extern color_struct mistyrose3;
extern color_struct mistyrose4;
extern color_struct snow1;
extern color_struct snow2;
extern color_struct snow3;
extern color_struct snow4;
extern color_struct rosybrown;
extern color_struct rosybrown1;
extern color_struct rosybrown2;
extern color_struct rosybrown3;
extern color_struct rosybrown4;
extern color_struct lightcoral;
extern color_struct indianred0;
extern color_struct indianred1;
extern color_struct indianred2;
extern color_struct indianred4;
extern color_struct indianred3;
extern color_struct brown;
extern color_struct brown1;
extern color_struct brown2;
extern color_struct brown3;
extern color_struct brown4;
extern color_struct firebrick;
extern color_struct firebrick1;
extern color_struct firebrick2;
extern color_struct firebrick3;
extern color_struct firebrick4;
extern color_struct red1;
extern color_struct red2;
extern color_struct red3;
extern color_struct red4;
extern color_struct maroon;
extern color_struct sgibeet;
extern color_struct sgislateblue;
extern color_struct sgilightblue;
extern color_struct sgiteal;
extern color_struct sgichartreuse;
extern color_struct sgiolivedrab;
extern color_struct sgibrightgray;
extern color_struct sgisalmon;
extern color_struct sgidarkgray;
extern color_struct sgigray12;
extern color_struct sgigray16;
extern color_struct sgigray32;
extern color_struct sgigray36;
extern color_struct sgigray52;
extern color_struct sgigray56;
extern color_struct sgilightgray;
extern color_struct sgigray72;
extern color_struct sgigray76;
extern color_struct sgigray92;
extern color_struct sgigray96;
extern color_struct white;
extern color_struct whitesmoke;
extern color_struct gainsboro;
extern color_struct lightgrey;
extern color_struct silver;
extern color_struct darkgray;
extern color_struct gray;
extern color_struct dimgray;
extern color_struct black;
extern color_struct gray99;
extern color_struct gray98;
extern color_struct gray97;
extern color_struct gray96;
extern color_struct gray95;
extern color_struct gray94;
extern color_struct gray93;
extern color_struct gray92;
extern color_struct gray91;
extern color_struct gray90;
extern color_struct gray89;
extern color_struct gray88;
extern color_struct gray87;
extern color_struct gray86;
extern color_struct gray85;
extern color_struct gray84;
extern color_struct gray83;
extern color_struct gray82;
extern color_struct gray81;
extern color_struct gray80;
extern color_struct gray79;
extern color_struct gray78;
extern color_struct gray77;
extern color_struct gray76;
extern color_struct gray75;
extern color_struct gray74;
extern color_struct gray73;
extern color_struct gray72;
extern color_struct gray71;
extern color_struct gray70;
extern color_struct gray69;
extern color_struct gray68;
extern color_struct gray67;
extern color_struct gray66;
extern color_struct gray65;
extern color_struct gray64;
extern color_struct gray63;
extern color_struct gray62;
extern color_struct gray61;
extern color_struct gray60;
extern color_struct gray59;
extern color_struct gray58;
extern color_struct gray57;
extern color_struct gray56;
extern color_struct gray55;
extern color_struct gray54;
extern color_struct gray53;
extern color_struct gray52;
extern color_struct gray51;
extern color_struct gray50;
extern color_struct gray49;
extern color_struct gray48;
extern color_struct gray47;
extern color_struct gray46;
extern color_struct gray45;
extern color_struct gray44;
extern color_struct gray43;
extern color_struct gray42;
extern color_struct gray41;
extern color_struct gray40;
extern color_struct gray39;
extern color_struct gray38;
extern color_struct gray37;
extern color_struct gray36;
extern color_struct gray35;
extern color_struct gray34;
extern color_struct gray33;
extern color_struct gray32;
extern color_struct gray31;
extern color_struct gray30;
extern color_struct gray29;
extern color_struct gray28;
extern color_struct gray27;
extern color_struct gray26;
extern color_struct gray25;
extern color_struct gray24;
extern color_struct gray23;
extern color_struct gray22;
extern color_struct gray21;
extern color_struct gray20;
extern color_struct gray19;
extern color_struct gray18;
extern color_struct gray17;
extern color_struct gray16;
extern color_struct gray15;
extern color_struct gray14;
extern color_struct gray13;
extern color_struct gray12;
extern color_struct gray11;
extern color_struct gray10;
extern color_struct gray9;
extern color_struct gray8;
extern color_struct gray7;
extern color_struct gray6;
extern color_struct gray5;
extern color_struct gray4;
extern color_struct gray3;
extern color_struct gray2;
extern color_struct gray1;

#endif
