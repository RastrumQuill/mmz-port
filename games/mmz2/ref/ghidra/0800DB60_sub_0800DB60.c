// sub_0800DB60 at 0x0800DB60 (thumb)

undefined4 sub_0800DB60(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar2 = *(int *)(param_1 + 0x5c);
    uVar1 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_02000f94)[(uint)(iVar2 << 0x10) >> 0x14] = (ushort)uVar1 | 0x4044;
    sub_08002824(&DAT_08377388,(uVar1 & 0x1f00) << 3,0x800);
    sub_08002824(&DAT_08377b90,
                 ((ushort)(&DAT_02000f94)[(uint)(iVar2 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x800,0x800
                );
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 10;
  return in_lr;
}

