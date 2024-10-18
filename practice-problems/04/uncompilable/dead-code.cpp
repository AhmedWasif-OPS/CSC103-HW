/* "Dead code" is code that will never be executed (the flow of control will
 * never reach those statements).  For example: */

if (true == false) {
	cout << "I'm dead\n";
}

/* Now consider a general if / else if... statement like this: */

if (A) {
	X();
} else if (B) {
	Y();
} else if (C) {
	Z();
} else {
	W();
}

/* TODO: perhaps thinking in terms of Venn diagrams corresponding to the
 * conditions A,B,C, try to describe as precisely as you can when:
 *   - X(); will be dead code
 *   - Y(); will be dead code
 *   - Z(); will be dead code
 *   - W(); will be dead code
 * See if you can generalize the result to an arbitrary number of conditions.
 * */

/* MY ANSWER:

X() will be dead code when not A
Y() will be dead code when A and not B
Z() will be dead code when A, B, and not C
W() will be dead code when A, B, or C

So when A: Y(), Z(), and W() are all dead code
when B: X(), Z(), and W() are all dead code
when C: X(), Y(), and W() are all dead code
and when its not A, B, or C, then X(), Y(), and Z() are all dead code

*/



// vim:foldlevel=2
