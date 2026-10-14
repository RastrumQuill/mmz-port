// sub_08006A94 at 0x08006A94 (thumb)

undefined4 sub_08006A94(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  if (DAT_02000c80 == 4) {
    iVar1 = sub_08128954(*param_2 + -0xf000,0x3c000);
    DAT_02000c78 = iVar1 + 0xf000;
    DAT_02000c7c = param_2[1];
  }
  else {
    DAT_02000c78 = *param_2;
    DAT_02000c7c = param_2[1];
  }
  piVar5 = *(int **)(&DAT_08829090 + (uint)(DAT_0202cac0 >> 4) * 4 + param_1 * 8);
  iVar1 = *piVar5;
  DAT_02000a00 = DAT_02000a00 & 0xc1ff;
  sub_08002C94(&DAT_02000ab0,0x8007989);
  DAT_02000ab8 = &DAT_02000ab0;
  DAT_0202cab2 = 0;
  DAT_02000c80 = (ushort)iVar1 | 0x80;
  iVar1 = iVar1 * 0xc;
  piVar2 = (int *)(&DAT_08cd9000 + iVar1);
  sub_08005328(&DAT_02000c68,(undefined *)(*(int *)(&DAT_08cd9004 + iVar1) + (int)piVar2),
               (undefined *)(*piVar2 + (int)piVar2),
               (undefined *)(*(int *)(&DAT_08cd9008 + iVar1) + (int)piVar2),piVar5[3]);
  DAT_02001284 = 0xffff;
  DAT_02001286 = 0xffff;
  DAT_0202cab4 = piVar5[0x1e];
  DAT_0202cab8 = piVar5[0x1f];
  sub_08007220(piVar5,piVar5[3]);
  uVar3 = 0;
  do {
    sub_08007560((int)(short)uVar3,piVar5);
    uVar4 = (int)(short)uVar3 + 1;
    uVar3 = uVar4 & 0xffff;
  } while ((int)(uVar4 * 0x10000) >> 0x10 < 3);
  DAT_0202cabc = 0x7fffffff;
  DAT_0202cac8 = 0;
  DAT_0202cacc = 0x3c0000;
  DAT_0202cad0 = 0x280000;
  if ((DAT_02000c80 & 0x7f) == 4) {
    DAT_0202cacc = 0x78000000;
  }
  DAT_0202cac4 = 0;
  DAT_02000c82 = 0;
  DAT_02000c83 = 0;
  uVar3 = 0;
  do {
    (&DAT_0202dad4)[(short)uVar3] = 0;
    uVar4 = (int)(short)uVar3 + 1;
    uVar3 = uVar4 & 0xffff;
  } while ((int)(uVar4 * 0x10000) >> 0x10 < 4);
  return in_lr;
}

