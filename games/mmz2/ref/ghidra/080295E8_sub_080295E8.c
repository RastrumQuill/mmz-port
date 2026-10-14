// sub_080295E8 at 0x080295E8 (thumb)

undefined4 sub_080295E8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x17f);
  if (bVar1 != 0x84) {
    if (0x84 < bVar1) {
      if (bVar1 == 0x87) {
        if (*(char *)(param_1 + 0x73) != '\x03') {
          return in_lr;
        }
        sub_0801E9FC(param_1,0x84);
        return in_lr;
      }
      if (bVar1 != 0x8a) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x04') {
        return in_lr;
      }
      sub_0801E9FC(param_1,0x87);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x202;
    sub_0801E9FC(param_1,0x88);
  }
  return in_lr;
}

