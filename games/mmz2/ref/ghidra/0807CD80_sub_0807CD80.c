// sub_0807CD80 at 0x0807CD80 (thumb)

undefined4 sub_0807CD80(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_083404d8 + (uint)*(byte *)(param_1 + 0xbd) * 0x30);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_08012ACC(param_1);
  return in_lr;
}

