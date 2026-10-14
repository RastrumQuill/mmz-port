// sub_08017204 at 0x08017204 (thumb)

undefined4 sub_08017204(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(int *)(param_1 + 0x5c) << 0x10;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = uVar1 >> 0x14;
    (&DAT_02000a04)[uVar1] = (ushort)*(undefined4 *)(param_1 + 100) | 0x47;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    sub_081284E4(&DAT_08b3cee0,((ushort)(&DAT_02000a04)[uVar1 >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

