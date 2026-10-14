// sub_08036660 at 0x08036660 (thumb)

undefined4 sub_08036660(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xb);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    if (*(char *)(param_1 + 200) != '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082ad6fc);
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x60;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  piVar3 = (int *)(param_1 + 0xd8);
  iVar2 = sub_08015D94(*piVar3);
  if (iVar2 != 0) {
    *piVar3 = 0;
  }
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar2 < *(int *)(param_1 + 0x50)) {
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    if (*piVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 0x14;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  return in_lr;
}

