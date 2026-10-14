// sub_0800CE94 at 0x0800CE94 (thumb)

undefined4 sub_0800CE94(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] =
         (ushort)*(undefined4 *)(param_1 + 0x5c) | 0x4044;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

