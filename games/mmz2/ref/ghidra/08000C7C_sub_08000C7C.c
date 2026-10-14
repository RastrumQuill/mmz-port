// sub_08000C7C at 0x08000C7C (thumb)

undefined4 sub_08000C7C(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  DAT_040000b8 = 0;
  if (DAT_03001700 != 0) {
    DAT_040000b0 = DAT_030016f8;
    DAT_040000b4 = DAT_030016fc;
    DAT_040000b8 = DAT_03001700 & 0xcdffffff;
    uVar2 = DAT_040000b8;
    if ((DAT_03001700 & 0x4000000) == 0) {
      iVar3 = (DAT_03001700 & 0xffff) << 1;
    }
    else {
      iVar3 = (DAT_03001700 & 0xffff) << 2;
    }
    iVar4 = DAT_030016fc;
    if ((DAT_03001700 & 0x600000) == 0) {
      iVar4 = DAT_030016fc + iVar3;
    }
    if ((DAT_03001700 & 0x600000) == 0x200000) {
      iVar4 = iVar4 - iVar3;
    }
    iVar5 = DAT_030016f8;
    if ((DAT_03001700 & 0x1800000) == 0) {
      iVar5 = DAT_030016f8 + iVar3;
    }
    if ((DAT_03001700 & 0x1800000) == 0x800000) {
      iVar5 = iVar5 - iVar3;
    }
    iVar3 = DAT_040000b0;
    if (iVar3 < 0) {
      do {
        uVar1 = DAT_040000b0;
      } while ((uVar1 & 0x80000000) != 0);
    }
    DAT_040000b0 = iVar5;
    DAT_040000b4 = iVar4;
    DAT_040000b8 = DAT_03001700;
  }
  return in_lr;
}

