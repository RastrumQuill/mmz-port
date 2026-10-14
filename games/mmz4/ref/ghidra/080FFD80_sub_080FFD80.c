// sub_080FFD80 at 0x080FFD80 (thumb)

undefined4 sub_080FFD80(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(char *)(param_1 + 0xb5) = DAT_0202dae0._1_1_;
  pbVar1 = (byte *)(param_1 + 0xb4);
  *pbVar1 = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088682d8 + (uint)*pbVar1 * 0x108,param_1 + 0x54,0xff);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    sub_0810000C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088682d8 + (uint)*pbVar1 * 0x108,param_1 + 0x54,0xff);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  sub_080FFE5C(param_1);
  return in_lr;
}

