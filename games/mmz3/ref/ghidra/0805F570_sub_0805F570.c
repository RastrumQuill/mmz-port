// sub_0805F570 at 0x0805F570 (thumb)

undefined4 sub_0805F570(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = sub_080608A8();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 2;
    iVar3 = *(int *)(DAT_0202f5c0 + 0x54);
    if (iVar3 == *(int *)(param_1 + 0xe0)) {
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar3 < iVar4) {
        iVar3 = *(int *)(param_1 + 0xd8) + -0x1800;
      }
      else {
        iVar3 = *(int *)(param_1 + 0xd4) + 0x1800;
      }
    }
    else {
      if (iVar3 < *(int *)(param_1 + 0xe0)) {
        iVar3 = *(int *)(param_1 + 0xd8);
        iVar4 = -0x1800;
      }
      else {
        iVar3 = *(int *)(param_1 + 0xd4);
        iVar4 = 0x1800;
      }
      iVar3 = iVar3 + iVar4;
      iVar4 = *(int *)(param_1 + 0x54);
    }
    uVar2 = FUN_080fe2f8(iVar3 - iVar4,0x2e);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa40;
    sub_0805F5F8(param_1);
  }
  return in_lr;
}

