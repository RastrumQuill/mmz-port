// sub_080325AC at 0x080325AC (thumb)

undefined4 sub_080325AC(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  pbVar2 = (byte *)(param_1 + 0x174);
  sVar1 = sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,0);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  sVar1 = sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,1);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,0);
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x130);
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x134);
  if ((((*(byte *)(param_1 + 0x142) & 0x10) == 0) &&
      (sVar1 = sub_0802BAD8(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,1), sVar1 != 0)) &&
     (sVar1 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,0), sVar1 != 0)) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  else {
    sVar1 = sub_08038528(param_1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar1;
    sVar1 = sub_080385E8(param_1);
    if ((int)sVar1 < *(int *)(param_1 + 0x60)) {
      sVar1 = sub_080385E8(param_1);
      *(int *)(param_1 + 0x60) = (int)sVar1;
    }
  }
  return in_lr;
}

