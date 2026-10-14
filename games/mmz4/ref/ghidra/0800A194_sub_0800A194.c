// sub_0800A194 at 0x0800A194 (thumb)

undefined4 sub_0800A194(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar3] = (ushort)uVar2 | 0x45;
    *(undefined4 *)(&DAT_02000a0c + uVar3 * 2) = 0;
    sub_08001F1C(&DAT_08b37680,(uVar2 & 0x1f00) << 3,0x800);
    DAT_02000a40 = 0x3b44;
    if (DAT_0202dad4 == '\0') {
      DAT_02000a42 = 0x1010;
    }
    else {
      DAT_02000a42 = 0x1000;
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((DAT_0202dad4 != '\0') && ((*(ushort *)(param_1 + 0x10) & 0x1f) == 0)) &&
     ((DAT_02000a42 & 0x1f) != 0)) {
    DAT_02000a42 = (DAT_02000a42 & 0x1f) - 1 & 0x1f | 0x1000;
  }
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) - 1;
  sVar1 = *(short *)(param_1 + 0x12) + 1;
  *(short *)(param_1 + 0x12) = sVar1;
  if (sVar1 == 0x30) {
    *(undefined2 *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

