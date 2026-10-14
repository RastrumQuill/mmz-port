// sub_08014A9C at 0x08014A9C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_08014A9C(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar3 = (int)*(short *)(iVar5 + 2);
  if (iVar3 == 1) {
    DAT_02004f30 = DAT_02004f30 & 0xedff;
    sub_080BBE6C();
  }
  else if (iVar3 < 2) {
    if (iVar3 == 0) {
      DAT_02004f36 = 0x284;
      DAT_02004f30 = DAT_02004f30 | 0x1200;
      _DAT_02004f40 = iVar3;
      sub_080014E8(&DAT_085c7000 + (uint)*(byte *)(iVar5 + 1) * 0x14,0x4000);
      sub_0800179C(&DAT_085c700c + (uint)*(byte *)(iVar5 + 1) * 0x14,0);
      puVar1 = (undefined *)
               ((int)(&DAT_085c0000 + (uint)*(byte *)(iVar5 + 1) * 4) +
               *(int *)(&DAT_085c0000 + (uint)*(byte *)(iVar5 + 1) * 4) + 8);
      puVar4 = (undefined2 *)((DAT_02004f36 & 0x1f00) * 8 + 0x6000000);
LAB_08014be0:
      FUN_080c88ec(puVar1,puVar4,0x200);
    }
  }
  else {
    if (iVar3 == 2) {
      DAT_02004f36 = 0x8284;
      _DAT_02004f40 = 0xa00000;
      DAT_02004f30 = DAT_02004f30 | 0x1200;
      sub_080014E8(&DAT_085c7000 + (uint)*(byte *)(iVar5 + 1) * 0x14,0x4000);
      sub_0800179C(&DAT_085c700c + (uint)*(byte *)(iVar5 + 1) * 0x14,0);
      FUN_080c88ec((undefined *)
                   ((int)(&DAT_085c0000 + (uint)*(byte *)(iVar5 + 1) * 4) +
                   *(int *)(&DAT_085c0000 + (uint)*(byte *)(iVar5 + 1) * 4) + 8),
                   (DAT_02004f36 & 0x1f00) * 8 + 0x6000000,0x200);
      puVar1 = &UNK_085c0008 +
               *(int *)(&DAT_085c0004 + (uint)*(byte *)(iVar5 + 1) * 4) +
               (*(byte *)(iVar5 + 1) + 1) * 4;
      puVar4 = &DAT_06000800 + (DAT_02004f36 & 0x1f00) * 4;
      goto LAB_08014be0;
    }
    if ((iVar3 == 3) && (DAT_02004f42 != 0)) {
      _DAT_02004f40 = CONCAT22(DAT_02004f42 + -1,_DAT_02004f40);
      *(int *)(param_1 + 0xc) = iVar5 + -8;
      uVar2 = 1;
      goto LAB_08014c26;
    }
  }
  uVar2 = 0;
LAB_08014c26:
  return CONCAT44(in_lr,uVar2);
}

