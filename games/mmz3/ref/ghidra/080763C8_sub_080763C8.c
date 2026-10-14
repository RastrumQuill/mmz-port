// sub_080763C8 at 0x080763C8 (thumb)

undefined4 sub_080763C8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x3c;
        sub_08017700(param_1,0x2a05);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_08076468;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        *(undefined *)(param_1 + 0xd) = 3;
        sub_08075960(param_1);
      }
      sub_080177F4(param_1);
      goto LAB_08076468;
    }
    if (bVar1 != 0) goto LAB_08076468;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08363918);
    sub_08017700(param_1,0x2a04);
    *(undefined *)(param_1 + 0x12) = 100;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
LAB_08076468:
  iVar3 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x200);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar5 = *(int *)(param_1 + 0x58) + 0x200;
  }
  else if (iVar3 < 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = iVar3 + -0x80;
    iVar3 = iVar3 + -0x280;
    iVar5 = *(int *)(param_1 + 0x58) + 0x200;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = iVar3 + 0x80;
    iVar3 = iVar3 + 0x280;
    iVar5 = *(int *)(param_1 + 0x58) + 0x200;
  }
  uVar4 = sub_08008FEC(iVar3,iVar5);
  if ((uVar4 & 0x400) != 0) {
    *(undefined *)(param_1 + 0x13) = 1;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if (iVar3 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x80;
  }
  return in_lr;
}

