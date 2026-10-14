// sub_0800BCA0 at 0x0800BCA0 (thumb)

undefined4 sub_0800BCA0(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar3] = (ushort)uVar2 | 0x45;
    (&DAT_020023cc)[uVar3] = 0;
    sub_08003B28(&DAT_085263b0,(uVar2 & 0x1f00) << 3,0x800);
    DAT_02002400 = 0x3b44;
    if (DAT_0202f4a4 == '\0') {
      DAT_02002402 = 0x1010;
    }
    else {
      DAT_02002402 = 0x1000;
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((DAT_0202f4a4 != '\0') && ((*(ushort *)(param_1 + 0x10) & 0x1f) == 0)) &&
     ((DAT_02002402 & 0x1f) != 0)) {
    DAT_02002402 = (DAT_02002402 & 0x1f) - 1 & 0x1f | 0x1000;
  }
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) - 1;
  sVar1 = *(short *)(param_1 + 0x12) + 1;
  *(short *)(param_1 + 0x12) = sVar1;
  if (sVar1 == 0x30) {
    *(undefined2 *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

