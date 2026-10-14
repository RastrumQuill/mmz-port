// sub_0800D204 at 0x0800D204 (thumb)

undefined4 sub_0800D204(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08004230(0xe5);
  sub_08004230(0xe6);
  sub_08004230(0xe7);
  sub_08004230(0xe8);
  sub_08004230(0xe9);
  sub_08004230(0xea);
  sub_08004230(0xeb);
  sub_08004230(0xec);
  sub_08004230(0xed);
  sub_08004230(0xee);
  sub_08004230(0xef);
  uVar1 = 0;
  do {
    iVar3 = (&DAT_0202f4ac)[(char)uVar1];
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined *)(iVar3 + 0x94) = 0;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
    uVar2 = (int)(char)uVar1 + 1;
    uVar1 = uVar2 & 0xff;
  } while ((int)(uVar2 * 0x1000000) >> 0x18 < 4);
  return in_lr;
}

