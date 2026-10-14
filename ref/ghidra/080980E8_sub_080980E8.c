// sub_080980E8 at 0x080980E8 (thumb)

undefined4 sub_080980E8(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  byte abStack_2c [4];
  ushort auStack_28 [2];
  int *local_24;
  
  local_24 = (int *)(param_2 + 8);
  iVar6 = *(int *)(param_1 + 8);
  sub_080C8D70(abStack_2c,&DAT_080c949c,2);
  sub_080C8D70(auStack_28,&DAT_080c949e,4);
  bVar1 = abStack_2c[*(byte *)(iVar6 + 0x10)];
  if (*(char *)(iVar6 + 0x11) == '\0') {
    uVar3 = (uint)(bVar1 >> 4);
    if (*(char *)(iVar6 + 0xe) == '\0') {
      uVar2 = auStack_28[*(byte *)(iVar6 + 0x10)];
      (&DAT_02004f34)[uVar3] = uVar2 | 0x6046;
      iVar5 = 0x6000000;
      sub_08005214((uVar2 & 0x1f00) * 8 + 0x6000000);
      sub_08005214(&DAT_06000800 + ((ushort)(&DAT_02004f34)[uVar3] & 0x1f00) * 4);
      iVar4 = 0;
      do {
        FUN_080c88ec(&UNK_082b48f8 + (uint)*(byte *)(iVar6 + 0x10) * 0x180 + iVar4 * 0x20,
                     ((ushort)(&DAT_02004f34)[uVar3] & 0x1f00) * 8 + iVar5,8);
        iVar5 = iVar5 + 0x40;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xc);
      DAT_02004f30 = (ushort)bVar1 << 8 | DAT_02004f30;
      *(char *)(iVar6 + 0xe) = *(char *)(iVar6 + 0xe) + '\x01';
    }
    if (((*(char *)(iVar6 + 0xf) == '\0') && (*(char *)(iVar6 + 0xd) != '\0')) &&
       (*(char *)(iVar6 + 0x12) == '\0')) {
      iVar4 = 0;
      iVar5 = 0x6000000;
      do {
        FUN_080c88ec(&UNK_082b4bf8 + (uint)*(byte *)(iVar6 + 0x10) * 0x180 + iVar4 * 0x20,
                     ((ushort)(&DAT_02004f34)[uVar3] & 0x1f00) * 8 + iVar5,8);
        iVar5 = iVar5 + 0x40;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xc);
      *(char *)(iVar6 + 0xf) = *(char *)(iVar6 + 0xf) + '\x01';
    }
    iVar4 = *(int *)(iVar6 + 0x50);
    iVar5 = local_24[1];
    *(short *)(&DAT_02004f3c + uVar3) = -(short)((uint)(*(int *)(iVar6 + 0x4c) - *local_24) >> 8);
    *(short *)((int)&DAT_02004f3c + uVar3 * 4 + 2) = -(short)((uint)(iVar4 - iVar5) >> 8);
  }
  else {
    DAT_02004f30 = DAT_02004f30 & ~((ushort)bVar1 << 8);
    *(undefined2 *)(&DAT_02004f3c + (bVar1 >> 4)) = 0;
    *(undefined2 *)((int)&DAT_02004f3c + (uint)(bVar1 >> 4) * 4 + 2) = 0xffa0;
  }
  return in_lr;
}

