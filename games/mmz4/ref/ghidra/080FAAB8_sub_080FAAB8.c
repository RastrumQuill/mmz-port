// sub_080FAAB8 at 0x080FAAB8 (thumb)

undefined4 sub_080FAAB8(int param_1)

{
  sbyte sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sVar1 = *(sbyte *)(param_1 + 0x11);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    if (((int)(uint)*(byte *)(iVar3 + 0xb5) >> sVar1 & 1U) != 0) {
      iVar2 = *(int *)(iVar3 + 0xb8);
      if (iVar2 < 0xa0) {
        if (iVar2 < 0x20) {
          iVar3 = *(int *)(iVar3 + 0x58) + iVar2 * -0x80;
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x58) + -0x1000;
        }
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x58) + iVar2 * 0x80 + -0x6000;
      }
      *(int *)(param_1 + 0x58) = iVar3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080FAB34(param_1);
  }
  return in_lr;
}

