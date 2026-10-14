// sub_08008D04 at 0x08008D04 (thumb)

undefined4 sub_08008D04(undefined2 param_1,undefined2 param_2,int *param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  uVar1 = (uint)DAT_02000c82;
  if (0x1f < uVar1 + 1) {
    return in_lr;
  }
  DAT_02000c82 = (byte)(uVar1 + 1);
  (&DAT_02000c84)[uVar1 * 0xc] = param_1;
  (&DAT_02000c86)[uVar1 * 0xc] = param_2;
  if (DAT_02000c80 == 4) {
    iVar2 = sub_08128954(*param_3 + -0xf000,0x3c000);
    (&DAT_02000c8c)[uVar1 * 6] = iVar2 + *param_4 + 0xf000;
  }
  else {
    (&DAT_02000c8c)[uVar1 * 6] = *param_3 + (int)*param_4;
  }
  (&DAT_02000c8c)[uVar1 * 6] = *param_3 + (int)*param_4;
  (&DAT_02000c90)[uVar1 * 6] = param_3[1] + (int)param_4[1];
  iVar2 = 0;
  if (DAT_02000c83 != 0) {
    puVar4 = &DAT_02000ab0;
    do {
      if (*(short *)(puVar4 + 0x4d4) == (&DAT_02000c84)[uVar1 * 0xc]) break;
      puVar4 = puVar4 + 0x18;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)DAT_02000c83);
    if (iVar2 < (int)(uint)DAT_02000c83) {
      iVar2 = iVar2 * 0x18;
      (&DAT_02000c94)[uVar1 * 6] = *(undefined4 *)(iVar2 + 0x2000f8c);
      iVar3 = 0x4e0;
      goto LAB_08008e5a;
    }
  }
  iVar2 = uVar1 * 0x18;
  (&DAT_02000c94)[uVar1 * 6] = (&DAT_02000c8c)[uVar1 * 6];
  iVar3 = 0x1e0;
LAB_08008e5a:
  *(undefined4 *)(&DAT_02000c98 + uVar1 * 0x18) = *(undefined4 *)(&DAT_02000ab0 + iVar2 + iVar3);
  (&DAT_02000c88)[uVar1 * 0xc] = (ushort)param_4[2] >> 1;
  (&DAT_02000c8a)[uVar1 * 0xc] = (ushort)param_4[3] >> 1;
  return in_lr;
}

