// sub_080BF344 at 0x080BF344 (thumb)

undefined4 sub_080BF344(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = sub_080D41C8();
  if (sVar1 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

