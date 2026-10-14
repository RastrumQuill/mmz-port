// sub_0809EADC at 0x0809EADC (thumb)

undefined4 sub_0809EADC(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_0800736C(param_1 + 0x74,&DAT_08367690,param_1 + 0x54,(int)*(short *)(param_1 + 0xb4));
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x809ecbd;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0809EB3C(param_1);
  return in_lr;
}

