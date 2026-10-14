// sub_080295E8 at 0x080295E8 (thumb)

undefined4 sub_080295E8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    sub_0808EB84(*param_2,*(undefined4 *)(iVar1 + 0x50),8);
    *(undefined *)(iVar1 + 0x13) = 1;
  }
  return in_lr;
}

