// sub_08048460 at 0x08048460 (thumb)

undefined4 sub_08048460(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x1f) = 0;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x180;
    }
    else {
      uVar3 = 0xfffffe80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe80;
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(iVar4 + 9)] + 0xc);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  piVar5 = (int *)(param_1 + 0xdc);
  iVar4 = sub_08015D94(*piVar5);
  if (iVar4 != 0) {
    *piVar5 = 0;
  }
  iVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar4 < *(int *)(param_1 + 0x50)) {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    if (*piVar5 == 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 2;
      *(undefined *)(param_1 + 0x12) = 0x10;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  return in_lr;
}

