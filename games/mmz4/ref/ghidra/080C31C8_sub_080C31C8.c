// sub_080C31C8 at 0x080C31C8 (thumb)

undefined4 sub_080C31C8(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8607);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0886204c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0x50;
  }
  else {
    uVar1 = 0x30;
  }
  *(undefined *)(param_1 + 0xb4) = uVar1;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080C30FC(param_1,4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C3168(param_1);
  return in_lr;
}

