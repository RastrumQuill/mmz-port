// sub_080C9C20 at 0x080C9C20 (thumb)

undefined4 sub_080C9C20(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x1e;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0xc);
      if (cVar2 == '\0') {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        sub_080B9330((uVar4 * 0x20 >> 0x15) + *(int *)(param_1 + 0x54) + -0x400,
                     *(int *)(param_1 + 0x58) + -0x1500);
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0xe1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x106);
    sub_08017700(param_1,0x1000);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0xc);
  if (cVar2 == '\0') {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    sub_080B9330((uVar4 * 0x20 >> 0x15) + *(int *)(param_1 + 0x54) + -0x400,
                 *(int *)(param_1 + 0x58) + -0x1500);
  }
  if (0x2b < *(byte *)(param_1 + 0x12)) {
    if (DAT_0202e48c < *(int *)(param_1 + 0x58) + -0x3400) {
      sub_080CA004(param_1,*(char *)(param_1 + 0x13) == '\x02');
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      uVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
      *(undefined *)(param_1 + 0x13) = uVar3;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

