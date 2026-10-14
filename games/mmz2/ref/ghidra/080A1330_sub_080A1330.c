// sub_080A1330 at 0x080A1330 (thumb)

undefined4 sub_080A1330(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080032EC(0x38);
    }
    sub_0801260C(param_1);
    sub_080127E4(param_1,0x3b04);
    pbVar2 = (byte *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x5c) = (short)(&DAT_080ef450)[*pbVar2 + 0x40 & 0xff] * 5;
    *(int *)(param_1 + 0x60) = (short)(&DAT_080ef450)[*pbVar2] * 5;
    *(byte *)(param_1 + 0x24) = *pbVar2 - 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083444d4,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80a1101;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else if (*(char *)(param_1 + 0xf) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08008CFC();
  if (sVar1 != 0) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

