// sub_0800B848 at 0x0800B848 (thumb)

undefined4 sub_0800B848(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] =
         (ushort)*(undefined4 *)(param_1 + 0x5c) | 0x6046;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_02022ad6 & 0x10) == 0) {
    DAT_02004f30 = DAT_02004f30 & ~(ushort)(*(int *)(param_1 + 0x54) << 8);
  }
  else {
    DAT_02004f30 = (ushort)(*(int *)(param_1 + 0x54) << 8) | DAT_02004f30;
  }
  return in_lr;
}

