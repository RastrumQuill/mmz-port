// sub_080908CC at 0x080908CC (thumb)

undefined8 sub_080908CC(int *param_1,byte param_2,byte param_3,undefined param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x21;
    *(undefined4 *)(iVar1 + 0x14) = 0x8090965;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023052;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230e1;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(byte *)(iVar1 + 0x11) = param_3;
    iVar2 = *param_1 + *(int *)(&DAT_082b38f0 + (uint)param_3 * 4);
    *(int *)(iVar1 + 0x4c) = iVar2;
    *(uint *)(iVar1 + 0x4c) =
         iVar2 - (uint)param_2 * *(int *)(&DAT_082b38f0 + (uint)param_3 * 4) * 2;
    *(int *)(iVar1 + 0x50) = param_1[1] + *(int *)(&DAT_082b3900 + (uint)param_3 * 4);
    *(byte *)(iVar1 + 0x12) = param_2;
    *(undefined *)(iVar1 + 0x13) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

