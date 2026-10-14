// sub_080DF174 at 0x080DF174 (thumb)

undefined4 sub_080DF174(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080027AC(&DAT_08404400,(DAT_02000f94 & 0xc) * 0x1000 + 0x5800);
  if ((*(char *)(param_1 + 4) != '\x01') && ((param_2 & 0xff) != 0)) {
    iVar1 = (param_2 & 0xff) * 0x14;
    sub_080027AC(&DAT_08404400 + iVar1,(DAT_02000f94 & 0xc) * 0x1000 + 0x4c00);
    sub_08002AEC(&UNK_0840440c + iVar1,0x20);
  }
  return in_lr;
}

