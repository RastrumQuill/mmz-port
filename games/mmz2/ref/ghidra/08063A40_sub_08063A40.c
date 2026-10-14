// sub_08063A40 at 0x08063A40 (thumb)

undefined4 sub_08063A40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202ec38 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08063B0C(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08063aac:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08063abe;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = sub_0801E11C(0xd,param_1,&DAT_0833d6c0);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    goto LAB_08063aac;
  }
  iVar2 = sub_0801E4D8();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08063abe:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d63c + (uint)*(byte *)(param_1 + 0xd) * 4));
  pbVar3 = (byte *)(param_1 + 0xbd);
  *pbVar3 = *pbVar3 + 2;
  *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc3) + '\x02';
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar3] * -2;
  return in_lr;
}

