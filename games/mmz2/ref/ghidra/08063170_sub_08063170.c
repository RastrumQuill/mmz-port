// sub_08063170 at 0x08063170 (thumb)

undefined4 sub_08063170(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202ec38 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08063258(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080631dc:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080631ee;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = sub_0801E11C(0xe,param_1,&DAT_0833d620);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_080631dc;
  }
  iVar3 = sub_0801E4D8();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_080631ee:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d5c4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  pbVar4 = (byte *)(param_1 + 0xbd);
  *pbVar4 = *pbVar4 + 2;
  *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc3) + '\x02';
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar4] * -2;
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *pbVar4 = 0;
  }
  return in_lr;
}

