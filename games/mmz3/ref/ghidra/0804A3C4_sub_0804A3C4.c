// sub_0804A3C4 at 0x0804A3C4 (thumb)

undefined4 sub_0804A3C4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 1) * '\x12' + '<';
        sub_08017700(param_1,0xa70e);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 0xd;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (0x6400 < (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4)) + 0x3200U) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080177F4(param_1);
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f544);
    *(undefined *)(param_1 + 0xbe) = 0;
    sub_08017700(param_1,0xa70d);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x71) == '\x06') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0x12) = 1;
    sub_0800471C(0x5d);
    iVar3 = *(int *)(param_1 + 0x54) + -0x3700;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = *(int *)(param_1 + 0x54) + 0x3700;
    }
    sub_080A03B4(param_1,iVar3,*(int *)(param_1 + 0x58) + -0x3200,*(byte *)(param_1 + 10) >> 4 & 1,0
                );
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) & 0xfd;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

