// sub_0800F2AC at 0x0800F2AC (thumb)

undefined4 sub_0800F2AC(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_02000f94)[uVar1] = (ushort)uVar2 | 0x46;
    (&DAT_02000f9c)[uVar1] = 0;
    sub_08002880(0x41dc41dc,(uVar2 & 0x1f00) << 3,0x800);
    DAT_02000f90 = DAT_02000f90 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

