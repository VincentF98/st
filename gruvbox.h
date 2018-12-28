/* gruvbox-dark colorscheme */

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	"#32302f", /* hard contrast: #1d2021 / soft contrast: #32302f */
	"#cc241d",
	"#98971a",
	"#d79921",
	"#458588",
	"#b16286",
	"#689d6a",
	"#a89984",
	"#928374",
	"#fb4934",
	"#b8bb26",
	"#fabd2f",
	"#83a598",
	"#d3869b",
	"#8ec07c",
	"#ebdbb2",
};

static const char *altcolorname[] = {
	"#f2e5bc", /* hard contrast: #f9f5d7 / soft contrast: #f2e5bc */
	"#cc241d",
	"#98971a",
	"#d79921",
	"#458588",
	"#b16286",
	"#689d6a",
	"#7c6f64",
	"#928374",
	"#9d0006",
	"#79740e",
	"#b57614",
	"#076678",
	"#8f3f71",
	"#427b58",
	"#3c3836",
};

/*
	* Default colors (colorname index)
	* foreground, background, cursor
	*/
unsigned int defaultfg = 15;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 15;
static unsigned int defaultrcs = 15;
int usealtcolors = 0;
static unsigned int fadecolorindex = 0;

unsigned int alpha = 0xEE;
unsigned int fadeamount = 40;
