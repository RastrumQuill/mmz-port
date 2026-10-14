// sub_0802D084 at 0x0802D084 (thumb)

undefined4 sub_0802D084(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (-1 < *(short *)(param_1 + 0xd8)) {
      sub_08001EE8();
      *(short *)(param_1 + 0xd8) = -1;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082acea0);
    sub_08029778(param_1,0x13);
    sub_080297C0(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  iVar1 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  }
  iVar1 = sub_08015D94(*(undefined4 *)(param_1 + 0xdc));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

