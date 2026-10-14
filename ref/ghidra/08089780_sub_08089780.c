// sub_08089780 at 0x08089780 (thumb)

undefined8 sub_08089780(undefined param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x80898cd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202301a;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230c5;
    *(undefined4 *)(iVar1 + 0x4c) = param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_3;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

