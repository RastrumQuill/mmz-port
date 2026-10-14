// sub_08018CC8 at 0x08018CC8 (thumb)

undefined4 sub_08018CC8(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082a83cc,param_1 + 0x4c,*(undefined *)(param_1 + 0x114));
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x8018d95;
  *(undefined **)(param_1 + 0x108) = &DAT_082a8748;
  *(undefined **)(param_1 + 0x10c) = &DAT_082a8748;
  return in_lr;
}

