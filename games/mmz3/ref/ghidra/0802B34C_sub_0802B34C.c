// sub_0802B34C at 0x0802B34C (thumb)

undefined4 sub_0802B34C(int param_1)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    if ((*(uint *)(param_1 + 0x218) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 0x218) & 0x10) == 0) {
        sVar1 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x5c);
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        sVar1 = (short)iVar2;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x5c);
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      sVar1 = -(short)iVar2;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  else {
    sVar1 = (short)*(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)sVar1;
  pbVar3 = (byte *)(param_1 + 0x147);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar3 * 8,0);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar3 * 8,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08032B80(param_1);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar1;
  sVar1 = sub_080263A0(param_1,&DAT_0835b034 + (uint)*pbVar3 * 8,0);
  if ((0 < *(int *)(param_1 + 0x60)) || (sVar1 != 0)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

