// sub_0804D408 at 0x0804D408 (thumb)

undefined4 sub_0804D408(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CD28();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8314);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885439c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x804d669;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_08002B10(0x45);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0804D484(param_1);
  return in_lr;
}

