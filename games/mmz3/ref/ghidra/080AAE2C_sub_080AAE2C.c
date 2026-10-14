// sub_080AAE2C at 0x080AAE2C (thumb)

undefined4 sub_080AAE2C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar3 = param_1 + 0x54;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    sub_080C13B8(iVar3,1,0,0,(int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar2 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    sub_080C13B8(iVar3,1,2,(uVar5 * 2 >> 0x11 & 0x7f) + 0x80,
                 (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar2 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    sub_080C13B8(iVar3,1,3,uVar5 * 2 >> 0x11 & 0xff | 0x100,
                 (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar2 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    sub_080C13B8(iVar3,1,3,(int)(short)-(((ushort)(uVar5 * 2 >> 0x11) & 0x7f) + 0x80),
                 (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar2 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    sub_080C13B8(iVar3,1,1,(int)(short)-(((ushort)(uVar5 * 2 >> 0x11) & 0xff) + 0x100),
                 (int)(short)-(((ushort)(uVar2 * 2 >> 0x11) & 0x3ff) + 0x100));
  }
  pcVar4 = (char *)(iVar1 + 0xc6);
  *pcVar4 = *pcVar4 + -1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

