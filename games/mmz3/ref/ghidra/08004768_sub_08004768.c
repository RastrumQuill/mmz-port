// sub_08004768 at 0x08004768 (thumb)

undefined4 sub_08004768(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (-1 < (int)(param_1 * 0x10000)) {
    iVar1 = sub_080046DC(param_1 & 0xffff);
    if (iVar1 != 0) {
      sub_080FCDB0(param_1 & 0xffff);
    }
  }
  return in_lr;
}

