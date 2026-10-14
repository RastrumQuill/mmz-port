// sub_0806F9B0 at 0x0806F9B0 (thumb)

undefined4 sub_0806F9B0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8d00);
    sub_0800249C(0x72,0x280);
    sub_0800249C(0x94,0x2a0);
    sub_0800249C(0x73,0x40);
    sub_0800249C(0xdb,0);
    sub_080025D8(0x72);
    sub_080025D8(0x94);
    sub_080025D8(0x73);
    sub_080025D8(0xdb);
    *(undefined *)(param_1 + 0xcd) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x80;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (DAT_0202ea30 + 0x800 <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    sub_080025D8(0x72);
    sub_080025D8(0x94);
    sub_080025D8(0x73);
    sub_080025D8(0xdb);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_08002624(0x72);
    sub_08002624(0x94);
    sub_08002624(0x73);
    sub_08002624(0xdb);
    *(undefined *)(param_1 + 0xcd) = 0;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

