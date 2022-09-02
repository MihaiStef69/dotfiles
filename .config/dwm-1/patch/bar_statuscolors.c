int
width_statuscolors(Bar *bar, BarArg *a)
{
	return textw_wosc(stext);
}


int
draw_statuscolors(Bar *bar, BarArg *a)
{
	return draw_wosc(bar, a, stext);
}


int
click_statuscolors(Bar *bar, Arg *arg, BarArg *a)
{
	return ClkStatusText;
}

int
textw_wosc(char *s)
{
	char *ts = s;
	char *tp = s;
	int sw = 0;
	char ctmp;
	while (1) {
		if ((unsigned int)*ts > LENGTH(colors)) {
			ts++;
			continue;
		}
		ctmp = *ts;
		*ts = '\0';
		sw += drw_fontset_getwidth(drw, tp, True);
		*ts = ctmp;
		if (ctmp == '\0')
			break;
		tp = ++ts;
	}

	return sw;
}

int
draw_wosc(Bar *bar, BarArg *a, char *s)
{
	char *ts = s;
	char *tp = s;
	int tx = 0;
	char ctmp;

	while (1) {
		if ((unsigned int)*ts > LENGTH(colors)) {
			ts++;
			continue;
		}
		ctmp = *ts;
		*ts = '\0';
		drw_text(drw, a->x + tx, a->y, a->w - tx, a->h, 0, tp, 0, True);
		tx += TEXTW(tp) - lrpad;
		if (ctmp == '\0')
			break;
		drw_setscheme(drw, scheme[(unsigned int)(ctmp-1)]);
		*ts = ctmp;
		tp = ++ts;
	}

	return 1;
}
