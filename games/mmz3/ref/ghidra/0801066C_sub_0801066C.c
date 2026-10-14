// sub_0801066C at 0x0801066C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0801066C(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0202f4a8;
  if (_DAT_0202f4a8 != 0) {
    *(byte *)(_DAT_0202f4a8 + 10) = *(byte *)(_DAT_0202f4a8 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  }
  sub_08004230(0xda);
  sub_08004230(0xdb);
  sub_08004230(0xdc);
  sub_08004230(0xdd);
  sub_08004230(0xde);
  sub_08004230(0xdf);
  sub_08004230(0xe0);
  sub_08004230(0xe1);
  sub_08004230(0xe2);
  sub_08004230(0xe3);
  sub_08004230(0xe4);
  return in_lr;
}

