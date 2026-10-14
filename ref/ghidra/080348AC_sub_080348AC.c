// sub_080348AC at 0x080348AC (thumb)

undefined4 sub_080348AC(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xf);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    if (*(char *)(param_1 + 0xd0) != '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
    }
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x3500;
    }
    *(undefined *)(param_1 + 0x45) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_0800561C(param_1 + 0x74,&DAT_082ad5f4);
    sub_08001EAC(0x8c);
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  piVar2 = (int *)(param_1 + 0xe0);
  iVar1 = sub_08015D94(*piVar2);
  if (iVar1 != 0) {
    *piVar2 = 0;
  }
  if (*(int *)(param_1 + 0xc0) < *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0);
    if (*piVar2 == 0) {
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  return in_lr;
}

