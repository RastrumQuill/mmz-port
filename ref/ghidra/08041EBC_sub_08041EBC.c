// sub_08041EBC at 0x08041EBC (thumb)

undefined4 sub_08041EBC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,6);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    uVar3 = sub_080C8AD0(*(int *)(param_1 + 0xb8) - (*(int *)(param_1 + 0x4c) + -0xf000),0x14);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffb00;
    *(undefined *)(param_1 + 0x12) = 0x14;
  }
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    sub_080297C0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x30;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + 0xf000;
        sub_08029778(param_1,0x13);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        *(undefined *)(param_1 + 0x12) = 0x14;
      }
      sub_080297C0(param_1);
    }
  }
  else if (bVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if ((bVar1 == 3) && (sub_080297C0(param_1), *(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

