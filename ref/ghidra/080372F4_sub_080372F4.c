// sub_080372F4 at 0x080372F4 (thumb)

undefined4 sub_080372F4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = sub_08038B7C();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 2;
    iVar3 = *(int *)(DAT_0202286c + 0x4c);
    if (iVar3 == *(int *)(param_1 + 0xe4)) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar3 < iVar4) {
        iVar3 = *(int *)(param_1 + 0xdc) + -0x1800;
      }
      else {
        iVar3 = *(int *)(param_1 + 0xd8) + 0x1800;
      }
    }
    else {
      if (iVar3 < *(int *)(param_1 + 0xe4)) {
        iVar3 = *(int *)(param_1 + 0xdc);
        iVar4 = -0x1800;
      }
      else {
        iVar3 = *(int *)(param_1 + 0xd8);
        iVar4 = 0x1800;
      }
      iVar3 = iVar3 + iVar4;
      iVar4 = *(int *)(param_1 + 0x4c);
    }
    uVar2 = sub_080C8AD0(iVar3 - iVar4,0x2e);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffa40;
    sub_0803737C(param_1);
  }
  return in_lr;
}

