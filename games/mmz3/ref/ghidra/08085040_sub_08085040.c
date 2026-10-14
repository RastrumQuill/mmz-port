// sub_08085040 at 0x08085040 (thumb)

undefined4 sub_08085040(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  cVar3 = '\x01';
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    cVar3 = -1;
  }
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_24 = *(int *)(param_1 + 0x58);
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  iVar4 = (int)cVar3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(&local_28,1,0,(int)(((uVar1 * 2 >> 0x11 & 0x7f) + 0x80) * iVar4 * 0x10000) >> 0x10,
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  local_24 = local_24 + -0x1000;
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(&local_28,1,2,(int)(((uVar1 * 2 >> 0x11 & 0x7f) + 0x80) * iVar4 * 0x10000) >> 0x10,
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  local_24 = local_24 + -0x1000;
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(&local_28,1,3,(int)(((uVar1 * 2 >> 0x11 & 0xff) + 0x100) * iVar4 * 0x10000) >> 0x10,
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  local_24 = local_24 + -0x1000;
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(&local_28,1,3,(int)(((uVar1 * 2 >> 0x11 & 0x7f) + 0x80) * iVar4 * 0x10000) >> 0x10,
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  local_24 = local_24 + -0x1000;
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  sub_080C13B8(&local_28,1,1,(int)(((uVar1 * 2 >> 0x11 & 0xff) + 0x100) * iVar4 * 0x10000) >> 0x10,
               (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

