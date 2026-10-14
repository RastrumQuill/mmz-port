// sub_08019724 at 0x08019724 (thumb)

undefined4 sub_08019724(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a00 = DAT_02000a00 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    DAT_0202ea58 = 0xd2000;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

