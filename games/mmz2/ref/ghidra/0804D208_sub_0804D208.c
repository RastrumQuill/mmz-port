// sub_0804D208 at 0x0804D208 (thumb)

undefined4 sub_0804D208(int param_1)

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
    sub_0804D2F4(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0804d274:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0804d286;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = sub_0801E11C(0xc,param_1,&DAT_0833b698);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    goto LAB_0804d274;
  }
  iVar2 = sub_0801E4D8();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0804d286:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833b61c + (uint)*(byte *)(param_1 + 0xd) * 4));
  pbVar3 = (byte *)(param_1 + 0xbd);
  *pbVar3 = *pbVar3 + 2;
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[(*pbVar3 & 0x7f) * 2] * -2;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar3] * -2;
  return in_lr;
}

