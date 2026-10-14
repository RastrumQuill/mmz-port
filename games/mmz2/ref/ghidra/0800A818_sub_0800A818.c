// sub_0800A818 at 0x0800A818 (thumb)

undefined4 sub_0800A818(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_02000f94)[uVar1] = (ushort)uVar2 | 0x44;
    (&DAT_02000f9c)[uVar1] = 0;
    sub_080EEF68(&DAT_0836fb08,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 4;
  return in_lr;
}

