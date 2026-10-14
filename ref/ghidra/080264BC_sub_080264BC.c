// sub_080264BC at 0x080264BC (thumb)

undefined4 sub_080264BC(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if ((*(ushort *)(iVar1 + 0x90) & 4) != 0) {
      sub_0801878C(iVar1);
    }
    sub_0808EB84(*param_2,*(undefined4 *)(iVar1 + 0x50),(&DAT_082aa420)[*(byte *)(iVar1 + 0x11)]);
    if ((*(char *)(iVar1 + 0x11) == '\0') ||
       ((*(ushort *)(*(int *)(param_1 + 0x10) + 0x1c) & 0x40) == 0)) {
      *(undefined *)(iVar1 + 0x13) = 1;
    }
  }
  return in_lr;
}

