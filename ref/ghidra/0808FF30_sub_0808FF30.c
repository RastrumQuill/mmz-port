// sub_0808FF30 at 0x0808FF30 (thumb)

undefined4 sub_0808FF30(undefined4 param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_08005458(DAT_0202300c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 0x1e;
      *(undefined4 *)(iVar1 + 0x14) = 0x808ff89;
      *(undefined2 *)(iVar1 + 0x1c) = DAT_0202304c;
      *(undefined *)(iVar1 + 0x1e) = DAT_020230de;
      *(undefined *)(iVar1 + 0x10) = 2;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined *)(iVar1 + 0x12) = param_2;
      *(undefined4 *)(iVar1 + 0x20) = param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return in_lr;
}

