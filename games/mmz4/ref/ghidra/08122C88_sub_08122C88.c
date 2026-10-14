// sub_08122C88 at 0x08122C88 (thumb)

undefined4 sub_08122C88(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08128884(param_1,*(undefined4 *)(&DAT_08886538 + (uint)*(byte *)(param_1 + 1) * 4));
  if (iVar1 == 0) {
    sub_08006E94();
    sub_08002348();
    sub_08001354();
  }
  return in_lr;
}

