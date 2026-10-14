// sub_08000750 at 0x08000750 (thumb)

undefined4 sub_08000750(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar4 = &DAT_080c90a4;
  puVar3 = &DAT_03000380;
  iVar2 = 0xd;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  DAT_040000d4 = 0x80001bc;
  DAT_040000d8 = 0x30003b8;
  DAT_040000dc = 0x84000048;
  uVar1 = DAT_040000dc;
  DAT_03007ffc = &DAT_030003b8;
  DAT_030004d8 = 0;
  DAT_030004dc = 0;
  DAT_030004e6 = 0;
  DAT_04000208 = 1;
  DAT_04000200._0_2_ = 0x2005;
  DAT_04000004 = 0x28;
  DAT_030004e5 = 1;
  DAT_030004e4 = 0;
  DAT_030004e0 = 0;
  DAT_030004e7 = 0;
  DAT_030004fc = 0;
  DAT_030004f0 = 0;
  DAT_03000518 = 0;
  DAT_03000508 = 0;
  DAT_03000534 = 0;
  DAT_03000524 = 0;
  return in_lr;
}

