@charset "utf-8";
/*======结构样式=======*/
fieldset {
	padding: 4px;
}
legend {
	font-weight: bold;
}
textarea {
	
}
/*FOR IE*/
* html input.text_nor {
	padding: 0 2px;
}
/*FOR FF*/
*>input[type="text"],*>input[type="password"] { 
	padding: 1px 2px;
}
*>input[type="text"]:hover,*>input[type="password"]:hover{
	padding: 1px 2px;
	}
*>input[type="text"]:focus,*>input[type="password"]:focus{
	padding: 1px 2px;
	}
input.text_tishi {
	padding: 0 2px;
	color: #ccc;
}
/*无边框*/
input.text_nobd {
	border: 0px;
	padding: 0 2px;
}
input.text_nobd:hover {
	border: 0px;
	padding: 0 2px;
	background:none;
	cursor:default;
}

/*实线下划线*/
input.text_udline {
	border: 0px;	
	padding: 0 2px;
}
input.text_udline:hover {
	border: 0px;
	padding: 0 2px;
	background:none;
}

/*虚线下划线*/
input.text_dashed {
	border: 0px;
	padding: 0 2px;
}
input.text_dashed:hover {
	border: 0px;
	padding: 0 2px;
	background:none;
}

/*======================全局按钮样式===============*/
button,.button {
	padding: 0 4px;
	cursor: pointer;
	margin: 0 2px;
	letter-spacing: 0.2em;
	height: 20px;
}

button:hover,.button:hover {
	padding: 0 4px;
	cursor: pointer;
	margin: 0 2px;
	letter-spacing: 0.2em;
	height: 20px;
}

*>button,*>.button { /*for modern browser*/
	outline: 1px solid #8AA4C4;
	border: 1px solid #fff !important;
	height: 20px;
}

* html button,* html .button { /*for IE 6.0/IE 5.*/
	height: 20px;
}

/*===========================按钮条样式===================*/
.buttonbox ul li button,.buttonbox ul li input{
	border-width: 0;
	outline-width: 0;
	border-width: 0 !important;
	height: 19px!important;
	letter-spacing: 0em!important;
	margin:0px!important;
	text-align:left;
	padding-left:1.5em;
	padding-right:0!important;
	cursor:pointer;
}
*>.buttonbox ul li button,*>.buttonbox ul li input{
	padding:auto!imortant;
	text-align:left;
	}
/*for modern browser*/
.buttonbox ul li button:hover,.buttonbox ul li input:hover{
	
}
/*暂无*/
.buttonbox .btn_none {
	background-position: -250px 0;
}
.buttonbox .btn_none:hover {
	background-position: -250px 0;
}
/*增加*/
.buttonbox .btn_zj {
	background-position: -50px 0;
}
.buttonbox .btn_zj:hover {
	background-position: -50px 0;
}
/*新建文件夹*/
.buttonbox .btn_xjwjj {
	background-position: -150px 0;
}
.buttonbox .btn_xjwjj:hover {
	background-position: -150px 0;
}
/*修改*/
.buttonbox .btn_xg {
	background-position: -50px -18px;
}
.buttonbox .btn_xg:hover {
	background-position: -50px -18px;
}
/*删除*/
.buttonbox .btn_sc {
	background-position: -50px -36px;
}
.buttonbox .btn_sc:hover {
	background-position: -50px -36px;
}
/*查询*/
.buttonbox .btn_cx {
	background-position: -50px -54px;
}
.buttonbox .btn_cx:hover {
	background-position: -50px -54px;
}
/*统计*/
.buttonbox .btn_tj {
	background-position: -50px -72px;
}
.buttonbox .btn_tj:hover {
	background-position: -50px -72px;
}
/*导入*/
.buttonbox .btn_dr {
	background-position: -50px -90px;
}
.buttonbox .btn_dr:hover {
	background-position: -50px -90px;
}
/*导出*/
.buttonbox .btn_dc {
	background-position: -50px -108px;
}
.buttonbox .btn_dc:hover {
	background-position: -50px -108px;
}
/*上传*/
.buttonbox .btn_shangc {
	background-position: -50px -126px;
}
.buttonbox .btn_shangc:hover {
	background-position: -50px -126px;
}
/*下载*/
.buttonbox .btn_xz {
	background-position: -50px -144px;
}
.buttonbox .btn_xz:hover {
	background-position: -50px -144px;
}
/*打印*/
.buttonbox .btn_dy {
	background-position: -50px -162px;
}
.buttonbox .btn_dy:hover {
	background-position: -50px -162px;
}
/*保存*/
.buttonbox .btn_bc {
	background-position: -50px -180px;
}
.buttonbox .btn_bc:hover {
	background-position: -50px -180px;
}
/*返回*/
.buttonbox .btn_fh {
	background-position: -50px -198px;
}
.buttonbox .btn_fh:hover {
	background-position: -50px -198px;
}
/*刷新*/
.buttonbox .btn_sx {
	background-position: -50px -216px;
}
.buttonbox .btn_sx:hover {
	background-position: -50px -216px;
}
/*查看*/
.buttonbox .btn_ck {
	background-position: -50px -234px;
}
.buttonbox .btn_ck:hover {
	background-position: -50px -234px;
}
/*设置*/
.buttonbox .btn_sz {
	background-position: -50px -252px;
}
.buttonbox .btn_sz:hover {
	background-position: -50px -252px;
}
/*发送*/
.buttonbox .btn_fs {
	background-position: -50px -270px;
}
.buttonbox .btn_fs:hover {
	background-position: -50px -270px;
}
/*授权*/
.buttonbox .btn_sq {
	background-position: -50px -288px;
}
.buttonbox .btn_sq:hover {
	background-position: -50px -288px;
}
/*审核*/
.buttonbox .btn_sh {
	background-position: -50px -306px;
}
.buttonbox .btn_sh:hover {
	background-position: -50px -306px;
}
/*清空*/
.buttonbox .btn_qk {
	background-position: -50px -324px;
}
.buttonbox .btn_qk:hover {
	background-position: -50px -324px;
}
/*初始化*/
.buttonbox .btn_csh {
	background-position: -50px -342px;
}
.buttonbox .btn_csh:hover {
	background-position: -50px -342px;
}
/*密码*/
.buttonbox .btn_mm {
	background-position: -50px -360px;
}
.buttonbox .btn_mm:hover {
	background-position: -50px -360px;
}
/*修改重置密码*/
.buttonbox .btn_mmxg {
	background-position: -50px -378px;
}
.buttonbox .btn_mmxg:hover {
	background-position: -50px -378px;
}
/*====单独使用的图标=========*//*====word修改状的图标=======*/
.ico-word{
	background-position: -50px -200px;
	padding-left:1.4em;
	display:block;
	margin-right:10px;
	}
