// sub_080EA450 at 0x080EA450 (thumb)

undefined4 sub_080EA450(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_02002474 == 0) {
    sub_08003AB0(&DAT_085a7ec4,(DAT_020023c4 & 0xc) * 0x1000 + 0x5800);
  }
  else {
    sub_08003AB0(&UNK_085a8338 + (uint)DAT_02002474 * 0x14,(DAT_020023c4 & 0xc) * 0x1000 + 0x5800);
    sub_08003E14(&UNK_085a8344 + (uint)DAT_02002474 * 0x14,0);
  }
  if ((*(char *)(param_1 + 4) != '\x01') && ((param_2 & 0xff) != 0)) {
    iVar1 = (param_2 & 0xff) * 0x14;
    sub_08003AB0(&DAT_085a7ec4 + iVar1,(DAT_020023c4 & 0xc) * 0x1000 + 0x4c00);
    sub_08003E14(&UNK_085a7ed0 + iVar1,0x20);
  }
  return in_lr;
}

