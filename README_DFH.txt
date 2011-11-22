This fork has several features, fixes, and options not in the original repository:

- it's been ARCified

- an image drawing routine can now draw the popup box with either a flat or gradient background. This makes it posssible to perfectly add an arrow to the rounded rect and put a border around it without getting pixel fractions. To get this add the define "-DDRAW_IMAGES" to your project define list or add to the pch file.

- see the DFH comment in WEPopoverTableViewController.m to force an orientation for testing.

- the routine that sizes and places the popup will now place the popup over the navigation bar, and properly restricts the view to the visible area (warnings added to the sister image drawing method if someone wants to do the same for those.

- the shadow feature was not working, now it is. It seems clipsToBounds has to be set or unset in the init routine not later for this to work (see  comments marked with DFH).

- some other dubious code commented out (with DFH) - if someone can explain why it should be reenabled let me know.

- I am willing to support this as a prime fork (since the original author has seeminly abandoned it). So give me pull requests and I will integrate.