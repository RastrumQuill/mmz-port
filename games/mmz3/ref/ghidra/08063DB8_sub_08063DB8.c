// sub_08063DB8 at 0x08063DB8 (thumb)

undefined4 sub_08063DB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08063614();
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

