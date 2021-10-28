<!DOCTYPE html>
<html lang='en'>
<head>
<title>red.h « net « include - kernel/git/torvalds/linux.git - Linux kernel source tree</title>
<meta name='generator' content='cgit 1.2.3-1.el7'/>
<meta name='robots' content='noindex, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit-data/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/atom/include/net/red.h?h=master' type='application/atom+xml'/>
<link rel='vcs-git' href='git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git' title='kernel/git/torvalds/linux.git Git repository'/>
<link rel='vcs-git' href='https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git' title='kernel/git/torvalds/linux.git Git repository'/>
<link rel='vcs-git' href='https://kernel.googlesource.com/pub/scm/linux/kernel/git/torvalds/linux.git' title='kernel/git/torvalds/linux.git Git repository'/>
</head>
<body>
<div id='cgit'><table id='header'>
<tr>
<td class='logo' rowspan='2'><a href='/'><img src='/cgit-data/cgit.png' alt='cgit logo'/></a></td>
<td class='main'><a href='/'>index</a> : <a title='kernel/git/torvalds/linux.git' href='/pub/scm/linux/kernel/git/torvalds/linux.git/'>kernel/git/torvalds/linux.git</a></td><td class='form'><form method='get'>
<input type='hidden' name='id' value='bd1248f1ddbc48b0c30565fce897a3b6423313b8'/><select name='h' onchange='this.form.submit();'>
<option value='master' selected='selected'>master</option>
</select> <input type='submit' value='switch'/></form></td></tr>
<tr><td class='sub'>Linux kernel source tree</td><td class='sub right'>Linus Torvalds</td></tr></table>
<table class='tabs'><tr><td>
<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/about/'>about</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/'>summary</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/refs/?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>refs</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/log/include/net/red.h'>log</a><a class='active' href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/net/red.h?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>tree</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/commit/include/net/red.h?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>commit</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/diff/include/net/red.h?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>diff</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/stats/include/net/red.h'>stats</a></td><td class='form'><form class='right' method='get' action='/pub/scm/linux/kernel/git/torvalds/linux.git/log/include/net/red.h'>
<input type='hidden' name='id' value='bd1248f1ddbc48b0c30565fce897a3b6423313b8'/><select name='qt'>
<option value='grep'>log msg</option>
<option value='author'>author</option>
<option value='committer'>committer</option>
<option value='range'>range</option>
</select>
<input class='txt' type='search' size='10' name='q' value=''/>
<input type='submit' value='search'/>
</form>
</td></tr></table>
<div class='path'>path: <a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>root</a>/<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>include</a>/<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/net?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>net</a>/<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/net/red.h?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>red.h</a></div><div class='content'>blob: 932f0d79d60cbbab60db73baddc8b650935b3bf6 (<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/plain/include/net/red.h?id=bd1248f1ddbc48b0c30565fce897a3b6423313b8'>plain</a>)
<table summary='blob content' class='blob'>
<tr><td class='linenumbers'><pre><a id='n1' href='#n1'>1</a>
<a id='n2' href='#n2'>2</a>
<a id='n3' href='#n3'>3</a>
<a id='n4' href='#n4'>4</a>
<a id='n5' href='#n5'>5</a>
<a id='n6' href='#n6'>6</a>
<a id='n7' href='#n7'>7</a>
<a id='n8' href='#n8'>8</a>
<a id='n9' href='#n9'>9</a>
<a id='n10' href='#n10'>10</a>
<a id='n11' href='#n11'>11</a>
<a id='n12' href='#n12'>12</a>
<a id='n13' href='#n13'>13</a>
<a id='n14' href='#n14'>14</a>
<a id='n15' href='#n15'>15</a>
<a id='n16' href='#n16'>16</a>
<a id='n17' href='#n17'>17</a>
<a id='n18' href='#n18'>18</a>
<a id='n19' href='#n19'>19</a>
<a id='n20' href='#n20'>20</a>
<a id='n21' href='#n21'>21</a>
<a id='n22' href='#n22'>22</a>
<a id='n23' href='#n23'>23</a>
<a id='n24' href='#n24'>24</a>
<a id='n25' href='#n25'>25</a>
<a id='n26' href='#n26'>26</a>
<a id='n27' href='#n27'>27</a>
<a id='n28' href='#n28'>28</a>
<a id='n29' href='#n29'>29</a>
<a id='n30' href='#n30'>30</a>
<a id='n31' href='#n31'>31</a>
<a id='n32' href='#n32'>32</a>
<a id='n33' href='#n33'>33</a>
<a id='n34' href='#n34'>34</a>
<a id='n35' href='#n35'>35</a>
<a id='n36' href='#n36'>36</a>
<a id='n37' href='#n37'>37</a>
<a id='n38' href='#n38'>38</a>
<a id='n39' href='#n39'>39</a>
<a id='n40' href='#n40'>40</a>
<a id='n41' href='#n41'>41</a>
<a id='n42' href='#n42'>42</a>
<a id='n43' href='#n43'>43</a>
<a id='n44' href='#n44'>44</a>
<a id='n45' href='#n45'>45</a>
<a id='n46' href='#n46'>46</a>
<a id='n47' href='#n47'>47</a>
<a id='n48' href='#n48'>48</a>
<a id='n49' href='#n49'>49</a>
<a id='n50' href='#n50'>50</a>
<a id='n51' href='#n51'>51</a>
<a id='n52' href='#n52'>52</a>
<a id='n53' href='#n53'>53</a>
<a id='n54' href='#n54'>54</a>
<a id='n55' href='#n55'>55</a>
<a id='n56' href='#n56'>56</a>
<a id='n57' href='#n57'>57</a>
<a id='n58' href='#n58'>58</a>
<a id='n59' href='#n59'>59</a>
<a id='n60' href='#n60'>60</a>
<a id='n61' href='#n61'>61</a>
<a id='n62' href='#n62'>62</a>
<a id='n63' href='#n63'>63</a>
<a id='n64' href='#n64'>64</a>
<a id='n65' href='#n65'>65</a>
<a id='n66' href='#n66'>66</a>
<a id='n67' href='#n67'>67</a>
<a id='n68' href='#n68'>68</a>
<a id='n69' href='#n69'>69</a>
<a id='n70' href='#n70'>70</a>
<a id='n71' href='#n71'>71</a>
<a id='n72' href='#n72'>72</a>
<a id='n73' href='#n73'>73</a>
<a id='n74' href='#n74'>74</a>
<a id='n75' href='#n75'>75</a>
<a id='n76' href='#n76'>76</a>
<a id='n77' href='#n77'>77</a>
<a id='n78' href='#n78'>78</a>
<a id='n79' href='#n79'>79</a>
<a id='n80' href='#n80'>80</a>
<a id='n81' href='#n81'>81</a>
<a id='n82' href='#n82'>82</a>
<a id='n83' href='#n83'>83</a>
<a id='n84' href='#n84'>84</a>
<a id='n85' href='#n85'>85</a>
<a id='n86' href='#n86'>86</a>
<a id='n87' href='#n87'>87</a>
<a id='n88' href='#n88'>88</a>
<a id='n89' href='#n89'>89</a>
<a id='n90' href='#n90'>90</a>
<a id='n91' href='#n91'>91</a>
<a id='n92' href='#n92'>92</a>
<a id='n93' href='#n93'>93</a>
<a id='n94' href='#n94'>94</a>
<a id='n95' href='#n95'>95</a>
<a id='n96' href='#n96'>96</a>
<a id='n97' href='#n97'>97</a>
<a id='n98' href='#n98'>98</a>
<a id='n99' href='#n99'>99</a>
<a id='n100' href='#n100'>100</a>
<a id='n101' href='#n101'>101</a>
<a id='n102' href='#n102'>102</a>
<a id='n103' href='#n103'>103</a>
<a id='n104' href='#n104'>104</a>
<a id='n105' href='#n105'>105</a>
<a id='n106' href='#n106'>106</a>
<a id='n107' href='#n107'>107</a>
<a id='n108' href='#n108'>108</a>
<a id='n109' href='#n109'>109</a>
<a id='n110' href='#n110'>110</a>
<a id='n111' href='#n111'>111</a>
<a id='n112' href='#n112'>112</a>
<a id='n113' href='#n113'>113</a>
<a id='n114' href='#n114'>114</a>
<a id='n115' href='#n115'>115</a>
<a id='n116' href='#n116'>116</a>
<a id='n117' href='#n117'>117</a>
<a id='n118' href='#n118'>118</a>
<a id='n119' href='#n119'>119</a>
<a id='n120' href='#n120'>120</a>
<a id='n121' href='#n121'>121</a>
<a id='n122' href='#n122'>122</a>
<a id='n123' href='#n123'>123</a>
<a id='n124' href='#n124'>124</a>
<a id='n125' href='#n125'>125</a>
<a id='n126' href='#n126'>126</a>
<a id='n127' href='#n127'>127</a>
<a id='n128' href='#n128'>128</a>
<a id='n129' href='#n129'>129</a>
<a id='n130' href='#n130'>130</a>
<a id='n131' href='#n131'>131</a>
<a id='n132' href='#n132'>132</a>
<a id='n133' href='#n133'>133</a>
<a id='n134' href='#n134'>134</a>
<a id='n135' href='#n135'>135</a>
<a id='n136' href='#n136'>136</a>
<a id='n137' href='#n137'>137</a>
<a id='n138' href='#n138'>138</a>
<a id='n139' href='#n139'>139</a>
<a id='n140' href='#n140'>140</a>
<a id='n141' href='#n141'>141</a>
<a id='n142' href='#n142'>142</a>
<a id='n143' href='#n143'>143</a>
<a id='n144' href='#n144'>144</a>
<a id='n145' href='#n145'>145</a>
<a id='n146' href='#n146'>146</a>
<a id='n147' href='#n147'>147</a>
<a id='n148' href='#n148'>148</a>
<a id='n149' href='#n149'>149</a>
<a id='n150' href='#n150'>150</a>
<a id='n151' href='#n151'>151</a>
<a id='n152' href='#n152'>152</a>
<a id='n153' href='#n153'>153</a>
<a id='n154' href='#n154'>154</a>
<a id='n155' href='#n155'>155</a>
<a id='n156' href='#n156'>156</a>
<a id='n157' href='#n157'>157</a>
<a id='n158' href='#n158'>158</a>
<a id='n159' href='#n159'>159</a>
<a id='n160' href='#n160'>160</a>
<a id='n161' href='#n161'>161</a>
<a id='n162' href='#n162'>162</a>
<a id='n163' href='#n163'>163</a>
<a id='n164' href='#n164'>164</a>
<a id='n165' href='#n165'>165</a>
<a id='n166' href='#n166'>166</a>
<a id='n167' href='#n167'>167</a>
<a id='n168' href='#n168'>168</a>
<a id='n169' href='#n169'>169</a>
<a id='n170' href='#n170'>170</a>
<a id='n171' href='#n171'>171</a>
<a id='n172' href='#n172'>172</a>
<a id='n173' href='#n173'>173</a>
<a id='n174' href='#n174'>174</a>
<a id='n175' href='#n175'>175</a>
<a id='n176' href='#n176'>176</a>
<a id='n177' href='#n177'>177</a>
<a id='n178' href='#n178'>178</a>
<a id='n179' href='#n179'>179</a>
<a id='n180' href='#n180'>180</a>
<a id='n181' href='#n181'>181</a>
<a id='n182' href='#n182'>182</a>
<a id='n183' href='#n183'>183</a>
<a id='n184' href='#n184'>184</a>
<a id='n185' href='#n185'>185</a>
<a id='n186' href='#n186'>186</a>
<a id='n187' href='#n187'>187</a>
<a id='n188' href='#n188'>188</a>
<a id='n189' href='#n189'>189</a>
<a id='n190' href='#n190'>190</a>
<a id='n191' href='#n191'>191</a>
<a id='n192' href='#n192'>192</a>
<a id='n193' href='#n193'>193</a>
<a id='n194' href='#n194'>194</a>
<a id='n195' href='#n195'>195</a>
<a id='n196' href='#n196'>196</a>
<a id='n197' href='#n197'>197</a>
<a id='n198' href='#n198'>198</a>
<a id='n199' href='#n199'>199</a>
<a id='n200' href='#n200'>200</a>
<a id='n201' href='#n201'>201</a>
<a id='n202' href='#n202'>202</a>
<a id='n203' href='#n203'>203</a>
<a id='n204' href='#n204'>204</a>
<a id='n205' href='#n205'>205</a>
<a id='n206' href='#n206'>206</a>
<a id='n207' href='#n207'>207</a>
<a id='n208' href='#n208'>208</a>
<a id='n209' href='#n209'>209</a>
<a id='n210' href='#n210'>210</a>
<a id='n211' href='#n211'>211</a>
<a id='n212' href='#n212'>212</a>
<a id='n213' href='#n213'>213</a>
<a id='n214' href='#n214'>214</a>
<a id='n215' href='#n215'>215</a>
<a id='n216' href='#n216'>216</a>
<a id='n217' href='#n217'>217</a>
<a id='n218' href='#n218'>218</a>
<a id='n219' href='#n219'>219</a>
<a id='n220' href='#n220'>220</a>
<a id='n221' href='#n221'>221</a>
<a id='n222' href='#n222'>222</a>
<a id='n223' href='#n223'>223</a>
<a id='n224' href='#n224'>224</a>
<a id='n225' href='#n225'>225</a>
<a id='n226' href='#n226'>226</a>
<a id='n227' href='#n227'>227</a>
<a id='n228' href='#n228'>228</a>
<a id='n229' href='#n229'>229</a>
<a id='n230' href='#n230'>230</a>
<a id='n231' href='#n231'>231</a>
<a id='n232' href='#n232'>232</a>
<a id='n233' href='#n233'>233</a>
<a id='n234' href='#n234'>234</a>
<a id='n235' href='#n235'>235</a>
<a id='n236' href='#n236'>236</a>
<a id='n237' href='#n237'>237</a>
<a id='n238' href='#n238'>238</a>
<a id='n239' href='#n239'>239</a>
<a id='n240' href='#n240'>240</a>
<a id='n241' href='#n241'>241</a>
<a id='n242' href='#n242'>242</a>
<a id='n243' href='#n243'>243</a>
<a id='n244' href='#n244'>244</a>
<a id='n245' href='#n245'>245</a>
<a id='n246' href='#n246'>246</a>
<a id='n247' href='#n247'>247</a>
<a id='n248' href='#n248'>248</a>
<a id='n249' href='#n249'>249</a>
<a id='n250' href='#n250'>250</a>
<a id='n251' href='#n251'>251</a>
<a id='n252' href='#n252'>252</a>
<a id='n253' href='#n253'>253</a>
<a id='n254' href='#n254'>254</a>
<a id='n255' href='#n255'>255</a>
<a id='n256' href='#n256'>256</a>
<a id='n257' href='#n257'>257</a>
<a id='n258' href='#n258'>258</a>
<a id='n259' href='#n259'>259</a>
<a id='n260' href='#n260'>260</a>
<a id='n261' href='#n261'>261</a>
<a id='n262' href='#n262'>262</a>
<a id='n263' href='#n263'>263</a>
<a id='n264' href='#n264'>264</a>
<a id='n265' href='#n265'>265</a>
<a id='n266' href='#n266'>266</a>
<a id='n267' href='#n267'>267</a>
<a id='n268' href='#n268'>268</a>
<a id='n269' href='#n269'>269</a>
<a id='n270' href='#n270'>270</a>
<a id='n271' href='#n271'>271</a>
<a id='n272' href='#n272'>272</a>
<a id='n273' href='#n273'>273</a>
<a id='n274' href='#n274'>274</a>
<a id='n275' href='#n275'>275</a>
<a id='n276' href='#n276'>276</a>
<a id='n277' href='#n277'>277</a>
<a id='n278' href='#n278'>278</a>
<a id='n279' href='#n279'>279</a>
<a id='n280' href='#n280'>280</a>
<a id='n281' href='#n281'>281</a>
<a id='n282' href='#n282'>282</a>
<a id='n283' href='#n283'>283</a>
<a id='n284' href='#n284'>284</a>
<a id='n285' href='#n285'>285</a>
<a id='n286' href='#n286'>286</a>
<a id='n287' href='#n287'>287</a>
<a id='n288' href='#n288'>288</a>
<a id='n289' href='#n289'>289</a>
<a id='n290' href='#n290'>290</a>
<a id='n291' href='#n291'>291</a>
<a id='n292' href='#n292'>292</a>
<a id='n293' href='#n293'>293</a>
<a id='n294' href='#n294'>294</a>
<a id='n295' href='#n295'>295</a>
<a id='n296' href='#n296'>296</a>
<a id='n297' href='#n297'>297</a>
<a id='n298' href='#n298'>298</a>
<a id='n299' href='#n299'>299</a>
<a id='n300' href='#n300'>300</a>
<a id='n301' href='#n301'>301</a>
<a id='n302' href='#n302'>302</a>
<a id='n303' href='#n303'>303</a>
<a id='n304' href='#n304'>304</a>
<a id='n305' href='#n305'>305</a>
<a id='n306' href='#n306'>306</a>
<a id='n307' href='#n307'>307</a>
<a id='n308' href='#n308'>308</a>
<a id='n309' href='#n309'>309</a>
<a id='n310' href='#n310'>310</a>
<a id='n311' href='#n311'>311</a>
<a id='n312' href='#n312'>312</a>
<a id='n313' href='#n313'>313</a>
<a id='n314' href='#n314'>314</a>
<a id='n315' href='#n315'>315</a>
<a id='n316' href='#n316'>316</a>
<a id='n317' href='#n317'>317</a>
<a id='n318' href='#n318'>318</a>
<a id='n319' href='#n319'>319</a>
<a id='n320' href='#n320'>320</a>
<a id='n321' href='#n321'>321</a>
<a id='n322' href='#n322'>322</a>
<a id='n323' href='#n323'>323</a>
<a id='n324' href='#n324'>324</a>
<a id='n325' href='#n325'>325</a>
<a id='n326' href='#n326'>326</a>
<a id='n327' href='#n327'>327</a>
<a id='n328' href='#n328'>328</a>
<a id='n329' href='#n329'>329</a>
<a id='n330' href='#n330'>330</a>
<a id='n331' href='#n331'>331</a>
<a id='n332' href='#n332'>332</a>
<a id='n333' href='#n333'>333</a>
<a id='n334' href='#n334'>334</a>
<a id='n335' href='#n335'>335</a>
<a id='n336' href='#n336'>336</a>
<a id='n337' href='#n337'>337</a>
<a id='n338' href='#n338'>338</a>
<a id='n339' href='#n339'>339</a>
<a id='n340' href='#n340'>340</a>
<a id='n341' href='#n341'>341</a>
<a id='n342' href='#n342'>342</a>
<a id='n343' href='#n343'>343</a>
<a id='n344' href='#n344'>344</a>
<a id='n345' href='#n345'>345</a>
<a id='n346' href='#n346'>346</a>
<a id='n347' href='#n347'>347</a>
<a id='n348' href='#n348'>348</a>
<a id='n349' href='#n349'>349</a>
<a id='n350' href='#n350'>350</a>
<a id='n351' href='#n351'>351</a>
<a id='n352' href='#n352'>352</a>
<a id='n353' href='#n353'>353</a>
<a id='n354' href='#n354'>354</a>
<a id='n355' href='#n355'>355</a>
<a id='n356' href='#n356'>356</a>
<a id='n357' href='#n357'>357</a>
<a id='n358' href='#n358'>358</a>
<a id='n359' href='#n359'>359</a>
<a id='n360' href='#n360'>360</a>
<a id='n361' href='#n361'>361</a>
<a id='n362' href='#n362'>362</a>
<a id='n363' href='#n363'>363</a>
<a id='n364' href='#n364'>364</a>
<a id='n365' href='#n365'>365</a>
<a id='n366' href='#n366'>366</a>
<a id='n367' href='#n367'>367</a>
<a id='n368' href='#n368'>368</a>
<a id='n369' href='#n369'>369</a>
<a id='n370' href='#n370'>370</a>
<a id='n371' href='#n371'>371</a>
<a id='n372' href='#n372'>372</a>
<a id='n373' href='#n373'>373</a>
<a id='n374' href='#n374'>374</a>
<a id='n375' href='#n375'>375</a>
<a id='n376' href='#n376'>376</a>
<a id='n377' href='#n377'>377</a>
<a id='n378' href='#n378'>378</a>
<a id='n379' href='#n379'>379</a>
<a id='n380' href='#n380'>380</a>
<a id='n381' href='#n381'>381</a>
<a id='n382' href='#n382'>382</a>
<a id='n383' href='#n383'>383</a>
<a id='n384' href='#n384'>384</a>
<a id='n385' href='#n385'>385</a>
<a id='n386' href='#n386'>386</a>
<a id='n387' href='#n387'>387</a>
<a id='n388' href='#n388'>388</a>
<a id='n389' href='#n389'>389</a>
<a id='n390' href='#n390'>390</a>
<a id='n391' href='#n391'>391</a>
<a id='n392' href='#n392'>392</a>
<a id='n393' href='#n393'>393</a>
<a id='n394' href='#n394'>394</a>
<a id='n395' href='#n395'>395</a>
<a id='n396' href='#n396'>396</a>
<a id='n397' href='#n397'>397</a>
<a id='n398' href='#n398'>398</a>
<a id='n399' href='#n399'>399</a>
<a id='n400' href='#n400'>400</a>
<a id='n401' href='#n401'>401</a>
<a id='n402' href='#n402'>402</a>
<a id='n403' href='#n403'>403</a>
<a id='n404' href='#n404'>404</a>
<a id='n405' href='#n405'>405</a>
<a id='n406' href='#n406'>406</a>
<a id='n407' href='#n407'>407</a>
<a id='n408' href='#n408'>408</a>
<a id='n409' href='#n409'>409</a>
<a id='n410' href='#n410'>410</a>
<a id='n411' href='#n411'>411</a>
<a id='n412' href='#n412'>412</a>
<a id='n413' href='#n413'>413</a>
<a id='n414' href='#n414'>414</a>
<a id='n415' href='#n415'>415</a>
<a id='n416' href='#n416'>416</a>
<a id='n417' href='#n417'>417</a>
<a id='n418' href='#n418'>418</a>
<a id='n419' href='#n419'>419</a>
<a id='n420' href='#n420'>420</a>
<a id='n421' href='#n421'>421</a>
<a id='n422' href='#n422'>422</a>
<a id='n423' href='#n423'>423</a>
<a id='n424' href='#n424'>424</a>
<a id='n425' href='#n425'>425</a>
<a id='n426' href='#n426'>426</a>
<a id='n427' href='#n427'>427</a>
<a id='n428' href='#n428'>428</a>
<a id='n429' href='#n429'>429</a>
<a id='n430' href='#n430'>430</a>
<a id='n431' href='#n431'>431</a>
<a id='n432' href='#n432'>432</a>
<a id='n433' href='#n433'>433</a>
<a id='n434' href='#n434'>434</a>
<a id='n435' href='#n435'>435</a>
<a id='n436' href='#n436'>436</a>
<a id='n437' href='#n437'>437</a>
<a id='n438' href='#n438'>438</a>
<a id='n439' href='#n439'>439</a>
<a id='n440' href='#n440'>440</a>
<a id='n441' href='#n441'>441</a>
<a id='n442' href='#n442'>442</a>
<a id='n443' href='#n443'>443</a>
<a id='n444' href='#n444'>444</a>
<a id='n445' href='#n445'>445</a>
<a id='n446' href='#n446'>446</a>
<a id='n447' href='#n447'>447</a>
<a id='n448' href='#n448'>448</a>
<a id='n449' href='#n449'>449</a>
<a id='n450' href='#n450'>450</a>
<a id='n451' href='#n451'>451</a>
<a id='n452' href='#n452'>452</a>
<a id='n453' href='#n453'>453</a>
<a id='n454' href='#n454'>454</a>
<a id='n455' href='#n455'>455</a>
<a id='n456' href='#n456'>456</a>
<a id='n457' href='#n457'>457</a>
<a id='n458' href='#n458'>458</a>
</pre></td>
<td class='lines'><pre><code><style>.highlight .hll { background-color: #ffffcc }
.highlight .c { color: #888888 } /* Comment */
.highlight .err { color: #a61717; background-color: #e3d2d2 } /* Error */
.highlight .k { color: #008800; font-weight: bold } /* Keyword */
.highlight .ch { color: #888888 } /* Comment.Hashbang */
.highlight .cm { color: #888888 } /* Comment.Multiline */
.highlight .cp { color: #cc0000; font-weight: bold } /* Comment.Preproc */
.highlight .cpf { color: #888888 } /* Comment.PreprocFile */
.highlight .c1 { color: #888888 } /* Comment.Single */
.highlight .cs { color: #cc0000; font-weight: bold; background-color: #fff0f0 } /* Comment.Special */
.highlight .gd { color: #000000; background-color: #ffdddd } /* Generic.Deleted */
.highlight .ge { font-style: italic } /* Generic.Emph */
.highlight .gr { color: #aa0000 } /* Generic.Error */
.highlight .gh { color: #333333 } /* Generic.Heading */
.highlight .gi { color: #000000; background-color: #ddffdd } /* Generic.Inserted */
.highlight .go { color: #888888 } /* Generic.Output */
.highlight .gp { color: #555555 } /* Generic.Prompt */
.highlight .gs { font-weight: bold } /* Generic.Strong */
.highlight .gu { color: #666666 } /* Generic.Subheading */
.highlight .gt { color: #aa0000 } /* Generic.Traceback */
.highlight .kc { color: #008800; font-weight: bold } /* Keyword.Constant */
.highlight .kd { color: #008800; font-weight: bold } /* Keyword.Declaration */
.highlight .kn { color: #008800; font-weight: bold } /* Keyword.Namespace */
.highlight .kp { color: #008800 } /* Keyword.Pseudo */
.highlight .kr { color: #008800; font-weight: bold } /* Keyword.Reserved */
.highlight .kt { color: #888888; font-weight: bold } /* Keyword.Type */
.highlight .m { color: #0000DD; font-weight: bold } /* Literal.Number */
.highlight .s { color: #dd2200; background-color: #fff0f0 } /* Literal.String */
.highlight .na { color: #336699 } /* Name.Attribute */
.highlight .nb { color: #003388 } /* Name.Builtin */
.highlight .nc { color: #bb0066; font-weight: bold } /* Name.Class */
.highlight .no { color: #003366; font-weight: bold } /* Name.Constant */
.highlight .nd { color: #555555 } /* Name.Decorator */
.highlight .ne { color: #bb0066; font-weight: bold } /* Name.Exception */
.highlight .nf { color: #0066bb; font-weight: bold } /* Name.Function */
.highlight .nl { color: #336699; font-style: italic } /* Name.Label */
.highlight .nn { color: #bb0066; font-weight: bold } /* Name.Namespace */
.highlight .py { color: #336699; font-weight: bold } /* Name.Property */
.highlight .nt { color: #bb0066; font-weight: bold } /* Name.Tag */
.highlight .nv { color: #336699 } /* Name.Variable */
.highlight .ow { color: #008800 } /* Operator.Word */
.highlight .w { color: #bbbbbb } /* Text.Whitespace */
.highlight .mb { color: #0000DD; font-weight: bold } /* Literal.Number.Bin */
.highlight .mf { color: #0000DD; font-weight: bold } /* Literal.Number.Float */
.highlight .mh { color: #0000DD; font-weight: bold } /* Literal.Number.Hex */
.highlight .mi { color: #0000DD; font-weight: bold } /* Literal.Number.Integer */
.highlight .mo { color: #0000DD; font-weight: bold } /* Literal.Number.Oct */
.highlight .sa { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Affix */
.highlight .sb { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Backtick */
.highlight .sc { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Char */
.highlight .dl { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Delimiter */
.highlight .sd { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Doc */
.highlight .s2 { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Double */
.highlight .se { color: #0044dd; background-color: #fff0f0 } /* Literal.String.Escape */
.highlight .sh { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Heredoc */
.highlight .si { color: #3333bb; background-color: #fff0f0 } /* Literal.String.Interpol */
.highlight .sx { color: #22bb22; background-color: #f0fff0 } /* Literal.String.Other */
.highlight .sr { color: #008800; background-color: #fff0ff } /* Literal.String.Regex */
.highlight .s1 { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Single */
.highlight .ss { color: #aa6600; background-color: #fff0f0 } /* Literal.String.Symbol */
.highlight .bp { color: #003388 } /* Name.Builtin.Pseudo */
.highlight .fm { color: #0066bb; font-weight: bold } /* Name.Function.Magic */
.highlight .vc { color: #336699 } /* Name.Variable.Class */
.highlight .vg { color: #dd7700 } /* Name.Variable.Global */
.highlight .vi { color: #3333bb } /* Name.Variable.Instance */
.highlight .vm { color: #336699 } /* Name.Variable.Magic */
.highlight .il { color: #0000DD; font-weight: bold } /* Literal.Number.Integer.Long */</style><div class="highlight"><pre><span></span><span class="cm">/* SPDX-License-Identifier: GPL-2.0 */</span>
<span class="cp">#ifndef __NET_SCHED_RED_H</span>
<span class="cp">#define __NET_SCHED_RED_H</span>

<span class="cp">#include</span> <span class="cpf">&lt;linux/types.h&gt;</span><span class="cp"></span>
<span class="cp">#include</span> <span class="cpf">&lt;linux/bug.h&gt;</span><span class="cp"></span>
<span class="cp">#include</span> <span class="cpf">&lt;net/pkt_sched.h&gt;</span><span class="cp"></span>
<span class="cp">#include</span> <span class="cpf">&lt;net/inet_ecn.h&gt;</span><span class="cp"></span>
<span class="cp">#include</span> <span class="cpf">&lt;net/dsfield.h&gt;</span><span class="cp"></span>
<span class="cp">#include</span> <span class="cpf">&lt;linux/reciprocal_div.h&gt;</span><span class="cp"></span>

<span class="cm">/*	Random Early Detection (RED) algorithm.</span>
<span class="cm">	=======================================</span>

<span class="cm">	Source: Sally Floyd and Van Jacobson, &quot;Random Early Detection Gateways</span>
<span class="cm">	for Congestion Avoidance&quot;, 1993, IEEE/ACM Transactions on Networking.</span>

<span class="cm">	This file codes a &quot;divisionless&quot; version of RED algorithm</span>
<span class="cm">	as written down in Fig.17 of the paper.</span>

<span class="cm">	Short description.</span>
<span class="cm">	------------------</span>

<span class="cm">	When a new packet arrives we calculate the average queue length:</span>

<span class="cm">	avg = (1-W)*avg + W*current_queue_len,</span>

<span class="cm">	W is the filter time constant (chosen as 2^(-Wlog)), it controls</span>
<span class="cm">	the inertia of the algorithm. To allow larger bursts, W should be</span>
<span class="cm">	decreased.</span>

<span class="cm">	if (avg &gt; th_max) -&gt; packet marked (dropped).</span>
<span class="cm">	if (avg &lt; th_min) -&gt; packet passes.</span>
<span class="cm">	if (th_min &lt; avg &lt; th_max) we calculate probability:</span>

<span class="cm">	Pb = max_P * (avg - th_min)/(th_max-th_min)</span>

<span class="cm">	and mark (drop) packet with this probability.</span>
<span class="cm">	Pb changes from 0 (at avg==th_min) to max_P (avg==th_max).</span>
<span class="cm">	max_P should be small (not 1), usually 0.01..0.02 is good value.</span>

<span class="cm">	max_P is chosen as a number, so that max_P/(th_max-th_min)</span>
<span class="cm">	is a negative power of two in order arithmetics to contain</span>
<span class="cm">	only shifts.</span>


<span class="cm">	Parameters, settable by user:</span>
<span class="cm">	-----------------------------</span>

<span class="cm">	qth_min		- bytes (should be &lt; qth_max/2)</span>
<span class="cm">	qth_max		- bytes (should be at least 2*qth_min and less limit)</span>
<span class="cm">	Wlog	       	- bits (&lt;32) log(1/W).</span>
<span class="cm">	Plog	       	- bits (&lt;32)</span>

<span class="cm">	Plog is related to max_P by formula:</span>

<span class="cm">	max_P = (qth_max-qth_min)/2^Plog;</span>

<span class="cm">	F.e. if qth_max=128K and qth_min=32K, then Plog=22</span>
<span class="cm">	corresponds to max_P=0.02</span>

<span class="cm">	Scell_log</span>
<span class="cm">	Stab</span>

<span class="cm">	Lookup table for log((1-W)^(t/t_ave).</span>


<span class="cm">	NOTES:</span>

<span class="cm">	Upper bound on W.</span>
<span class="cm">	-----------------</span>

<span class="cm">	If you want to allow bursts of L packets of size S,</span>
<span class="cm">	you should choose W:</span>

<span class="cm">	L + 1 - th_min/S &lt; (1-(1-W)^L)/W</span>

<span class="cm">	th_min/S = 32         th_min/S = 4</span>

<span class="cm">	log(W)	L</span>
<span class="cm">	-1	33</span>
<span class="cm">	-2	35</span>
<span class="cm">	-3	39</span>
<span class="cm">	-4	46</span>
<span class="cm">	-5	57</span>
<span class="cm">	-6	75</span>
<span class="cm">	-7	101</span>
<span class="cm">	-8	135</span>
<span class="cm">	-9	190</span>
<span class="cm">	etc.</span>
<span class="cm"> */</span>

<span class="cm">/*</span>
<span class="cm"> * Adaptative RED : An Algorithm for Increasing the Robustness of RED&#39;s AQM</span>
<span class="cm"> * (Sally FLoyd, Ramakrishna Gummadi, and Scott Shenker) August 2001</span>
<span class="cm"> *</span>
<span class="cm"> * Every 500 ms:</span>
<span class="cm"> *  if (avg &gt; target and max_p &lt;= 0.5)</span>
<span class="cm"> *   increase max_p : max_p += alpha;</span>
<span class="cm"> *  else if (avg &lt; target and max_p &gt;= 0.01)</span>
<span class="cm"> *   decrease max_p : max_p *= beta;</span>
<span class="cm"> *</span>
<span class="cm"> * target :[qth_min + 0.4*(qth_min - qth_max),</span>
<span class="cm"> *          qth_min + 0.6*(qth_min - qth_max)].</span>
<span class="cm"> * alpha : min(0.01, max_p / 4)</span>
<span class="cm"> * beta : 0.9</span>
<span class="cm"> * max_P is a Q0.32 fixed point number (with 32 bits mantissa)</span>
<span class="cm"> * max_P between 0.01 and 0.5 (1% - 50%) [ Its no longer a negative power of two ]</span>
<span class="cm"> */</span>
<span class="cp">#define RED_ONE_PERCENT ((u32)DIV_ROUND_CLOSEST(1ULL&lt;&lt;32, 100))</span>

<span class="cp">#define MAX_P_MIN (1 * RED_ONE_PERCENT)</span>
<span class="cp">#define MAX_P_MAX (50 * RED_ONE_PERCENT)</span>
<span class="cp">#define MAX_P_ALPHA(val) min(MAX_P_MIN, val / 4)</span>

<span class="cp">#define RED_STAB_SIZE	256</span>
<span class="cp">#define RED_STAB_MASK	(RED_STAB_SIZE - 1)</span>

<span class="k">struct</span> <span class="n">red_stats</span> <span class="p">{</span>
	<span class="n">u32</span>		<span class="n">prob_drop</span><span class="p">;</span>	<span class="cm">/* Early probability drops */</span>
	<span class="n">u32</span>		<span class="n">prob_mark</span><span class="p">;</span>	<span class="cm">/* Early probability marks */</span>
	<span class="n">u32</span>		<span class="n">forced_drop</span><span class="p">;</span>	<span class="cm">/* Forced drops, qavg &gt; max_thresh */</span>
	<span class="n">u32</span>		<span class="n">forced_mark</span><span class="p">;</span>	<span class="cm">/* Forced marks, qavg &gt; max_thresh */</span>
	<span class="n">u32</span>		<span class="n">pdrop</span><span class="p">;</span>          <span class="cm">/* Drops due to queue limits */</span>
	<span class="n">u32</span>		<span class="n">other</span><span class="p">;</span>          <span class="cm">/* Drops due to drop() calls */</span>
<span class="p">};</span>

<span class="k">struct</span> <span class="n">red_parms</span> <span class="p">{</span>
	<span class="cm">/* Parameters */</span>
	<span class="n">u32</span>		<span class="n">qth_min</span><span class="p">;</span>	<span class="cm">/* Min avg length threshold: Wlog scaled */</span>
	<span class="n">u32</span>		<span class="n">qth_max</span><span class="p">;</span>	<span class="cm">/* Max avg length threshold: Wlog scaled */</span>
	<span class="n">u32</span>		<span class="n">Scell_max</span><span class="p">;</span>
	<span class="n">u32</span>		<span class="n">max_P</span><span class="p">;</span>		<span class="cm">/* probability, [0 .. 1.0] 32 scaled */</span>
	<span class="cm">/* reciprocal_value(max_P / qth_delta) */</span>
	<span class="k">struct</span> <span class="n">reciprocal_value</span>	<span class="n">max_P_reciprocal</span><span class="p">;</span>
	<span class="n">u32</span>		<span class="n">qth_delta</span><span class="p">;</span>	<span class="cm">/* max_th - min_th */</span>
	<span class="n">u32</span>		<span class="n">target_min</span><span class="p">;</span>	<span class="cm">/* min_th + 0.4*(max_th - min_th) */</span>
	<span class="n">u32</span>		<span class="n">target_max</span><span class="p">;</span>	<span class="cm">/* min_th + 0.6*(max_th - min_th) */</span>
	<span class="n">u8</span>		<span class="n">Scell_log</span><span class="p">;</span>
	<span class="n">u8</span>		<span class="n">Wlog</span><span class="p">;</span>		<span class="cm">/* log(W)		*/</span>
	<span class="n">u8</span>		<span class="n">Plog</span><span class="p">;</span>		<span class="cm">/* random number bits	*/</span>
	<span class="n">u8</span>		<span class="n">Stab</span><span class="p">[</span><span class="n">RED_STAB_SIZE</span><span class="p">];</span>
<span class="p">};</span>

<span class="k">struct</span> <span class="n">red_vars</span> <span class="p">{</span>
	<span class="cm">/* Variables */</span>
	<span class="kt">int</span>		<span class="n">qcount</span><span class="p">;</span>		<span class="cm">/* Number of packets since last random</span>
<span class="cm">					   number generation */</span>
	<span class="n">u32</span>		<span class="n">qR</span><span class="p">;</span>		<span class="cm">/* Cached random number */</span>

	<span class="kt">unsigned</span> <span class="kt">long</span>	<span class="n">qavg</span><span class="p">;</span>		<span class="cm">/* Average queue length: Wlog scaled */</span>
	<span class="n">ktime_t</span>		<span class="n">qidlestart</span><span class="p">;</span>	<span class="cm">/* Start of current idle period */</span>
<span class="p">};</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="n">u32</span> <span class="nf">red_maxp</span><span class="p">(</span><span class="n">u8</span> <span class="n">Plog</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">return</span> <span class="n">Plog</span> <span class="o">&lt;</span> <span class="mi">32</span> <span class="o">?</span> <span class="p">(</span><span class="o">~</span><span class="mi">0U</span> <span class="o">&gt;&gt;</span> <span class="n">Plog</span><span class="p">)</span> <span class="o">:</span> <span class="o">~</span><span class="mi">0U</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">red_set_vars</span><span class="p">(</span><span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">)</span>
<span class="p">{</span>
	<span class="cm">/* Reset average queue length, the value is strictly bound</span>
<span class="cm">	 * to the parameters below, reseting hurts a bit but leaving</span>
<span class="cm">	 * it might result in an unreasonable qavg for a while. --TGR</span>
<span class="cm">	 */</span>
	<span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span>		<span class="o">=</span> <span class="mi">0</span><span class="p">;</span>

	<span class="n">v</span><span class="o">-&gt;</span><span class="n">qcount</span>	<span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">bool</span> <span class="nf">red_check_params</span><span class="p">(</span><span class="n">u32</span> <span class="n">qth_min</span><span class="p">,</span> <span class="n">u32</span> <span class="n">qth_max</span><span class="p">,</span> <span class="n">u8</span> <span class="n">Wlog</span><span class="p">,</span> <span class="n">u8</span> <span class="n">Scell_log</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">if</span> <span class="p">(</span><span class="n">fls</span><span class="p">(</span><span class="n">qth_min</span><span class="p">)</span> <span class="o">+</span> <span class="n">Wlog</span> <span class="o">&gt;</span> <span class="mi">32</span><span class="p">)</span>
		<span class="k">return</span> <span class="nb">false</span><span class="p">;</span>
	<span class="k">if</span> <span class="p">(</span><span class="n">fls</span><span class="p">(</span><span class="n">qth_max</span><span class="p">)</span> <span class="o">+</span> <span class="n">Wlog</span> <span class="o">&gt;</span> <span class="mi">32</span><span class="p">)</span>
		<span class="k">return</span> <span class="nb">false</span><span class="p">;</span>
	<span class="k">if</span> <span class="p">(</span><span class="n">Scell_log</span> <span class="o">&gt;=</span> <span class="mi">32</span><span class="p">)</span>
		<span class="k">return</span> <span class="nb">false</span><span class="p">;</span>
	<span class="k">if</span> <span class="p">(</span><span class="n">qth_max</span> <span class="o">&lt;</span> <span class="n">qth_min</span><span class="p">)</span>
		<span class="k">return</span> <span class="nb">false</span><span class="p">;</span>
	<span class="k">return</span> <span class="nb">true</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">int</span> <span class="nf">red_get_flags</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">qopt_flags</span><span class="p">,</span>
				<span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">historic_mask</span><span class="p">,</span>
				<span class="k">struct</span> <span class="n">nlattr</span> <span class="o">*</span><span class="n">flags_attr</span><span class="p">,</span>
				<span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">supported_mask</span><span class="p">,</span>
				<span class="k">struct</span> <span class="n">nla_bitfield32</span> <span class="o">*</span><span class="n">p_flags</span><span class="p">,</span>
				<span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">p_userbits</span><span class="p">,</span>
				<span class="k">struct</span> <span class="n">netlink_ext_ack</span> <span class="o">*</span><span class="n">extack</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">struct</span> <span class="n">nla_bitfield32</span> <span class="n">flags</span><span class="p">;</span>

	<span class="k">if</span> <span class="p">(</span><span class="n">qopt_flags</span> <span class="o">&amp;&amp;</span> <span class="n">flags_attr</span><span class="p">)</span> <span class="p">{</span>
		<span class="n">NL_SET_ERR_MSG_MOD</span><span class="p">(</span><span class="n">extack</span><span class="p">,</span> <span class="s">&quot;flags should be passed either through qopt, or through a dedicated attribute&quot;</span><span class="p">);</span>
		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span>
	<span class="p">}</span>

	<span class="k">if</span> <span class="p">(</span><span class="n">flags_attr</span><span class="p">)</span> <span class="p">{</span>
		<span class="n">flags</span> <span class="o">=</span> <span class="n">nla_get_bitfield32</span><span class="p">(</span><span class="n">flags_attr</span><span class="p">);</span>
	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
		<span class="n">flags</span><span class="p">.</span><span class="n">selector</span> <span class="o">=</span> <span class="n">historic_mask</span><span class="p">;</span>
		<span class="n">flags</span><span class="p">.</span><span class="n">value</span> <span class="o">=</span> <span class="n">qopt_flags</span> <span class="o">&amp;</span> <span class="n">historic_mask</span><span class="p">;</span>
	<span class="p">}</span>

	<span class="o">*</span><span class="n">p_flags</span> <span class="o">=</span> <span class="n">flags</span><span class="p">;</span>
	<span class="o">*</span><span class="n">p_userbits</span> <span class="o">=</span> <span class="n">qopt_flags</span> <span class="o">&amp;</span> <span class="o">~</span><span class="n">historic_mask</span><span class="p">;</span>
	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">int</span> <span class="nf">red_validate_flags</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">flags</span><span class="p">,</span>
				     <span class="k">struct</span> <span class="n">netlink_ext_ack</span> <span class="o">*</span><span class="n">extack</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">if</span> <span class="p">((</span><span class="n">flags</span> <span class="o">&amp;</span> <span class="n">TC_RED_NODROP</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="o">!</span><span class="p">(</span><span class="n">flags</span> <span class="o">&amp;</span> <span class="n">TC_RED_ECN</span><span class="p">))</span> <span class="p">{</span>
		<span class="n">NL_SET_ERR_MSG_MOD</span><span class="p">(</span><span class="n">extack</span><span class="p">,</span> <span class="s">&quot;nodrop mode is only meaningful with ECN&quot;</span><span class="p">);</span>
		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span>
	<span class="p">}</span>

	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">red_set_parms</span><span class="p">(</span><span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">,</span>
				 <span class="n">u32</span> <span class="n">qth_min</span><span class="p">,</span> <span class="n">u32</span> <span class="n">qth_max</span><span class="p">,</span> <span class="n">u8</span> <span class="n">Wlog</span><span class="p">,</span> <span class="n">u8</span> <span class="n">Plog</span><span class="p">,</span>
				 <span class="n">u8</span> <span class="n">Scell_log</span><span class="p">,</span> <span class="n">u8</span> <span class="o">*</span><span class="n">stab</span><span class="p">,</span> <span class="n">u32</span> <span class="n">max_P</span><span class="p">)</span>
<span class="p">{</span>
	<span class="kt">int</span> <span class="n">delta</span> <span class="o">=</span> <span class="n">qth_max</span> <span class="o">-</span> <span class="n">qth_min</span><span class="p">;</span>
	<span class="n">u32</span> <span class="n">max_p_delta</span><span class="p">;</span>

	<span class="n">p</span><span class="o">-&gt;</span><span class="n">qth_min</span>	<span class="o">=</span> <span class="n">qth_min</span> <span class="o">&lt;&lt;</span> <span class="n">Wlog</span><span class="p">;</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">qth_max</span>	<span class="o">=</span> <span class="n">qth_max</span> <span class="o">&lt;&lt;</span> <span class="n">Wlog</span><span class="p">;</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">Wlog</span>		<span class="o">=</span> <span class="n">Wlog</span><span class="p">;</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">Plog</span>		<span class="o">=</span> <span class="n">Plog</span><span class="p">;</span>
	<span class="k">if</span> <span class="p">(</span><span class="n">delta</span> <span class="o">&lt;=</span> <span class="mi">0</span><span class="p">)</span>
		<span class="n">delta</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">qth_delta</span>	<span class="o">=</span> <span class="n">delta</span><span class="p">;</span>
	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">max_P</span><span class="p">)</span> <span class="p">{</span>
		<span class="n">max_P</span> <span class="o">=</span> <span class="n">red_maxp</span><span class="p">(</span><span class="n">Plog</span><span class="p">);</span>
		<span class="n">max_P</span> <span class="o">*=</span> <span class="n">delta</span><span class="p">;</span> <span class="cm">/* max_P = (qth_max - qth_min)/2^Plog */</span>
	<span class="p">}</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P</span> <span class="o">=</span> <span class="n">max_P</span><span class="p">;</span>
	<span class="n">max_p_delta</span> <span class="o">=</span> <span class="n">max_P</span> <span class="o">/</span> <span class="n">delta</span><span class="p">;</span>
	<span class="n">max_p_delta</span> <span class="o">=</span> <span class="n">max</span><span class="p">(</span><span class="n">max_p_delta</span><span class="p">,</span> <span class="mi">1U</span><span class="p">);</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P_reciprocal</span>  <span class="o">=</span> <span class="n">reciprocal_value</span><span class="p">(</span><span class="n">max_p_delta</span><span class="p">);</span>

	<span class="cm">/* RED Adaptative target :</span>
<span class="cm">	 * [min_th + 0.4*(min_th - max_th),</span>
<span class="cm">	 *  min_th + 0.6*(min_th - max_th)].</span>
<span class="cm">	 */</span>
	<span class="n">delta</span> <span class="o">/=</span> <span class="mi">5</span><span class="p">;</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">target_min</span> <span class="o">=</span> <span class="n">qth_min</span> <span class="o">+</span> <span class="mi">2</span><span class="o">*</span><span class="n">delta</span><span class="p">;</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">target_max</span> <span class="o">=</span> <span class="n">qth_min</span> <span class="o">+</span> <span class="mi">3</span><span class="o">*</span><span class="n">delta</span><span class="p">;</span>

	<span class="n">p</span><span class="o">-&gt;</span><span class="n">Scell_log</span>	<span class="o">=</span> <span class="n">Scell_log</span><span class="p">;</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">Scell_max</span>	<span class="o">=</span> <span class="p">(</span><span class="mi">255</span> <span class="o">&lt;&lt;</span> <span class="n">Scell_log</span><span class="p">);</span>

	<span class="k">if</span> <span class="p">(</span><span class="n">stab</span><span class="p">)</span>
		<span class="n">memcpy</span><span class="p">(</span><span class="n">p</span><span class="o">-&gt;</span><span class="n">Stab</span><span class="p">,</span> <span class="n">stab</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">p</span><span class="o">-&gt;</span><span class="n">Stab</span><span class="p">));</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">int</span> <span class="nf">red_is_idling</span><span class="p">(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">return</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qidlestart</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">red_start_of_idle_period</span><span class="p">(</span><span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">)</span>
<span class="p">{</span>
	<span class="n">v</span><span class="o">-&gt;</span><span class="n">qidlestart</span> <span class="o">=</span> <span class="n">ktime_get</span><span class="p">();</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">red_end_of_idle_period</span><span class="p">(</span><span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">)</span>
<span class="p">{</span>
	<span class="n">v</span><span class="o">-&gt;</span><span class="n">qidlestart</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">red_restart</span><span class="p">(</span><span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">)</span>
<span class="p">{</span>
	<span class="n">red_end_of_idle_period</span><span class="p">(</span><span class="n">v</span><span class="p">);</span>
	<span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
	<span class="n">v</span><span class="o">-&gt;</span><span class="n">qcount</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="nf">red_calc_qavg_from_idle_time</span><span class="p">(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">,</span>
							 <span class="k">const</span> <span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">)</span>
<span class="p">{</span>
	<span class="n">s64</span> <span class="n">delta</span> <span class="o">=</span> <span class="n">ktime_us_delta</span><span class="p">(</span><span class="n">ktime_get</span><span class="p">(),</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qidlestart</span><span class="p">);</span>
	<span class="kt">long</span> <span class="n">us_idle</span> <span class="o">=</span> <span class="n">min_t</span><span class="p">(</span><span class="n">s64</span><span class="p">,</span> <span class="n">delta</span><span class="p">,</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">Scell_max</span><span class="p">);</span>
	<span class="kt">int</span>  <span class="n">shift</span><span class="p">;</span>

	<span class="cm">/*</span>
<span class="cm">	 * The problem: ideally, average length queue recalcultion should</span>
<span class="cm">	 * be done over constant clock intervals. This is too expensive, so</span>
<span class="cm">	 * that the calculation is driven by outgoing packets.</span>
<span class="cm">	 * When the queue is idle we have to model this clock by hand.</span>
<span class="cm">	 *</span>
<span class="cm">	 * SF+VJ proposed to &quot;generate&quot;:</span>
<span class="cm">	 *</span>
<span class="cm">	 *	m = idletime / (average_pkt_size / bandwidth)</span>
<span class="cm">	 *</span>
<span class="cm">	 * dummy packets as a burst after idle time, i.e.</span>
<span class="cm">	 *</span>
<span class="cm">	 * 	v-&gt;qavg *= (1-W)^m</span>
<span class="cm">	 *</span>
<span class="cm">	 * This is an apparently overcomplicated solution (f.e. we have to</span>
<span class="cm">	 * precompute a table to make this calculation in reasonable time)</span>
<span class="cm">	 * I believe that a simpler model may be used here,</span>
<span class="cm">	 * but it is field for experiments.</span>
<span class="cm">	 */</span>

	<span class="n">shift</span> <span class="o">=</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">Stab</span><span class="p">[(</span><span class="n">us_idle</span> <span class="o">&gt;&gt;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">Scell_log</span><span class="p">)</span> <span class="o">&amp;</span> <span class="n">RED_STAB_MASK</span><span class="p">];</span>

	<span class="k">if</span> <span class="p">(</span><span class="n">shift</span><span class="p">)</span>
		<span class="k">return</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span> <span class="o">&gt;&gt;</span> <span class="n">shift</span><span class="p">;</span>
	<span class="k">else</span> <span class="p">{</span>
		<span class="cm">/* Approximate initial part of exponent with linear function:</span>
<span class="cm">		 *</span>
<span class="cm">		 * 	(1-W)^m ~= 1-mW + ...</span>
<span class="cm">		 *</span>
<span class="cm">		 * Seems, it is the best solution to</span>
<span class="cm">		 * problem of too coarse exponent tabulation.</span>
<span class="cm">		 */</span>
		<span class="n">us_idle</span> <span class="o">=</span> <span class="p">(</span><span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span> <span class="o">*</span> <span class="p">(</span><span class="n">u64</span><span class="p">)</span><span class="n">us_idle</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">Scell_log</span><span class="p">;</span>

		<span class="k">if</span> <span class="p">(</span><span class="n">us_idle</span> <span class="o">&lt;</span> <span class="p">(</span><span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span> <span class="o">&gt;&gt;</span> <span class="mi">1</span><span class="p">))</span>
			<span class="k">return</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span> <span class="o">-</span> <span class="n">us_idle</span><span class="p">;</span>
		<span class="k">else</span>
			<span class="k">return</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span> <span class="o">&gt;&gt;</span> <span class="mi">1</span><span class="p">;</span>
	<span class="p">}</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="nf">red_calc_qavg_no_idle_time</span><span class="p">(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">,</span>
						       <span class="k">const</span> <span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">,</span>
						       <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">backlog</span><span class="p">)</span>
<span class="p">{</span>
	<span class="cm">/*</span>
<span class="cm">	 * NOTE: v-&gt;qavg is fixed point number with point at Wlog.</span>
<span class="cm">	 * The formula below is equvalent to floating point</span>
<span class="cm">	 * version:</span>
<span class="cm">	 *</span>
<span class="cm">	 * 	qavg = qavg*(1-W) + backlog*W;</span>
<span class="cm">	 *</span>
<span class="cm">	 * --ANK (980924)</span>
<span class="cm">	 */</span>
	<span class="k">return</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span> <span class="o">+</span> <span class="p">(</span><span class="n">backlog</span> <span class="o">-</span> <span class="p">(</span><span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span> <span class="o">&gt;&gt;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">Wlog</span><span class="p">));</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="nf">red_calc_qavg</span><span class="p">(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">,</span>
					  <span class="k">const</span> <span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">,</span>
					  <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">backlog</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">red_is_idling</span><span class="p">(</span><span class="n">v</span><span class="p">))</span>
		<span class="k">return</span> <span class="n">red_calc_qavg_no_idle_time</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">v</span><span class="p">,</span> <span class="n">backlog</span><span class="p">);</span>
	<span class="k">else</span>
		<span class="k">return</span> <span class="n">red_calc_qavg_from_idle_time</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">v</span><span class="p">);</span>
<span class="p">}</span>


<span class="k">static</span> <span class="kr">inline</span> <span class="n">u32</span> <span class="nf">red_random</span><span class="p">(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">return</span> <span class="n">reciprocal_divide</span><span class="p">(</span><span class="n">prandom_u32</span><span class="p">(),</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P_reciprocal</span><span class="p">);</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">int</span> <span class="nf">red_mark_probability</span><span class="p">(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">,</span>
				       <span class="k">const</span> <span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">,</span>
				       <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">qavg</span><span class="p">)</span>
<span class="p">{</span>
	<span class="cm">/* The formula used below causes questions.</span>

<span class="cm">	   OK. qR is random number in the interval</span>
<span class="cm">		(0..1/max_P)*(qth_max-qth_min)</span>
<span class="cm">	   i.e. 0..(2^Plog). If we used floating point</span>
<span class="cm">	   arithmetics, it would be: (2^Plog)*rnd_num,</span>
<span class="cm">	   where rnd_num is less 1.</span>

<span class="cm">	   Taking into account, that qavg have fixed</span>
<span class="cm">	   point at Wlog, two lines</span>
<span class="cm">	   below have the following floating point equivalent:</span>

<span class="cm">	   max_P*(qavg - qth_min)/(qth_max-qth_min) &lt; rnd/qcount</span>

<span class="cm">	   Any questions? --ANK (980924)</span>
<span class="cm">	 */</span>
	<span class="k">return</span> <span class="o">!</span><span class="p">(((</span><span class="n">qavg</span> <span class="o">-</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">qth_min</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">Wlog</span><span class="p">)</span> <span class="o">*</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qcount</span> <span class="o">&lt;</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qR</span><span class="p">);</span>
<span class="p">}</span>

<span class="k">enum</span> <span class="p">{</span>
	<span class="n">RED_BELOW_MIN_THRESH</span><span class="p">,</span>
	<span class="n">RED_BETWEEN_TRESH</span><span class="p">,</span>
	<span class="n">RED_ABOVE_MAX_TRESH</span><span class="p">,</span>
<span class="p">};</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">int</span> <span class="nf">red_cmp_thresh</span><span class="p">(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">qavg</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">if</span> <span class="p">(</span><span class="n">qavg</span> <span class="o">&lt;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">qth_min</span><span class="p">)</span>
		<span class="k">return</span> <span class="n">RED_BELOW_MIN_THRESH</span><span class="p">;</span>
	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">qavg</span> <span class="o">&gt;=</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">qth_max</span><span class="p">)</span>
		<span class="k">return</span> <span class="n">RED_ABOVE_MAX_TRESH</span><span class="p">;</span>
	<span class="k">else</span>
		<span class="k">return</span> <span class="n">RED_BETWEEN_TRESH</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">enum</span> <span class="p">{</span>
	<span class="n">RED_DONT_MARK</span><span class="p">,</span>
	<span class="n">RED_PROB_MARK</span><span class="p">,</span>
	<span class="n">RED_HARD_MARK</span><span class="p">,</span>
<span class="p">};</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">int</span> <span class="nf">red_action</span><span class="p">(</span><span class="k">const</span> <span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">,</span>
			     <span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">,</span>
			     <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">qavg</span><span class="p">)</span>
<span class="p">{</span>
	<span class="k">switch</span> <span class="p">(</span><span class="n">red_cmp_thresh</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">qavg</span><span class="p">))</span> <span class="p">{</span>
		<span class="k">case</span> <span class="nl">RED_BELOW_MIN_THRESH</span><span class="p">:</span>
			<span class="n">v</span><span class="o">-&gt;</span><span class="n">qcount</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
			<span class="k">return</span> <span class="n">RED_DONT_MARK</span><span class="p">;</span>

		<span class="k">case</span> <span class="nl">RED_BETWEEN_TRESH</span><span class="p">:</span>
			<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">v</span><span class="o">-&gt;</span><span class="n">qcount</span><span class="p">)</span> <span class="p">{</span>
				<span class="k">if</span> <span class="p">(</span><span class="n">red_mark_probability</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">v</span><span class="p">,</span> <span class="n">qavg</span><span class="p">))</span> <span class="p">{</span>
					<span class="n">v</span><span class="o">-&gt;</span><span class="n">qcount</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
					<span class="n">v</span><span class="o">-&gt;</span><span class="n">qR</span> <span class="o">=</span> <span class="n">red_random</span><span class="p">(</span><span class="n">p</span><span class="p">);</span>
					<span class="k">return</span> <span class="n">RED_PROB_MARK</span><span class="p">;</span>
				<span class="p">}</span>
			<span class="p">}</span> <span class="k">else</span>
				<span class="n">v</span><span class="o">-&gt;</span><span class="n">qR</span> <span class="o">=</span> <span class="n">red_random</span><span class="p">(</span><span class="n">p</span><span class="p">);</span>

			<span class="k">return</span> <span class="n">RED_DONT_MARK</span><span class="p">;</span>

		<span class="k">case</span> <span class="nl">RED_ABOVE_MAX_TRESH</span><span class="p">:</span>
			<span class="n">v</span><span class="o">-&gt;</span><span class="n">qcount</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
			<span class="k">return</span> <span class="n">RED_HARD_MARK</span><span class="p">;</span>
	<span class="p">}</span>

	<span class="n">BUG</span><span class="p">();</span>
	<span class="k">return</span> <span class="n">RED_DONT_MARK</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">red_adaptative_algo</span><span class="p">(</span><span class="k">struct</span> <span class="n">red_parms</span> <span class="o">*</span><span class="n">p</span><span class="p">,</span> <span class="k">struct</span> <span class="n">red_vars</span> <span class="o">*</span><span class="n">v</span><span class="p">)</span>
<span class="p">{</span>
	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">qavg</span><span class="p">;</span>
	<span class="n">u32</span> <span class="n">max_p_delta</span><span class="p">;</span>

	<span class="n">qavg</span> <span class="o">=</span> <span class="n">v</span><span class="o">-&gt;</span><span class="n">qavg</span><span class="p">;</span>
	<span class="k">if</span> <span class="p">(</span><span class="n">red_is_idling</span><span class="p">(</span><span class="n">v</span><span class="p">))</span>
		<span class="n">qavg</span> <span class="o">=</span> <span class="n">red_calc_qavg_from_idle_time</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">v</span><span class="p">);</span>

	<span class="cm">/* v-&gt;qavg is fixed point number with point at Wlog */</span>
	<span class="n">qavg</span> <span class="o">&gt;&gt;=</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">Wlog</span><span class="p">;</span>

	<span class="k">if</span> <span class="p">(</span><span class="n">qavg</span> <span class="o">&gt;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">target_max</span> <span class="o">&amp;&amp;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P</span> <span class="o">&lt;=</span> <span class="n">MAX_P_MAX</span><span class="p">)</span>
		<span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P</span> <span class="o">+=</span> <span class="n">MAX_P_ALPHA</span><span class="p">(</span><span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P</span><span class="p">);</span> <span class="cm">/* maxp = maxp + alpha */</span>
	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">qavg</span> <span class="o">&lt;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">target_min</span> <span class="o">&amp;&amp;</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P</span> <span class="o">&gt;=</span> <span class="n">MAX_P_MIN</span><span class="p">)</span>
		<span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P</span> <span class="o">=</span> <span class="p">(</span><span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P</span><span class="o">/</span><span class="mi">10</span><span class="p">)</span><span class="o">*</span><span class="mi">9</span><span class="p">;</span> <span class="cm">/* maxp = maxp * Beta */</span>

	<span class="n">max_p_delta</span> <span class="o">=</span> <span class="n">DIV_ROUND_CLOSEST</span><span class="p">(</span><span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P</span><span class="p">,</span> <span class="n">p</span><span class="o">-&gt;</span><span class="n">qth_delta</span><span class="p">);</span>
	<span class="n">max_p_delta</span> <span class="o">=</span> <span class="n">max</span><span class="p">(</span><span class="n">max_p_delta</span><span class="p">,</span> <span class="mi">1U</span><span class="p">);</span>
	<span class="n">p</span><span class="o">-&gt;</span><span class="n">max_P_reciprocal</span> <span class="o">=</span> <span class="n">reciprocal_value</span><span class="p">(</span><span class="n">max_p_delta</span><span class="p">);</span>
<span class="p">}</span>
<span class="cp">#endif</span>
</pre></div>
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='https://git.zx2c4.com/cgit/about/'>cgit 1.2.3-1.el7</a> (<a href='https://git-scm.com/'>git 2.26.2</a>) at 2021-10-28 08:47:31 +0000</div>
</div> <!-- id=cgit -->
</body>
</html>
