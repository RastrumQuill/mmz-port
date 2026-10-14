// sub_08078F20 at 0x08078F20 (thumb)

undefined4 sub_08078F20(int param_1)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x93);
    sub_08006E08(param_1 + 0x74,&DAT_0833fe90);
    if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || ((DAT_0202ec42 & 1) != 0)) {
      *(undefined *)(param_1 + 0xbf) = 1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = DAT_0202e130;
  iVar5 = *(int *)(param_1 + 0x2c);
  if (DAT_0202e130 == 0) {
    *(undefined *)(param_1 + 0xbf) = 1;
  }
  else {
    *(int *)(DAT_0202e130 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4);
    *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xb8);
    uVar1 = sub_0801EE9C(iVar2,1,1,1,1,0);
    pbVar4 = (byte *)(param_1 + 0xbe);
    iVar2 = (uint)*pbVar4 - (uVar1 & 0xff);
    if (iVar2 < 1) {
      *pbVar4 = 0;
    }
    else {
      *pbVar4 = (byte)iVar2;
    }
  }
  if (*(char *)(param_1 + 0xbd) == *(char *)(iVar5 + 0xbd)) {
    psVar3 = (short *)(*(int *)(param_1 + 0x28) + 0xa4);
    if (*psVar3 < 0x40) {
      *psVar3 = *psVar3 + 1;
    }
    if (((*(char *)(param_1 + 0xbd) == '\0') || (*(char *)(param_1 + 0xbf) != '\0')) ||
       (*(char *)(param_1 + 0xbe) == '\0')) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

