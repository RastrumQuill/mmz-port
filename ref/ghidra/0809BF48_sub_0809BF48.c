// sub_0809BF48 at 0x0809BF48 (thumb)

undefined8 sub_0809BF48(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x54;
    *(undefined4 *)(iVar1 + 0x14) = 0x809be51;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230b8;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023114;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

