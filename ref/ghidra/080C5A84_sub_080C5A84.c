// sub_080C5A84 at 0x080C5A84 (thumb)

undefined4 sub_080C5A84(int param_1,char param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  do {
    iVar1 = sub_080C8CB0(param_1,10);
    sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[(byte)(&DAT_082cc358)[iVar1]],param_2,
                 param_3);
    param_2 = param_2 + -1;
    param_1 = sub_080C8C38(param_1,10);
  } while (param_1 != 0);
  return in_lr;
}

