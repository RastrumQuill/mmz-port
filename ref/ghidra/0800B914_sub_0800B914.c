// sub_0800B914 at 0x0800B914 (thumb)

undefined4 sub_0800B914(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02004f30 = DAT_02004f30 & ~(ushort)(*(int *)(param_1 + 0x54) << 8);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    DAT_02004f30 = (ushort)(*(int *)(param_1 + 0x54) << 8) | DAT_02004f30;
  }
  return in_lr;
}

