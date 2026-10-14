// sub_080A9444 at 0x080A9444 (thumb)

undefined4 sub_080A9444(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08005760(param_1 + 0x74,&DAT_0885f468,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80a9649;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb6) = 1;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x200;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined *)(param_1 + 0xbc) = 0xc;
  }
  uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined *)(param_1 + 0xd) = 4;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080A94E0(param_1);
  return in_lr;
}

