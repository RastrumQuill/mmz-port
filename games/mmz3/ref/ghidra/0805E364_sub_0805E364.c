// sub_0805E364 at 0x0805E364 (thumb)

undefined4 sub_0805E364(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x3f01);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080C3528(param_1);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,0x3f00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x71) == '\x03')) {
    sub_08007390(param_1 + 0x74,&DAT_0836196c);
    sub_0800471C(0xf0);
    uVar3 = 0;
    do {
      sub_080ADD80(param_1,uVar3 & 0xff);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 5);
    *(undefined *)(param_1 + 0x13) = 1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

