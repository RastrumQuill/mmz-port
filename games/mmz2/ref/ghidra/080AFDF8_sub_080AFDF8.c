// sub_080AFDF8 at 0x080AFDF8 (thumb)

undefined4 sub_080AFDF8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    sub_08002EA0((&DAT_083468fc)[*(byte *)(param_1 + 0x10)]);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      sub_080032EC(0);
    }
    uVar3 = 0x18;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08002EA0((&DAT_083468fc)[*(byte *)(param_1 + 0x10)]);
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
      sub_08002EA0((&DAT_083468fc)[*(byte *)(param_1 + 0x10)]);
      cVar2 = *(char *)(param_1 + 0x12) + '\x01';
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '!') {
        return in_lr;
      }
      sub_08002EF0((&DAT_083468fc)[*(byte *)(param_1 + 0x10)]);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080AFD8C(param_1);
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
    sub_08002D68((&DAT_083468fc)[*(byte *)(param_1 + 0x10)],0x20);
    uVar3 = 0x26;
  }
  *(undefined *)(param_1 + 0x12) = uVar3;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

