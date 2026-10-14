// sub_08089880 at 0x08089880 (thumb)

undefined8 sub_08089880(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x80898cd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202301a;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230c5;
    *(undefined *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x74) = param_1;
    *(undefined4 *)(iVar1 + 0x78) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

