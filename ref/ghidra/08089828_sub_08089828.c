// sub_08089828 at 0x08089828 (thumb)

undefined8 sub_08089828(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x80898cd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202301a;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230c5;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x74) = param_1;
    *(undefined4 *)(iVar1 + 0x78) = param_2;
    *(undefined4 *)(iVar1 + 0x7c) = param_3;
    sub_0808C274(iVar1);
  }
  return CONCAT44(in_lr,iVar1);
}

