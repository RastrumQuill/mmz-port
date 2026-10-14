// sub_080AD2D4 at 0x080AD2D4 (thumb)

undefined4 sub_080AD2D4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    uVar2 = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AD394(param_1);
  }
  return in_lr;
}

