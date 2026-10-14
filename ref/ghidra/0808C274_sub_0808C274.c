// sub_0808C274 at 0x0808C274 (thumb)

undefined8 sub_0808C274(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x12;
    *(undefined4 *)(iVar1 + 0x14) = 0x808c2b9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023034;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230d2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

