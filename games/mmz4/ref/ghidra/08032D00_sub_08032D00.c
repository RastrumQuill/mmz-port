// sub_08032D00 at 0x08032D00 (thumb)

undefined4 sub_08032D00(int param_1)

{
  char cVar1;
  short sVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x10;
  puVar4 = (uint *)(param_1 + 600);
  if ((*puVar4 & 0x10) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x180;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  if ((*puVar4 & 0x20) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x180;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  pbVar3 = (byte *)(param_1 + 0x174);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,0);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,1);
  if ((*puVar4 & 0x40) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x180;
  }
  if ((*puVar4 & 0x80) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x180;
  }
  sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,0);
  sVar2 = sub_0802BAD8(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,1);
  if (sVar2 != 0) {
    sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar3 * 8,0);
  }
  cVar1 = *(char *)(param_1 + 0x13f) + -1;
  *(char *)(param_1 + 0x13f) = cVar1;
  if ((cVar1 == -1) || ((*puVar4 & 1) != 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 1;
    sVar2 = sub_080386E0(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar2;
  }
  return in_lr;
}

