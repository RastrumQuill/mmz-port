// sub_080B522C at 0x080B522C (thumb)

undefined4 sub_080B522C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    sub_080041E4((&DAT_0836afd8)[*(byte *)(param_1 + 0x10)]);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      sub_0800471C(0);
    }
    uVar3 = 0x18;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080041E4((&DAT_0836afd8)[*(byte *)(param_1 + 0x10)]);
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != -1) {
          return in_lr;
        }
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        *(undefined *)(param_1 + 0x12) = 0;
        return in_lr;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_080041E4((&DAT_0836afd8)[*(byte *)(param_1 + 0x10)]);
      cVar2 = *(char *)(param_1 + 0x12) + '\x01';
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '!') {
        return in_lr;
      }
      sub_08004230((&DAT_0836afd8)[*(byte *)(param_1 + 0x10)]);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080B51C0(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\'') {
      return in_lr;
    }
    sub_080040A8((&DAT_0836afd8)[*(byte *)(param_1 + 0x10)],0x20);
    uVar3 = 0x26;
  }
  *(undefined *)(param_1 + 0x12) = uVar3;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

