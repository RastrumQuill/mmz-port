// sub_08043640 at 0x08043640 (thumb)

undefined4 sub_08043640(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CD28();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x802d);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08852720,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x804386d;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_08002B10(0x45);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080436BC(param_1);
  return in_lr;
}

