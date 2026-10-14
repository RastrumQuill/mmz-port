// sub_08035748 at 0x08035748 (thumb)

undefined4 sub_08035748(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0xbe23);
        sub_08007390(param_1 + 0x74,&DAT_0835b2d8);
        sub_0800471C(0xf9);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10400) {
        sub_08007390(param_1 + 0x74,&DAT_0835b2c0);
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      goto LAB_08035816;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbe22);
    sub_08007390(param_1 + 0x74,&DAT_0835b2d8);
    sub_0800471C(0xf9);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10500) {
    sub_08007390(param_1 + 0x74,&DAT_0835b2c0);
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  }
LAB_08035816:
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

