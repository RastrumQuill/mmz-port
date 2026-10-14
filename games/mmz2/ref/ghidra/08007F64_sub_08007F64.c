// sub_08007F64 at 0x08007F64 (thumb)

undefined4 sub_08007F64(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  DAT_020011c8 = *param_2;
  DAT_020011cc = param_2[1];
  iVar4 = *(int *)(&DAT_0831408c + param_1 * 4);
  DAT_02000f90 = DAT_02000f90 & 0xc1ff;
  sub_08003430(&DAT_02001000,0x8008b15);
  DAT_02001008 = &DAT_02001000;
  DAT_0202d002 = 0;
  DAT_020011d0 = (ushort)param_1 | 0x80;
  param_1 = param_1 * 0xc;
  piVar1 = (int *)(&DAT_0865fd00 + param_1);
  sub_080069AC(&DAT_020011b8,(undefined *)(*(int *)(&DAT_0865fd04 + param_1) + (int)piVar1),
               (undefined *)(*piVar1 + (int)piVar1),
               (undefined *)(*(int *)(&DAT_0865fd08 + param_1) + (int)piVar1),
               *(undefined4 *)(iVar4 + 0xc));
  DAT_020017d4 = 0xffff;
  DAT_020017d6 = 0xffff;
  sub_080084C0(iVar4,*(undefined4 *)(iVar4 + 0xc));
  uVar2 = 0;
  do {
    sub_0800873C((int)(short)uVar2,iVar4);
    uVar3 = (int)(short)uVar2 + 1;
    uVar2 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 3);
  DAT_0202d004 = 0x7fffffff;
  DAT_0202d008 = 0x7fffffff;
  DAT_0202d00c = 0;
  DAT_0202d010 = 0;
  DAT_0202d014 = 0x3c0000;
  DAT_0202d018 = 0x280000;
  DAT_020011d2 = 0;
  DAT_020011d3 = 0;
  uVar2 = 0;
  do {
    (&DAT_0202e01c)[(short)uVar2] = 0;
    uVar3 = (int)(short)uVar2 + 1;
    uVar2 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 4);
  return in_lr;
}

