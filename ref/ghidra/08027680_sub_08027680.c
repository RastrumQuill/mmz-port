// sub_08027680 at 0x08027680 (thumb)

undefined4 sub_08027680(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if ((*(ushort *)(iVar1 + 0x90) & 4) != 0) {
      sub_0802731C(iVar1);
      sub_080188DC();
    }
    sub_0808EB84(*param_2,param_2[1],(&DAT_082ab296)[*(byte *)(iVar1 + 0x10)]);
  }
  return in_lr;
}

