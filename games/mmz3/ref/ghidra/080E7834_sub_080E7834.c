// sub_080E7834 at 0x080E7834 (thumb)

undefined4 sub_080E7834(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((byte)(*(byte *)(param_1 + 0x10) - 6) < 0xe) || (0x6d < *(byte *)(param_1 + 0x10))) {
      if (DAT_0200247b == '\0') {
        uVar1 = 0xb00b;
      }
      else {
        if (DAT_0200247b != '\x01') {
          if (DAT_0200247b == '\x02') {
            uVar1 = 0xb20b;
            goto LAB_080e7876;
          }
          goto LAB_080e78c6;
        }
        uVar1 = 0xb10b;
      }
LAB_080e7876:
      sub_080177CC(param_1,uVar1,5,2);
    }
    else {
      if (DAT_0200247b == '\0') {
        uVar1 = 0xb00b;
LAB_080e78a6:
        sub_08017700(param_1,uVar1);
      }
      else {
        if (DAT_0200247b == '\x01') {
          uVar1 = 0xb10b;
          goto LAB_080e78a6;
        }
        if (DAT_0200247b == '\x02') {
          sub_08017700(param_1,0xb20b);
        }
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
LAB_080e78c6:
    if (((int)(uint)*(byte *)(DAT_0203df90 + (uint)(*(byte *)(param_1 + 0x10) >> 2)) >>
         (*(byte *)(param_1 + 0x10) & 3) + 4 & 1U) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (((int)(uint)*(byte *)(DAT_0203df90 + (uint)(*(byte *)(param_1 + 0x10) >> 2)) >>
         (*(byte *)(param_1 + 0x10) & 3) + 4 & 1U) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  if (*(char *)(param_1 + 0xd) != '\x02') goto LAB_080e7952;
  if (DAT_0200247b == '\0') {
    uVar1 = 0x7f00;
LAB_080e7932:
    sub_08017700(param_1,uVar1);
  }
  else {
    if (DAT_0200247b == '\x01') {
      uVar1 = 0x7f01;
      goto LAB_080e7932;
    }
    if (DAT_0200247b == '\x02') {
      sub_08017700(param_1,0x7f02);
    }
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080e7952:
  sub_080177F4(param_1);
  return in_lr;
}

