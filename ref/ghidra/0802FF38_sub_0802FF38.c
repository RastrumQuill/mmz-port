// sub_0802FF38 at 0x0802FF38 (thumb)

undefined4 sub_0802FF38(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
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
      goto LAB_0802ffd0;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad17c);
    sub_08029778(param_1,7);
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
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
  }
  iVar3 = sub_08015D94(*(undefined4 *)(param_1 + 0xcc));
  if (iVar3 == 0) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0802ffd0:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

