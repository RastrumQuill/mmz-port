// sub_0806D6F8 at 0x0806D6F8 (thumb)

undefined4 sub_0806D6F8(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1703);
    local_10 = *(int *)(param_1 + 0x58) + 0x800;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + -0x1000;
      sub_0809C41C(&local_14,0x180,0xef);
      local_10 = *(int *)(param_1 + 0x58) + -0x500;
      sub_0809C41C(&local_14,0x180,0x10);
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0x1000;
      sub_0809C41C(&local_14,0x180,0x90);
      local_10 = *(int *)(param_1 + 0x58) + -0x500;
      sub_0809C41C(&local_14,0x180,0x70);
    }
    sub_0800471C(0x2c);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(int *)(param_1 + 0x2c) == 0) &&
     (sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xa00),
     sVar2 != 0)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

