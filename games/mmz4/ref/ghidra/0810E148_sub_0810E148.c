// sub_0810E148 at 0x0810E148 (thumb)

undefined4 sub_0810E148(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08001EA4(&DAT_08bfc000,(DAT_02000a04 & 0xc) * 0x1000 + 0x5980);
  if ((*(char *)(param_1 + 4) != '\x01') && ((param_2 & 0xff) != 0)) {
    iVar1 = (param_2 & 0xff) * 0x14;
    sub_08001EA4(&DAT_08bfc000 + iVar1,(DAT_02000a04 & 0xc) * 0x1000 + 0x5500);
    sub_08002208(&UNK_08bfc00c + iVar1,0x20);
  }
  return in_lr;
}

