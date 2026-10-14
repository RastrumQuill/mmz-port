// sub_080EC3A4 at 0x080EC3A4 (thumb)

undefined4 sub_080EC3A4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (((*(uint *)(param_1 + 0x14) & 0x20000) != 0) && (DAT_0202dbf0 != 0)) {
      sub_0803A584(DAT_0202dbf0,8,0);
      *(undefined *)(iVar1 + 0xb6) = 1;
      *(undefined4 *)(iVar1 + 0xbc) = *param_2;
      *(undefined4 *)(iVar1 + 0xc0) = param_2[1];
    }
  }
  return in_lr;
}

