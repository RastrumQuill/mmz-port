// sub_080AA3B0 at 0x080AA3B0 (thumb)

undefined4 sub_080AA3B0(int param_1)

{
  undefined uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_080177F4();
  uVar3 = sub_080FE10C((int)(short)*(undefined4 *)(param_1 + 0x5c),
                       (int)(short)*(undefined4 *)(param_1 + 0x60));
  uVar1 = (undefined)((uVar3 & 0xffff) + 0x4000 >> 8);
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(undefined *)(param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = sub_08009A3C();
  if (sVar2 != 0) {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar3 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    sub_080C13B8(param_1 + 0x54,1,1,uVar4 * 2 >> 0x11 & 0xff | 0x100,
                 (int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar3 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    sub_080C13B8(param_1 + 0x54,1,3,(int)(short)-(((ushort)(uVar4 * 2 >> 0x11) & 0xff) + 0x100),
                 (int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

