// sub_080332C8 at 0x080332C8 (thumb)

undefined4 sub_080332C8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_0801CF00(param_1,0x4e01);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0x4e02);
    uVar2 = sub_0800864C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    sub_0802B7A4(param_1);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

