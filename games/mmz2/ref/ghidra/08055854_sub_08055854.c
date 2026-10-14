// sub_08055854 at 0x08055854 (thumb)

undefined4 sub_08055854(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080127E4(param_1,0xa614);
    sub_08006E08(param_1 + 0x74,&DAT_0833c228);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0xcf) = 1;
    *(undefined *)(param_1 + 0xd0) = 1;
    sub_080128D4(param_1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    sub_080128D4(param_1);
    *(undefined *)(param_1 + 0xcf) = 0;
    if (((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x68) == 0)) ||
       (0xf000 < (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) + 0x7800U)) {
      sub_080573FC(param_1);
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

