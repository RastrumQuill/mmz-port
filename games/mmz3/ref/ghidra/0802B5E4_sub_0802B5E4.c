// sub_0802B5E4 at 0x0802B5E4 (thumb)

undefined4 sub_0802B5E4(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    if ((*(uint *)(param_1 + 0x218) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 0x218) & 0x10) == 0) {
        sVar2 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x5c);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        sVar2 = (short)iVar3;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5c);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      sVar2 = -(short)iVar3;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  else {
    sVar2 = (short)*(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)sVar2;
  pbVar4 = (byte *)(param_1 + 0x147);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080263A0(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
  if (((*(char *)(param_1 + 0x113) == '\0') &&
      (sVar1 = sub_08025EC4(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,1), sVar1 != 0)) &&
     (sVar1 = sub_08026664(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0), sVar1 != 0)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(int *)(param_1 + 0x5c) = (int)sVar2;
    sub_0800471C(7);
  }
  else {
    sVar2 = sub_08032B80(param_1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar2;
    sVar2 = sub_08032BC0(param_1);
    if ((int)sVar2 < *(int *)(param_1 + 0x60)) {
      sVar2 = sub_08032BC0(param_1);
      *(int *)(param_1 + 0x60) = (int)sVar2;
    }
  }
  return in_lr;
}

