// sub_08000A00 at 0x08000A00 (thumb)

undefined4 sub_08000A00(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar4 = &DAT_080ef650;
  puVar3 = &DAT_03001590;
  iVar2 = 0xd;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  DAT_040000d4 = 0x80001bc;
  DAT_040000d8 = 0x30015c8;
  DAT_040000dc = 0x84000048;
  uVar1 = DAT_040000dc;
  DAT_03007ffc = &DAT_030015c8;
  DAT_030016e8 = 0;
  DAT_030016ec = 0;
  DAT_030016f6 = 0;
  DAT_04000208 = 1;
  DAT_04000200._0_2_ = 0x2005;
  DAT_04000004 = 0x28;
  DAT_030016f5 = 1;
  DAT_030016f4 = 0;
  DAT_030016f0 = 0;
  DAT_030016f7 = 0;
  DAT_0300170c = 0;
  DAT_03001700 = 0;
  DAT_03001728 = 0;
  DAT_03001718 = 0;
  DAT_0300174c = 0;
  DAT_0300173c = 0;
  return in_lr;
}

