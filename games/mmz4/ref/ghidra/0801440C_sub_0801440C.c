// sub_0801440C at 0x0801440C (thumb)

undefined4 sub_0801440C(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = 0;
  iVar1 = sub_08000A70(0x280);
  if (iVar1 != 0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    iVar2 = *(int *)(param_1 + 0x34);
    uVar4 = (uint)*(ushort *)(param_1 + 0x38) * 0x10000;
    puVar6 = (uint *)(iVar1 + 0x3c);
    DAT_03001704 = iVar1;
    do {
      *puVar6 = iVar2 - 0x1200U & 0xffff | uVar4;
      puVar6 = puVar6 + -1;
    } while (iVar1 <= (int)puVar6);
    iVar2 = *(int *)(param_1 + 0x34);
    puVar6 = (uint *)(iVar1 + 0x40);
    iVar1 = 0x8f;
    do {
      iVar7 = iVar7 + 0x40;
      iVar5 = (int)uVar4 >> 0x10;
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar5 + 3;
      }
      *puVar6 = iVar5 << 0x10 |
                (((iVar2 + -0x1228) * 0x10000 >> 0x10) + (iVar7 >> 8) + (iVar3 >> 2)) * 0x10000 >>
                0x10 & 0xffffU;
      puVar6 = puVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  sub_08007638(param_1,param_2);
  return in_lr;
}

