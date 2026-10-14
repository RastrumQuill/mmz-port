// sub_0808BB08 at 0x0808BB08 (thumb)

undefined4 sub_0808BB08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_08005458(DAT_0202300c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 0xf;
      *(undefined4 *)(iVar1 + 0x14) = 0x808bb65;
      *(undefined2 *)(iVar1 + 0x1c) = DAT_0202302e;
      *(undefined *)(iVar1 + 0x1e) = DAT_020230cf;
      *(undefined *)(iVar1 + 0x10) = 1;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined4 *)(iVar1 + 0x20) = param_1;
      *(undefined4 *)(iVar1 + 0x4c) = *param_2;
      *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return in_lr;
}

