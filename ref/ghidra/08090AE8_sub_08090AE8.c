// sub_08090AE8 at 0x08090AE8 (thumb)

undefined8 sub_08090AE8(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x22;
    *(undefined4 *)(iVar1 + 0x14) = 0x8090ba1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023054;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230e2;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

