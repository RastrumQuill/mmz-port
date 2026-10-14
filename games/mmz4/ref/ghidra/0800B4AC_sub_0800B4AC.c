// sub_0800B4AC at 0x0800B4AC (thumb)

undefined4 sub_0800B4AC(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_02000a04)[uVar6] = (&DAT_02000a04)[uVar6] & 0xfffc | 2;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(&DAT_02000a0c + uVar6 * 2) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(DAT_020359b8 + 0x54);
  if (*(int *)(param_1 + 0x34) < 0x5a0) {
    iVar2 = 0x56800;
LAB_0800b4fa:
    if (iVar3 <= iVar2) {
LAB_0800b558:
      iVar3 = iVar2 - iVar3;
      goto LAB_0800b566;
    }
  }
  else {
    if (iVar3 < 0x96000) {
      if ((*(int *)(param_1 + 0x34) < 0x690) || (iVar2 = 0x7e800, 0x7e800 < iVar3)) {
        iVar3 = 0;
        *(undefined2 *)(param_1 + 0x12) = 0;
        goto LAB_0800b566;
      }
      goto LAB_0800b558;
    }
    if (iVar3 < 0xd2000) {
      iVar2 = 0xb8800;
      goto LAB_0800b4fa;
    }
    if (0x10dfff < iVar3) goto LAB_0800b566;
    iVar2 = 0xf2800;
    if (iVar3 < 0xf2801) goto LAB_0800b558;
  }
  iVar3 = 0;
LAB_0800b566:
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar3 < 0x1001) {
    sVar1 = *(short *)(param_1 + 0x12);
    if ((sVar1 != 0) &&
       ((*(short *)(param_1 + 0x12) = sVar1 + 9, (ushort)(sVar1 - 0x77U) < 0x10 ||
        (0xff < (ushort)(sVar1 + 9U))))) {
      *(undefined2 *)(param_1 + 0x12) = 0;
    }
  }
  else {
    *(ushort *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 3U & 0xff;
  }
  iVar2 = *(int *)(param_1 + 0x6c) + ((int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] >> 2);
  *(int *)(param_1 + 0x6c) = iVar2;
  iVar5 = *(int *)(param_1 + 0x68);
  iVar4 = iVar2 - iVar5;
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = -iVar4;
  }
  if (0xa00 < iVar3) {
    if (iVar4 < 0) {
      iVar2 = iVar5 + -0xa00;
    }
    else {
      iVar2 = iVar5 + 0xa00;
    }
  }
  *(int *)(param_1 + 0x68) = iVar2;
  return in_lr;
}

