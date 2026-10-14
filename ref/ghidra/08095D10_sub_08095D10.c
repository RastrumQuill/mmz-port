// sub_08095D10 at 0x08095D10 (thumb)

undefined8 sub_08095D10(undefined4 *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x38;
    *(undefined4 *)(iVar1 + 0x14) = 0x8095d61;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023080;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230f8;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
  }
  return CONCAT44(in_lr,iVar1);
}

