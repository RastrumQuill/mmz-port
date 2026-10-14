// sub_0800ADB0 at 0x0800ADB0 (thumb)

undefined8 sub_0800ADB0(int param_1,int param_2)

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
  if (DAT_02002652 != 0) {
    piVar6 = &DAT_02002660;
    local_24 = &DAT_0200265c;
    puVar3 = &DAT_02002480;
    iVar5 = 0;
    do {
      uVar2 = (uint)*(ushort *)(puVar3 + 0x1d8) * 2;
      uVar1 = (param_1 - *local_24) + (uint)*(ushort *)(puVar3 + 0x1d8);
      if ((uVar1 <= uVar2 && uVar2 - uVar1 != 0) &&
         (uVar2 = (uint)*(ushort *)(puVar3 + 0x1da) * 2,
         uVar1 = ((param_2 - *piVar6) + (uint)*(ushort *)(puVar3 + 0x1da)) - 1,
         uVar1 <= uVar2 && uVar2 - uVar1 != 0)) {
        DAT_020002a8 = *local_24 - *(int *)((int)&DAT_02002664 + iVar5);
        uVar1 = (uint)*(ushort *)(puVar3 + 0x1d6);
        goto LAB_0800ae4e;
      }
      piVar6 = piVar6 + 6;
      local_24 = local_24 + 6;
      puVar3 = puVar3 + 0x18;
      iVar5 = iVar5 + 0x18;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)DAT_02002652);
  }
  uVar1 = 0;
LAB_0800ae4e:
  return CONCAT44(in_lr,uVar1);
}

