// sub_08070494 at 0x08070494 (thumb)

undefined4 sub_08070494(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(*(int *)(param_1 + 0xb4) + 0xb4) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

