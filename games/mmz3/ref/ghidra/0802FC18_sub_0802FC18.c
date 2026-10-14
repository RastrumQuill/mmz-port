// sub_0802FC18 at 0x0802FC18 (thumb)

undefined4 sub_0802FC18(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xee);
  if (bVar1 == 1) {
LAB_0802fc6a:
    sub_08034558(param_1,0x1201);
    if (*(char *)(param_1 + 0xe) != '\x02') {
      return in_lr;
    }
    *(char *)(param_1 + 0xee) = *(char *)(param_1 + 0xee) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_08017700(param_1,0x1201);
      if (*(char *)(param_1 + 0xc2) == '\x02') {
        sub_08038394(param_1,0x11);
      }
      else {
        sub_08038394(param_1,0x10);
      }
      *(char *)(param_1 + 0xee) = *(char *)(param_1 + 0xee) + '\x01';
      goto LAB_0802fc6a;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_0802fc94;
    }
  }
  sub_08017700(param_1,0x1202);
  *(char *)(param_1 + 0xee) = *(char *)(param_1 + 0xee) + '\x01';
LAB_0802fc94:
  sub_08034558(param_1,0x1202);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_080177CC(param_1,0x403,2,1);
    }
    else {
      sub_080177CC(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0xec) = 0;
  }
  return in_lr;
}

