/*-------------------------------------------------------*/
/* util/restoregem.c    ( YZU_CSE WindTop 2000 )         */
/*-------------------------------------------------------*/
/* target : 將備份的資料夾中的所有使用者復原             */
/*          於某次使用者硬碟損毀時所建立                 */
/* create : 2000/06/08                                   */
/* update :                                              */
/*-------------------------------------------------------*/

#include "bbs.h"

static void
reaper(
    const char *lowid)
{
    char buf[256];
    sprintf(buf, "/var/tape/gem/%s", lowid);
    PROC_CMD("/bin/tar", "zxvf", buf);
}

static void
traverse(
    char *fpath)
{
    DIR *dirp;
    struct dirent *de;
    char *fname;

    if (!(dirp = opendir(fpath)))
    {
        return;
    }

    while ((de = readdir(dirp)))
    {
        fname = de->d_name;
        if (fname[0] > ' ' && fname[0] != '.')
        {
            reaper(fname);
        }
    }
    closedir(dirp);
}

int
main(void)
{
    char fpath[256];

    strcpy(fpath, "/var/tape/gem");

    setgid(BBSGID);
    setuid(BBSUID);
    chdir(BBSHOME "/gem/brd");
    traverse(fpath);
    return 0;
}
