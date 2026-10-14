// sub_08069B78 at 0x08069B78 (thumb)

undefined4 sub_08069B78(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)
                          (&DAT_0833e234 +
                          (*(byte *)(param_1 + 0xbd) & 1) * 2 + (uint)*(byte *)(param_1 + 0xbe) * 4)
                );
    if (*(byte *)(param_1 + 0xbd) == 0) {
      sub_080032EC(0x43);
    }
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080128D4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  pbVar5 = (byte *)(param_1 + 0xbd);
  cVar3 = '\x01';
  if ((*pbVar5 & 1) != 0) {
    cVar3 = -1;
  }
  pbVar4 = (byte *)(param_1 + 0xbe);
  if (*pbVar4 != 0) {
    cVar3 = -cVar3;
  }
  sVar2 = *(short *)(&DAT_0833e23c + ((int)(*(byte *)(param_1 + 0x12) - 1) >> 1) * 2);
  *(int *)(param_1 + 100) = (int)sVar2 * (int)cVar3;
  *(int *)(param_1 + 0xb4) = -((int)sVar2 * (int)cVar3);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    bVar1 = *pbVar5;
    *pbVar5 = bVar1 + 1;
    if (*(byte *)(param_1 + 0xbf) < (byte)(bVar1 + 1)) {
      *pbVar4 = *pbVar4 + 1 & 1;
      *pbVar5 = 0;
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