/*=====Start====通用数据类型表格样式=========*/
.datelist {
	border-collapse: collapse;
	width: 100%;
	margin: 2px auto;
}

.datelist caption {
	font-size: 100%;
	font-weight: bold;
	display: none;
}

.datelist thead th,.datelist thead td,.datelisthead td,.datelisthead td:hover{
	padding:0.2em 0.3em;
	cursor:pointer;
	text-align:left;
}
.datelist thead tr:hover{
	background-color: transparent;
	color: inherit;
}
.datelist th,.datelist td{
	text-align: left;
	padding: 0.2em 0.3em;
	/*vertical-align: middle;*/
}
.datelist tbody td,.datelist tbody th{
	border-bottom: 1px solid #ccc;
	padding: 0.2em 0.5em;
	height:20px;
	line-height:20px;
	/*vertical-align: middle;*/
}
.datelist td a,.datelist th a{
	color:blue;
}
.datelist tr:hover{
	cursor:default;
}
.datelist tr.alt{
}
.datelist tr.current{
	cursor:default
}

/*=====End====通用数据类型表格样式=========*/

/*=====Start====通用表单类型表格样式=========*/
.formlist,.opentable{
	border-collapse: collapse;
	width: 100%;
	margin: 2px auto;
	text-align:left;
}

.formlist caption{
	text-align: left;
	font-weight: bold;
	font-size: 120%;
	display:none;
}

.formlist th,.formlist td,.opentable th,.opentable td{
	padding: 0.5em 0.6em;
	vertical-align: middle;
}
.formlist th,.opentable th{
	text-align:right;
	}
.formlist td:hover,.opentable td:hover{
}

.formlist label.heading{
	margin-right: 6px;
}
/*=====End====通用表单类型表格样式=========*/
/*====黑线框表格=========*/
.blacktab{
	border-collapse: collapse;
	width: 100%;
	margin: 2px auto;
	}
.blacktab th,.blacktab td{
	padding: 0.5em 0.6em;
	vertical-align: middle;
}
/*====红色表格=========*/
.redtab{
	border-collapse: collapse;
	width: 100%;
	margin: 2px auto;
	}
.redtab caption{
	padding:10px 0;
	font-size:25px;
	font-weight:bold;
	}
.redtab th,.redtab td{
	padding: 1em 0.6em;
	text-align:left;
	vertical-align: middle;
}
.redtab th{
	text-align:right;
	}
.redtab input{
	}
/*============表格换行等样式==============*/
.nowrap td,.nowrap th{
	white-space:nowrap;/*=该表格强制不换行=*/
	}
.pre th ,.pre th{
	white-space:nowrap;/*=强制显示预先格式化的文本=*/
	}
/*=========打印预览页面===========*/
.printview{
	width:95%;
	margin:0 auto;
	text-align:center;
	}
.printview h3{
	font-size:15px;
	font-weight:bold;
	padding:10px 0;
	}
.printview_button{
	padding:5px 0;
	}
.wordbreak{
	word-break:break-all;
	word-wrap: break-word;
}