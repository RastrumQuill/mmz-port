// sub_080ABA3C at 0x080ABA3C (thumb)

undefined4 sub_080ABA3C(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = param_1 + 0x54;
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(iVar1,1,0,0,(int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(iVar1,1,2,(uVar3 * 2 >> 0x11 & 0x7f) + 0x80,
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(iVar1,1,3,uVar3 * 2 >> 0x11 & 0xff | 0x100,
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(iVar1,1,1,uVar3 * 2 >> 0x11 & 0xff | 0x100,
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(iVar1,1,3,(int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x7f) + 0x80),
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(iVar1,1,1,(int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0xff) + 0x100),
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(iVar1,1,3,(int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0xff) + 0x100),
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

