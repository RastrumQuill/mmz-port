// sub_0808BAC0 at 0x0808BAC0 (thumb)

undefined8 sub_0808BAC0(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xf;
    *(undefined4 *)(iVar1 + 0x14) = 0x808bb65;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202302e;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230cf;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

