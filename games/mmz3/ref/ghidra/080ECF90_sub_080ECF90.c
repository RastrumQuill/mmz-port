// sub_080ECF90 at 0x080ECF90 (thumb)

undefined4 sub_080ECF90(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 in_lr;
  
  if ((uint)*(byte *)(param_1 + 0x243) != (uint)param_2) {
    *(byte *)(param_1 + 0x243) = param_2;
    *(undefined *)(param_1 + 0x242) = 0;
  }
  uVar10 = 0;
  iVar5 = (uint)param_2 * 8;
  piVar9 = &DAT_0838b6f8;
  do {
    iVar6 = *piVar9;
    iVar1 = *(int *)(&DAT_0838b750 + iVar5);
    uVar7 = DAT_02030c4c * 0x41c64e6d + 0x3039;
    DAT_02030c4c = uVar7;
    iVar2 = sub_080FE4D8(uVar7 >> 0x10,3);
    iVar8 = piVar9[1];
    iVar3 = *(int *)(&DAT_0838b754 + iVar5);
    uVar7 = uVar7 * 0x41c64e6d + 0x3039;
    DAT_02030c4c = uVar7;
    iVar4 = sub_080FE4D8(uVar7 >> 0x10,3);
    DAT_02030c4c = uVar7 * 0x41c64e6d + 0x3039;
    sub_080ED08C((uVar10 | 0xffff9500) & 0xffff,iVar6 + iVar1 + (iVar2 + -1) * 0x100,
                 iVar8 + iVar3 + (iVar4 + -1) * 0x100,(DAT_02030c4c >> 0x10 & 0x3f) + 0xc1,0);
    piVar9 = piVar9 + 2;
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0xb);
  return in_lr;
}

