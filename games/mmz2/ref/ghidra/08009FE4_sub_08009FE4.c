// sub_08009FE4 at 0x08009FE4 (thumb)

undefined8 sub_08009FE4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  int *local_24;
  
  iVar4 = 0;
  if (DAT_020011d2 != 0) {
    piVar6 = &DAT_020011e0;
    local_24 = &DAT_020011dc;
    puVar3 = &DAT_02001000;
    iVar5 = 0;
    do {
      uVar2 = (uint)*(ushort *)(puVar3 + 0x1d8) * 2;
      uVar1 = (param_1 - *local_24) + (uint)*(ushort *)(puVar3 + 0x1d8);
      if ((uVar1 <= uVar2 && uVar2 - uVar1 != 0) &&
         (uVar2 = (uint)*(ushort *)(puVar3 + 0x1da) * 2,
         uVar1 = ((param_2 - *piVar6) + (uint)*(ushort *)(puVar3 + 0x1da)) - 1,
         uVar1 <= uVar2 && uVar2 - uVar1 != 0)) {
        DAT_02000020 = *local_24 - *(int *)((int)&DAT_020011e4 + iVar5);
        uVar1 = (uint)*(ushort *)(puVar3 + 0x1d6);
        goto LAB_0800a082;
      }
      piVar6 = piVar6 + 6;
      local_24 = local_24 + 6;
      puVar3 = puVar3 + 0x18;
      iVar5 = iVar5 + 0x18;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)DAT_020011d2);
  }
  uVar1 = 0;
LAB_0800a082:
  return CONCAT44(in_lr,uVar1);
}

