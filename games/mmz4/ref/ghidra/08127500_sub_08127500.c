// sub_08127500 at 0x08127500 (thumb)

undefined4 sub_08127500(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar2 = DAT_03007ff0;
  *(char *)(DAT_03007ff0 + 8) = (char)((param_1 & 0xf0000) >> 0x10);
  uVar7 = (uint)*(ushort *)(&DAT_08136630 + (((param_1 & 0xf0000) >> 0x10) - 1) * 2);
  *(uint *)(iVar2 + 0x10) = uVar7;
  uVar3 = FUN_081288bc(0x630,uVar7);
  *(undefined *)(iVar2 + 0xb) = uVar3;
  uVar5 = FUN_081288bc(uVar7 * 0x91d1b + 5000,10000);
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  iVar6 = FUN_081288bc(0x1000000);
  *(int *)(iVar2 + 0x18) = iVar6 + 1 >> 1;
  DAT_04000102 = 0;
  sVar4 = FUN_081288bc(0x44940,uVar7);
  DAT_04000100 = -sVar4;
  sub_081276F4();
  do {
    cVar1 = DAT_04000006._0_1_;
  } while (cVar1 == -0x61);
  do {
    cVar1 = DAT_04000006._0_1_;
  } while (cVar1 != -0x61);
  DAT_04000102 = 0x80;
  return in_lr;
}

