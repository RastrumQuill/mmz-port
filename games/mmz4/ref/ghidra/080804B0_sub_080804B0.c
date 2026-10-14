// sub_080804B0 at 0x080804B0 (thumb)

undefined4 sub_080804B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  sub_0801CFF0();
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0x400;
  sub_080D0894(1,&local_14);
  iVar1 = param_1 + 0x54;
  sub_080D6440(param_1,iVar1);
  sub_08002B10(0x2a);
  sub_0802AAD4(3,iVar1);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,iVar1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

