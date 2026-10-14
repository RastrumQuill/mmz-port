// sub_0800D26C at 0x0800D26C (thumb)

undefined4 sub_0800D26C(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_02022660;
  *(byte *)(DAT_02022660 + 10) = *(byte *)(DAT_02022660 + 10) & 0xfc;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined *)(iVar1 + 0x94) = 0;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
  *(undefined4 *)(iVar1 + 0xc) = 3;
  *(undefined4 *)(iVar1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  iVar1 = DAT_02022664;
  *(byte *)(DAT_02022664 + 10) = *(byte *)(DAT_02022664 + 10) & 0xfc;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined *)(iVar1 + 0x94) = 0;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
  *(undefined4 *)(iVar1 + 0xc) = 3;
  *(undefined4 *)(iVar1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  iVar1 = DAT_02022668;
  *(byte *)(DAT_02022668 + 10) = *(byte *)(DAT_02022668 + 10) & 0xfc;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined *)(iVar1 + 0x94) = 0;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
  *(undefined4 *)(iVar1 + 0xc) = 3;
  *(undefined4 *)(iVar1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  iVar1 = DAT_0202266c;
  *(byte *)(DAT_0202266c + 10) = *(byte *)(DAT_0202266c + 10) & 0xfc;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined *)(iVar1 + 0x94) = 0;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
  *(undefined4 *)(iVar1 + 0xc) = 3;
  *(undefined4 *)(iVar1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  return in_lr;
}

