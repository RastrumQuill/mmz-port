// sub_0809F698 at 0x0809F698 (thumb)

undefined4 sub_0809F698(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1a;
    *(undefined4 *)(iVar1 + 0x14) = 0x809f891;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = *param_2;
    *(undefined4 *)(iVar1 + 0xc0) = param_2[1];
    *(undefined *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

