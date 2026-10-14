// sub_08034F70 at 0x08034F70 (thumb)

undefined4 sub_08034F70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x45) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    sub_08001EAC(0x35);
    *(undefined *)(param_1 + 0x12) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x3500;
    if (((*(ushort *)(param_1 + 0x90) & 0x100) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40), *(char *)(iVar2 + 8) == '\0')) {
      sub_0801D540(iVar2,0x99,~(*(byte *)(param_1 + 10) >> 4) & 1,1);
    }
  }
  sub_080297C0(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar3 = -0xc00;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar3 = 0xc00;
    }
    *(int *)(iVar2 + 0x4c) = iVar1 + iVar3;
    *(int *)(iVar2 + 0x50) = *(int *)(param_1 + 0x50) + 0x800;
  }
  if (*(int *)(param_1 + 0xc0) < *(int *)(param_1 + 0x50) + 0x4600) {
    *(undefined *)(param_1 + 0xd) = 0x1a;
    *(undefined *)(param_1 + 0xe) = 1;
    local_14 = sub_08008360(*(undefined4 *)(DAT_0202286c + 0x4c),
                            *(undefined4 *)(DAT_0202286c + 0x50));
    local_14 = local_14 + 0x800;
    local_18 = *(int *)(DAT_0202286c + 0x4c) + 0x1000;
    sub_0808D58C(&local_18,6,1);
    local_18 = *(int *)(DAT_0202286c + 0x4c) + 0x2000;
    sub_0808D58C(&local_18,6,1);
    local_18 = *(int *)(DAT_0202286c + 0x4c) + -0x1000;
    sub_0808D58C(&local_18,6,0);
    local_18 = *(int *)(DAT_0202286c + 0x4c) + -0x2000;
    sub_0808D58C(&local_18,6,0);
    sub_0801412C(4,param_1 + 0x4c);
    sub_08064490(param_1,6);
  }
  return in_lr;
}

