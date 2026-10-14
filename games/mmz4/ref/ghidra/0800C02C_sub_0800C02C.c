// sub_0800C02C at 0x0800C02C (thumb)

undefined4 sub_0800C02C(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar1 = param_1 + 0x14;
  local_20 = (*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34) >> 8) + *(int *)(param_1 + 0x4c);
  local_1c = (*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38) >> 8) + *(int *)(param_1 + 0x50);
  uVar2 = (local_20 -
          ((*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x3c) >> 8) + *(int *)(param_1 + 0x54))) +
          0xf;
  uVar3 = (local_1c -
          ((*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) >> 8) + *(int *)(param_1 + 0x58))) +
          0xf;
  local_20 = (*(int *)(param_1 + 0x2c) >> 8) + local_20;
  local_1c = (*(int *)(param_1 + 0x30) >> 8) + local_1c;
  if (*(int *)(param_1 + 0x34) < 0x878) {
    if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (DAT_0202dadc._2_1_ == '\0')) {
      sub_08005124(iVar1,&local_20,
                   ((ushort)(&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 +
                   0x6000000,&DAT_02001290);
    }
    else {
      sub_08005050(iVar1,&local_20,
                   ((ushort)(&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 +
                   0x6000000,&DAT_02001290);
    }
  }
  else if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (DAT_0202dadc._2_1_ == '\0')) {
    sub_08003620(iVar1,&local_20,
                 ((ushort)(&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000)
    ;
  }
  else {
    sub_08003FE0(iVar1,&local_20,
                 ((ushort)(&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000)
    ;
  }
  DAT_0202dadc._2_1_ = 0;
  sub_0800531C(iVar1,&DAT_02000a0c + (*(uint *)(param_1 + 0x5c) >> 4) * 2);
  return in_lr;
}

