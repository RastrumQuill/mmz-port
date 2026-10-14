// sub_0808CCEC at 0x0808CCEC (thumb)

undefined4 sub_0808CCEC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_08005458(DAT_0202300c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 0x14;
      *(undefined4 *)(iVar1 + 0x14) = 0x808cd49;
      *(undefined2 *)(iVar1 + 0x1c) = DAT_02023038;
      *(undefined *)(iVar1 + 0x1e) = DAT_020230d4;
      *(undefined *)(iVar1 + 0x10) = 0;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined4 *)(iVar1 + 0x20) = param_1;
      *(undefined4 *)(iVar1 + 0x4c) = *param_2;
      *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return in_lr;
}

