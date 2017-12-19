<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,393);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",433,491);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",509,541);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("include","",674,709);
$z[6][4]['filename']="head.htm";
$z[7]=Array("field","",792,850);
$z[7][4]['name']="typeid";
$z[7][4]['function']="GetTopTypename(@me)";
$z[8]=Array("channel","\r\n          <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n          ",944,1065);
$z[8][4]['type']="son";
$z[9]=Array("field","",1253,1282);
$z[9][4]['name']="position";
$z[10]=Array("list","\r\n          <li>[field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>\"); [/field:array] </br>\r\n            <a href=\"[field:arcurl/]\" class=\"title\">[field:title/]</a> </li>\r\n          ",1386,1689);
$z[10][4]['pagesize']="12";
$z[11]=Array("pagelist","",1793,1864);
$z[11][4]['listitem']="info,index,end,pre,next,pageno";
$z[11][4]['listsize']="5";
$z[12]=Array("include","",1925,1962);
$z[12][4]['filename']="footer.htm";

?>