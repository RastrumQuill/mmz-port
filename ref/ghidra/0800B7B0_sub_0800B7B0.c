// sub_0800B7B0 at 0x0800B7B0 (thumb)

void sub_0800B7B0(void)

{
  int iVar1;
  
  iVar1 = DAT_02022660;
  *(byte *)(DAT_02022660 + 10) = *(byte *)(DAT_02022660 + 10) & 0xfc;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined *)(iVar1 + 0x94) = 0;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
  *(undefined4 *)(iVar1 + 0xc) = 3;
  *(undefined4 *)(iVar1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  return;
}

