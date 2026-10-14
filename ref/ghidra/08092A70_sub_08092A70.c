// sub_08092A70 at 0x08092A70 (thumb)

undefined4 sub_08092A70(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x18;
      if (*(char *)(param_1 + 0x10) != '\0') {
        sub_08001EAC(0xd5);
      }
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) &&
       (cVar2 = *(char *)(param_1 + 0x12) + '\x01', *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\''
       )) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x26;
    }
  }
  else if (bVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if ((bVar1 == 3) &&
          (cVar2 = *(char *)(param_1 + 0x12) + '\x01', *(char *)(param_1 + 0x12) = cVar2,
          cVar2 == '!')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_080929F8(param_1);
  }
  return in_lr;
}

