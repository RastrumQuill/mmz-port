// sub_08031420 at 0x08031420 (thumb)

undefined4 sub_08031420(int param_1)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x400) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0801CFC8(param_1,0x400,1,4);
  }
  if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x10) != 0) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)(short)iVar2;
  pbVar3 = (byte *)(param_1 + 0x174);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,0);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08038528(param_1);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar1;
  sVar1 = sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,0);
  if ((sVar1 == 0) &&
     (sVar1 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,1), sVar1 == 0)) {
    if (0 < *(int *)(param_1 + 0x60)) {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 2;
    }
  }
  else {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

