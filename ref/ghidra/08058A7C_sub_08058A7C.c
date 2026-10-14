// sub_08058A7C at 0x08058A7C (thumb)

undefined4 sub_08058A7C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x50) < DAT_02021648 + 0x800) {
    *(int *)(param_1 + 0x50) = DAT_02021648 + 0x800;
  }
  cVar1 = sub_08009B9C(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 2,
                       *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 2);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar2;
    cVar1 = sub_08009B9C(iVar2,*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 0x10);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x58);
    }
  }
  cVar1 = sub_08009B9C(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x800);
  if (cVar1 == 'A') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x100;
  }
  return in_lr;
}

