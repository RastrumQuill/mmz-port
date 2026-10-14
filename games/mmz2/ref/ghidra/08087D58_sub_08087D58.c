// sub_08087D58 at 0x08087D58 (thumb)

undefined4 sub_08087D58(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 100) = 0x400;
    *(uint *)(param_1 + 100) = (uint)*(byte *)(param_1 + 0xb4) * -0x800 + 0x400;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffc00;
    *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0xb5) * 0x800 + -0x400;
    sub_080127E4(param_1,0x6b0a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08006E08(param_1 + 0x74,
                 &DAT_08341658 + (uint)(byte)(&DAT_0834171a)[*(char *)(param_1 + 0x71)] * 0x30);
    break;
  case 2:
    sub_080127E4(param_1,0x6b08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080128D4(param_1);
    if ((*(uint *)(iVar1 + 0xb4) & 4) == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    sub_080032EC(0xe5);
    sub_080127E4(param_1,0x6b0b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(uint *)(iVar1 + 0xb4) & 0x18) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_08006E08(param_1 + 0x74,
                 &DAT_08341658 + (uint)(byte)(&DAT_0834171c)[*(char *)(param_1 + 0x71)] * 0x30);
  }
  sub_08087930(param_1);
  sub_080879C8(param_1);
  return in_lr;
}

