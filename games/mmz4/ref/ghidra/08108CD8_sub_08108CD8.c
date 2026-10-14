// sub_08108CD8 at 0x08108CD8 (thumb)

undefined8 sub_08108CD8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((uint)*(byte *)(param_1 + 0xf1) + (uint)*(byte *)(param_1 + 0xf2) +
      (uint)*(byte *)(param_1 + 0xf3) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_08005500(DAT_0202edb0);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined *)(iVar1 + 9) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0x8108d41;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(int *)(iVar1 + 0x28) = param_1;
      *(undefined *)(iVar1 + 0x10) = 0;
      *(undefined *)(iVar1 + 0x11) = 0;
      *(undefined *)(iVar1 + 0xbe) = 0;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

