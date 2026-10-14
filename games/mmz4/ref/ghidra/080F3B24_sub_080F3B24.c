// sub_080F3B24 at 0x080F3B24 (thumb)

undefined4 sub_080F3B24(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CD28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08866aac,param_1 + 0x54,0x1c);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80f4c59;
  sub_0801CF00(param_1,0x4c01);
  *(undefined *)(param_1 + 0x25) = 0xf;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  return in_lr;
}

