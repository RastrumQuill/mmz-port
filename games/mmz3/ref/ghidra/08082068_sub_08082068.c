// sub_08082068 at 0x08082068 (thumb)

undefined4 sub_08082068(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xb4);
  if (uVar1 != 10) {
    if (uVar1 < 10) {
      iVar2 = 10 - uVar1;
      if (0 < iVar2) {
        do {
          sub_08081EDC(param_1,param_2);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar2 = uVar1 - 10;
      if (0 < iVar2) {
        do {
          sub_0808200C(param_1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return in_lr;
}

