// sub_0800DDE4 at 0x0800DDE4 (thumb)

undefined4 sub_0800DDE4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (ushort)*(undefined4 *)(param_1 + 100) | 0x4047;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  return in_lr;
}

