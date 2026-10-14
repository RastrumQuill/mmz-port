// sub_081285C4 at 0x081285C4 (thumb)

undefined8 sub_081285C4(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  undefined4 in_lr;
  undefined auStack_98 [2];
  ushort auStack_96 [67];
  undefined4 uStack_4;
  
  param_1 = param_1 & 0xffff;
  uStack_4 = in_lr;
  if (param_1 < *(ushort *)(DAT_0203d7b0 + 4)) {
    puVar5 = auStack_96 + *(byte *)(DAT_0203d7b0 + 8);
    bVar1 = 0;
    if (*(byte *)(DAT_0203d7b0 + 8) != 0) {
      do {
        *puVar5 = (ushort)param_1;
        puVar5 = puVar5 + -1;
        param_1 = param_1 >> 1;
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(DAT_0203d7b0 + 8));
    }
    *puVar5 = 1;
    puVar5[-1] = 1;
    sub_08128544(auStack_98,&DAT_0d000000,*(byte *)(DAT_0203d7b0 + 8) + 3);
    sub_08128544(&DAT_0d000000,auStack_98,0x44);
    puVar5 = auStack_96 + 3;
    puVar6 = (undefined2 *)(param_2 + 6);
    bVar1 = 0;
    do {
      uVar4 = 0;
      bVar2 = 0;
      do {
        uVar4 = (uVar4 << 0x11) >> 0x10 | *puVar5 & 1;
        puVar5 = puVar5 + 1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 0x10);
      *puVar6 = (short)uVar4;
      puVar6 = puVar6 + -1;
      bVar1 = bVar1 + 1;
    } while (bVar1 < 4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x80ff;
  }
  return CONCAT44(uStack_4,uVar3);
}

