// sub_0803BED8 at 0x0803BED8 (thumb)

undefined4 sub_0803BED8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080297C0(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_0803bf88;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082adc40);
    sub_08029778(param_1,2);
    sub_080297C0(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  iVar3 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar3 < 0) {
    iVar4 = *(int *)(param_1 + 0x58);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x100 < iVar4) {
      sub_08001EAC(0x48);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
  }
  iVar3 = sub_08015D94(*(undefined4 *)(param_1 + 0xe4));
  if (iVar3 == 0) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0803bf88:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

