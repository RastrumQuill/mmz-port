// sub_08030A80 at 0x08030A80 (thumb)

undefined4 sub_08030A80(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x73) == '\x04') &&
     (iVar1 = *(byte *)(param_1 + 0x2b7) - 1, *(byte *)(param_1 + 0x2b7) = (byte)iVar1, iVar1 == 0))
  {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 3;
    sub_0801E9FC(param_1,0x62);
  }
  return in_lr;
}

