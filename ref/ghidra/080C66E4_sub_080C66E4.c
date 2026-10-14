// sub_080C66E4 at 0x080C66E4 (thumb)

undefined4 sub_080C66E4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 0x17c;
  if (*(byte *)(param_1 + 0x180 + (param_2 & 0xff)) - 1 < 0x4e) {
    iVar1 = 0x17e;
  }
  sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar1],1,0x12);
  return in_lr;
}

