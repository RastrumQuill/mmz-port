// sub_080319F4 at 0x080319F4 (thumb)

undefined4 sub_080319F4(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 600) & 0x10) == 0) {
        sVar3 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x5c);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        sVar3 = (short)iVar4;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      sVar3 = -(short)iVar4;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  else {
    sVar3 = (short)*(int *)(param_1 + 0x11c);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)sVar3;
  pbVar5 = (byte *)(param_1 + 0x174);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,0);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,0);
  bVar1 = *(byte *)(param_1 + 0x142) & 0x10;
  if ((((*(byte *)(param_1 + 0x142) & 0x10) == 0) &&
      (sVar2 = sub_0802BAD8(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,1), sVar2 != 0)) &&
     (sVar2 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,0), sVar2 != 0)) {
    *(byte *)(param_1 + 0xd) = bVar1;
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
    *(int *)(param_1 + 0x5c) = (int)sVar3;
    sub_08002B10(7);
  }
  else {
    sVar3 = sub_08038528(param_1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar3;
    sVar3 = sub_080385E8(param_1);
    if ((int)sVar3 < *(int *)(param_1 + 0x60)) {
      sVar3 = sub_080385E8(param_1);
      *(int *)(param_1 + 0x60) = (int)sVar3;
    }
  }
  return in_lr;
}

