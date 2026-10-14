// sub_080F40B0 at 0x080F40B0 (thumb)

undefined4 sub_080F40B0(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CD28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08866ac4,param_1 + 0x54,0x1c);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80f4c59;
  sub_0801CF00(param_1,0x4c05);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  *(undefined *)(param_1 + 0x25) = 0xf;
  *(undefined *)(param_1 + 0xb5) = 0xc0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  return in_lr;
}

