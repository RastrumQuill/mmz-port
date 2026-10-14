// sub_0807D3AC at 0x0807D3AC (thumb)

undefined4 sub_0807D3AC(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = param_1 + 0x4c;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  sub_0807BB3C(iVar1,0,0,(int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  sub_0807BB3C(iVar1,2,(uVar2 * 2 >> 0x11 & 0x7f) + 0x80,
               (int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  sub_0807BB3C(iVar1,3,uVar2 * 2 >> 0x11 & 0xff | 0x100,
               (int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  sub_0807BB3C(iVar1,1,uVar2 * 2 >> 0x11 & 0xff | 0x100,
               (int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  sub_0807BB3C(iVar1,3,(int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x7f) + 0x80),
               (int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  sub_0807BB3C(iVar1,1,(int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0xff) + 0x100),
               (int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  sub_0807BB3C(iVar1,3,(int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0xff) + 0x100),
               (int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

