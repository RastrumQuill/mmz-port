// sub_0800A6FC at 0x0800A6FC (thumb)

undefined8 sub_0800A6FC(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 in_lr;
  
  param_1 = param_1 + 1;
  if (param_1 < (int)(uint)DAT_02002652) {
    piVar5 = &DAT_02002660 + param_1 * 6;
    piVar4 = &DAT_0200265c + param_1 * 6;
    puVar3 = &DAT_02002480 + param_1 * 0x18;
    do {
      uVar2 = (uint)*(ushort *)(puVar3 + 0x1d8) * 2;
      uVar1 = (param_2 - *piVar4) + (uint)*(ushort *)(puVar3 + 0x1d8);
      if ((uVar1 <= uVar2 && uVar2 - uVar1 != 0) &&
         (uVar2 = (uint)*(ushort *)(puVar3 + 0x1da) * 2,
         uVar1 = ((param_3 - *piVar5) + (uint)*(ushort *)(puVar3 + 0x1da)) - 1,
         uVar1 <= uVar2 && uVar2 - uVar1 != 0)) goto LAB_0800a77c;
      piVar5 = piVar5 + 6;
      piVar4 = piVar4 + 6;
      puVar3 = puVar3 + 0x18;
      param_1 = param_1 + 1;
    } while (param_1 < (int)(uint)DAT_02002652);
  }
  param_1 = -1;
LAB_0800a77c:
  return CONCAT44(in_lr,param_1);
}

