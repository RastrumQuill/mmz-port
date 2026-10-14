// sub_08013978 at 0x08013978 (thumb)

undefined4 sub_08013978(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)(param_1 << 0x18) >> 0x16;
  if (*(ushort *)(&DAT_08321600 + uVar3) != 0) {
    bVar1 = false;
    DAT_0202e4c0 = *(ushort *)(&DAT_08321602 + uVar3);
    DAT_0202e6c0 = *(ushort *)(&DAT_08321600 + uVar3);
    sub_08006B48(DAT_0202f078);
    iVar2 = *(int *)(*(int *)(DAT_0202f078 + 0xc) + 4);
    *(int *)(DAT_0202f078 + 0xc) = iVar2;
    if (iVar2 != DAT_0202f078 + 0x14) {
      do {
        if (*(char *)(iVar2 + 9) == 'R') {
          bVar1 = true;
        }
        iVar2 = *(int *)(*(int *)(DAT_0202f078 + 0xc) + 4);
        *(int *)(DAT_0202f078 + 0xc) = iVar2;
      } while (iVar2 != DAT_0202f078 + 0x14);
    }
    if (bVar1) {
      sub_08002638(&DAT_084338e0,(DAT_0202e6c0 - 0x200) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_084338ec,(DAT_0202e4c0 - 4) * 0x20 + 0x200);
    }
  }
  return in_lr;
}

