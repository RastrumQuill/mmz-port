// sub_08034DA8 at 0x08034DA8 (thumb)

undefined4 sub_08034DA8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad648);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x40;
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
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    if (((*(ushort *)(param_1 + 0x90) & 0x100) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40), *(char *)(iVar2 + 8) == '\0')) {
      sub_0801D540(iVar2,0x99,~(*(byte *)(param_1 + 10) >> 4) & 1,0);
    }
  }
  if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xc0) + -0x6000) {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

