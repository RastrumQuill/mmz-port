// sub_080DC834 at 0x080DC834 (thumb)

undefined4 sub_080DC834(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 10) << 0x18;
  uVar7 = uVar3 >> 0x1c & 1;
  uVar3 = uVar3 >> 0x1d & 1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar4 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar4 | 1;
    if (uVar7 == 0) {
      bVar4 = bVar4 & 0xef | 1;
    }
    else {
      bVar4 = bVar4 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar4;
    *(char *)(param_1 + 0x4c) = (char)uVar7;
    pbVar5 = (byte *)(param_1 + 0x4a);
    *pbVar5 = *pbVar5 & 0xef | (byte)(uVar7 << 4);
    if (uVar3 == 0) {
      bVar4 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar4;
    *(char *)(param_1 + 0x4d) = (char)uVar3;
    *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar3 << 5);
    sub_0801CF00(param_1,**(undefined2 **)(param_1 + 0x74));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar8 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar8;
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') || (sVar2 = sub_08007C7C(iVar8,iVar6), sVar2 != 0)) {
    sub_080D0894(1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

