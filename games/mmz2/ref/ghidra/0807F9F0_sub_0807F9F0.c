// sub_0807F9F0 at 0x0807F9F0 (thumb)

undefined4 sub_0807F9F0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = *(byte *)(param_1 + 0x11) ^ 1;
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
    sub_080127E4(param_1,0x5f09);
    sub_080801DC(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar4 = (byte *)(param_1 + 0xb4);
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 & 2;
  if ((bVar1 & 2) == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      if ((0xc000 < (*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6000U) &&
         (*(char *)(param_1 + 0x73) != '\x03')) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *pbVar4 = *pbVar4 & 0xfd;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

