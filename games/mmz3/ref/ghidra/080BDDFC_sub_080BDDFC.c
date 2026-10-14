// sub_080BDDFC at 0x080BDDFC (thumb)

undefined4 sub_080BDDFC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_080bdeac;
  }
  cVar2 = *(char *)(param_1 + 0x10);
  if (cVar2 == '\0') {
    uVar3 = 0xa907;
LAB_080bde46:
    sub_08017700(param_1,uVar3);
  }
  else {
    if (cVar2 == '\x01') {
      uVar3 = 0xa907;
      goto LAB_080bde46;
    }
    if (cVar2 == '\x02') {
      uVar3 = 0xa907;
      goto LAB_080bde46;
    }
    if (cVar2 == '\x03') {
      uVar3 = 0xa907;
      goto LAB_080bde46;
    }
    if (cVar2 == '\x04') {
      uVar3 = 0xa90b;
      goto LAB_080bde46;
    }
    if (cVar2 == '\x05') {
      sub_08017700(param_1,0xa90b);
    }
  }
  uVar4 = *(byte *)(param_1 + 0x7c) & 1;
  if ((*(byte *)(param_1 + 0x7c) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(undefined *)(param_1 + 0x13) = 3;
  *(undefined *)(param_1 + 0x12) = 10;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080bdeac:
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined *)(param_1 + 0x12) = 10;
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\0')) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    else if (*(byte *)(param_1 + 0x10) < 4) {
      sub_08017700(param_1,*(undefined2 *)(&DAT_0836b73c + (*(byte *)(param_1 + 0x13) - 1) * 2));
    }
    else {
      sub_08017700(param_1,*(undefined2 *)(&DAT_0836b742 + (*(byte *)(param_1 + 0x13) - 1) * 2));
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

