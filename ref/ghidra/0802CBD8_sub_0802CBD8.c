// sub_0802CBD8 at 0x0802CBD8 (thumb)

undefined4 sub_0802CBD8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08029778(param_1,0x14);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082acdf8);
    sub_08029778(param_1,0x13);
    uVar3 = 0x100;
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    if (0 < *(int *)(param_1 + 0xb8)) {
      uVar3 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  sub_0802B670(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
  return in_lr;
}

