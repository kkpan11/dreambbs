/*-------------------------------------------------------*/
/* theme.h	( NTHU CS MapleBBS Ver 3.10 )		         */
/*-------------------------------------------------------*/
/* target : custom theme				                 */
/* create : 09/07/28				 	                 */
/* update : 17/07/26  				 	                 */
/*-------------------------------------------------------*/


#ifndef	_THEME_H_
#define	_THEME_H_

/* ----------------------------------------------------- */
/* 暫存區				 */
/* ----------------------------------------------------- */

#define NEWMAILMSG "\033[41;37;5m 郵差衝進來了! \033[0;1;33;44m"
#define NEWPASSMSG "\033[42;37;5m 收到神秘留言! \033[0;1;33;44m"

#define ICON_GAMBLED_BRD        "\033[1;31m賭\033[m"    /* 舉行賭盤中的看板 */
#define ICON_VOTED_BRD          "\033[1;33m投\033[m"    /* 舉行投票中的看板 */

//下一次推文時間限制
#define NEXTPUSHTIME 15

/* ----------------------------------------------------- */
/* 基本顏色定義，以利介面修改				 */
/* ----------------------------------------------------- */

#define ANSIRESET	"\033[m"	    /* 終止顏色 */

#define COLOR1		"\033[34;46m"	/* footer 的前段顏色 */
#define COLOR2		"\033[31;47m"	/* footer 的後段顏色 */
#define COLOR3		"\033[30;47m"	/* neck 的顏色 */
#define COLOR4		"\033[1;44m"	/* 光棒 的顏色 */
#define COLOR5		"\033[34;47m"	/* more 檔頭的標題顏色 */
#define COLOR6		"\033[37;44m"	/* more 檔頭的內容顏色 */
#define COLOR7		"\033[0m"	    /* 作者在線上的顏色 */


/* ----------------------------------------------------- */
/* 使用者名單顏色					 */
/* ----------------------------------------------------- */

#define         COLOR_PAL       "\033[1;32m"
#define         COLOR_BAD       "\033[1;31m"
#define         COLOR_CLOAK     "\033[1;35m"
#define         COLOR_BOTH      "\033[1;36m"
#define         COLOR_OPAL      "\033[1;33m"
#define		    COLOR_BOARDPAL	"\033[36m"

/* ----------------------------------------------------- */
/* 選單位置						 */
/* ----------------------------------------------------- */



/* ----------------------------------------------------- */
/* 訊息字串：*_neck() 時的 necker 都抓出來定義在這	 */
/* ----------------------------------------------------- */

#define NECKBOARD "[←]主選單 [→]閱\讀 [↑↓]選擇 [c]篇數 [y]載入 [/]搜尋 [s]看板 [h]說明\n\
\x1b[30;47m  %-7s看  板            %-33s人氣 板    主     \x1b[m"

//#define NECKGEM1 "\
//[←]離開 [→]瀏覽 [f]模式 [C]暫存 [F]轉寄 [Z]下載 [h]說明   "

#define NECKGEM1 "\
[←]離開 [→]瀏覽 [f]模式 [C]暫存 [h]說明   "
/*r2.20170802: disable some tips in case of confusion*/

#define NECKGEM2 "\033[44m\
  編號     主              題                            [編      選] [日  期]\033[m"

#define NECKPOST "\
[←]離開 [→]閱\讀 [^P]發表 [b]備忘錄 [d]刪除 [V]投票 [TAB]精華區 [h]說明\n\
\033[30;47m  編號    日 期  作  者       文  章  標  題                                  \033[m"

#define NECKMAIL "\
[←]離開 [→,r]讀信 [d]刪除 [R]回信 [s]寄信 [x]轉貼 [y]群組回信 [h]說明\n\033[44m\
 編號    日 期  作 者          信  件  標  題                                 \033[m"

#define NECKVOTE "\
		 [←]離開 [v]投票 [R]結果 [E]修改 [^P]舉行 [^Q]查詢/中止/改期 [h]說明\n\033[44m\
		 編號  開票日  主辦人       投  票  宗  旨                                   \033[m"

#define NECKINNBBS	"[←]離開 [^P]新增 [d]刪除 [E]編輯 [/]搜尋 [Enter]詳細\n" \
			COLOR3 "  編號            內         容%*s                                               \033[m"


// cache.101119

#define NECKER_VOTE     "[←]離開 [R]結果 [^P]舉行 [E]修改 [V]預覽 [^Q]改期 [o]名單 [h]說明\n" \

#define NECKER_VOTEALL  "[↑/↓]上下 [PgUp/PgDn]上下頁 [Home/End]首尾 [→]投票 [←][q]離開\n" \


/* ----------------------------------------------------- */
/* 訊息字串：xo_foot() 時的 footer 都抓出來定義在這      */
/* ----------------------------------------------------- */


#define FOOTER_POST	\
COLOR1 " 文章選讀 " COLOR2 " (ry)回應 (=\\[]<>-+;'`)主題 (|?QA)搜尋標題作者 (kj)上下篇 (C)暫存   "

#define FOOTER_MORE	\
COLOR1 " 瀏覽 P.%d (%d%%) " COLOR2 " (h)說明 [PgUp][PgDn][0][$]移動 (/n)搜尋 (C)暫存 (←q)結束 "


#define FOOTER_INNBBS	\
COLOR1 " 轉信設定 " COLOR2 " (↑/↓)上下 (PgUp/PgDn)上下頁 (Home/End)首尾 (←)(q)離開           "

#define FOOTER_VOTEALL  \
	COLOR1 " 投票中心 " COLOR2 " (↑/↓)上下 (PgUp/PgDn)上下頁 (Home/End)首尾 (→)投票 (←)(q)離開  "

/* ----------------------------------------------------- */
/* 站簽：站台來源簽名                                    */
/* ----------------------------------------------------- */

#ifndef ORIGIN_TAG
#define ORIGIN_TAG \
"--\n" \
"\033[1;44;32m  ◢\033[0;32;44m◣   \033[1;37m︵︵     \033[30m█▔◣ █▔█ █▔▔ █▔█ █▆▉ █   █▔█ █◣█ █▔\033[31m● \033[m\n" \
"\033[1;32;44m◢\033[42m◤\033[0;44;32m█◣\033[1m◢\033[0;32;44m◣ \033[1;37m︵︵ \033[0;37;44m█  █ █▁◤ █▁▁ █▁█ ▉▉▉ █   █▁█ █◥█ █  █ \033[m\n" \
"\033[1;36;42m夢之大地 逼逼ㄟ四 \033[37m█▁◤ █  █ █▁▁ █  █ ▉▉▉ █▁ █  █ █  █ █▁◤ \033[m\n" \
"\033[1;32m※ Origin:\033[33m <bbs.ccns.ncku.edu.tw>  \033[31m◆ From:\033[36m %-34.34s \033[m\n"
#endif  // ORIGIN_TAG

#define MODIFY_TAG "\033[1;32m※ Modify: \033[33m<%s> \033[m%s"

#define ANONYMOUS_TAG "--\n\033[1;32m※ Origin: \033[33m%s \033[37m<%s> \033[m\n\033[1;31m◆ From: \033[36m%s\033[m\n"

#define EMAIL_TAG "\033[1;32m※ E-mail: \033[36m%s\033[m\n"

/* ----------------------------------------------------- */
/* 其他訊息字串						 */
/* ----------------------------------------------------- */

#endif				/* _THEME_H_ */
