// sub_0806A7B0 at 0x0806A7B0 (thumb)

undefined4 sub_0806A7B0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      if (*(char *)(param_1 + 0x12) == '\0') {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
      *(undefined *)(param_1 + 0x4c) = 0;
      pbVar5 = (byte *)(param_1 + 0x4a);
      *pbVar5 = *pbVar5 & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *pbVar5 = *pbVar5 & 0xdf;
      *(undefined *)(param_1 + 0x24) = 0;
      sub_08017700(param_1,0x901);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
      *(undefined *)(param_1 + 0x4c) = 0;
      pbVar5 = (byte *)(param_1 + 0x4a);
      *pbVar5 = *pbVar5 & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *pbVar5 = *pbVar5 & 0xdf;
      *(undefined *)(param_1 + 0x24) = 0;
      sub_08017700(param_1,0x900);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar6 = *(int *)(param_1 + 0x58);
    iVar3 = iVar6 + 0x3800;
    iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(*(int *)(param_1 + 0x28) + 0x54) - (*(int *)(param_1 + 0x54) + 0x1300)) * 0x18
         >> 8);
    iVar6 = *(int *)(param_1 + 0x58);
    iVar3 = iVar6 + 0x3a00;
    iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar6 + ((iVar4 - iVar3) * 0x18 >> 8);
  sub_080177F4(param_1);
  return in_lr;
}

