// sub_08031C78 at 0x08031C78 (thumb)

undefined4 sub_08031C78(int param_1)

{
  undefined uVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  pbVar4 = (byte *)(param_1 + 0x174);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,0);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,0);
  uVar3 = *(byte *)(param_1 + 0x142) & 0x10;
  if ((((*(byte *)(param_1 + 0x142) & 0x10) == 0) &&
      (sVar2 = sub_0802BAD8(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,1), sVar2 != 0)) &&
     (sVar2 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,0), sVar2 != 0)) {
    uVar1 = (undefined)uVar3;
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = uVar1;
    *(undefined *)(param_1 + 0xf) = uVar1;
    *(undefined *)(param_1 + 0x101) = 8;
    *(undefined *)(param_1 + 0x102) = uVar1;
    *(uint *)(param_1 + 0x5c) = uVar3;
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0xf7;
    sub_08002B10(7);
  }
  else {
    sVar2 = sub_08038528(param_1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar2;
    sVar2 = sub_080385E8(param_1);
    if ((int)sVar2 < *(int *)(param_1 + 0x60)) {
      sVar2 = sub_080385E8(param_1);
      *(int *)(param_1 + 0x60) = (int)sVar2;
    }
  }
  return in_lr;
}

