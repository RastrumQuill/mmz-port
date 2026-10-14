// sub_08090770 at 0x08090770 (thumb)

undefined8 sub_08090770(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x20;
    *(undefined4 *)(iVar1 + 0x14) = 0x80907cd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023050;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230e0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    *(undefined *)(iVar1 + 0x12) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

