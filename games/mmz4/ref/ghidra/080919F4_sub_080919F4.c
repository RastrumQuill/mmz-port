// sub_080919F4 at 0x080919F4 (thumb)

undefined4 sub_080919F4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbe) == '\x01') {
      local_10 = *(int *)(param_1 + 0x54);
      local_c = *(int *)(param_1 + 0x58) + 0xf00;
      sub_080DC974(&local_10,2,0);
      sub_080DC974(&local_10,2,1);
      sub_0801CF00(param_1,0x3c10);
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_10 = *(int *)(param_1 + 0x54);
        iVar1 = 0xf00;
      }
      else {
        local_10 = *(int *)(param_1 + 0x54);
        iVar1 = -0xf00;
      }
      local_10 = local_10 + iVar1;
      local_c = *(int *)(param_1 + 0x58);
      sub_080DC974(&local_10,2,0);
      sub_080DC974(&local_10,2,1);
      sub_0801CF00(param_1,0x3c12);
    }
    sub_08002B10(0xe7);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

