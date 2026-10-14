// sub_080CDED0 at 0x080CDED0 (thumb)

undefined4 sub_080CDED0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xbc);
  cVar1 = *(char *)(param_1 + 0xb5);
  iVar3 = *(int *)(param_1 + 0xb8) + -1;
  *(int *)(param_1 + 0xb8) = iVar3;
  if ((iVar3 < 1) || (uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), 0x3000 < uVar4)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    iVar3 = -(int)*(short *)(param_1 + 0xa4);
    iVar5 = iVar3 + 0x40;
    if (iVar5 < 0) {
      iVar5 = iVar3 + 0x43;
    }
    iVar5 = iVar5 >> 2;
    if (3 < iVar5) {
      iVar5 = 3;
    }
    if (cVar1 == '\0') {
      iVar6 = *(int *)(&UNK_088636a8 + iVar5 * 4);
    }
    else {
      iVar6 = iVar6 + *(int *)(&UNK_088636a8 + iVar5 * 4);
      if (0x200 < iVar6) {
        iVar6 = 0x200;
      }
    }
    *(undefined *)(param_1 + 0xb5) = 0x10;
    *(int *)(param_1 + 0xbc) = iVar6;
    *(short *)(param_1 + 0xa4) = 0x40;
    if (*(char *)(param_1 + 0xd) != '\x02') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xb8);
  if ((int)uVar4 < 0x3c) {
    if ((uVar4 & 1) == 0) {
LAB_080cdfe0:
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    if (0xb3 < (int)uVar4) goto LAB_080cdfe8;
    if ((uVar4 & 3) != 0) goto LAB_080cdfe0;
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_080cdfe8:
  sub_08128884(param_1,*(undefined4 *)(&UNK_08863650 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

