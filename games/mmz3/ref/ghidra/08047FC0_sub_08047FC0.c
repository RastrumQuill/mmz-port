// sub_08047FC0 at 0x08047FC0 (thumb)

undefined4 sub_08047FC0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_0835ee24);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x2000;
        *(undefined *)(param_1 + 0x13) = 0x30;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      sub_0800471C(0x115);
    }
    else {
      sub_0800471C(0x114);
    }
    *(undefined *)(param_1 + 0x13) = 0x30;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x5c) + -0x10;
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 199) * 0x20;
  *(int *)(param_1 + 0x5c) = iVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar2 == '\0') {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar5 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar3 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar5 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

