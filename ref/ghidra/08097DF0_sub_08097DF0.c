// sub_08097DF0 at 0x08097DF0 (thumb)

undefined8 sub_08097DF0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x41;
    *(undefined4 *)(iVar1 + 0x14) = 0x8097e45;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023092;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023101;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(undefined *)(iVar1 + 0x10) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

