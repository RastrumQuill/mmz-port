// sub_080B2170 at 0x080B2170 (thumb)

undefined4 sub_080B2170(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb5) = 0;
  if (*(char *)(param_1 + 0x11) == '\x02') {
    *(undefined *)(param_1 + 0xb5) = 4;
  }
  uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08860128,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b20c1;
  sub_080B277C(param_1);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

