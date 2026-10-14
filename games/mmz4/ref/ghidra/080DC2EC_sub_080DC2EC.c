// sub_080DC2EC at 0x080DC2EC (thumb)

undefined4 sub_080DC2EC(int param_1)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 10) << 0x18;
  uVar5 = uVar2 >> 0x1c & 1;
  uVar2 = uVar2 >> 0x1d & 1;
  uVar6 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar3 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar3 | 1;
    if (uVar5 == 0) {
      bVar3 = bVar3 & 0xef | 1;
    }
    else {
      bVar3 = bVar3 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    pbVar4 = (byte *)(param_1 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | (byte)(uVar5 << 4);
    if (uVar2 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4d) = (char)uVar2;
    *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar2 << 5);
    sub_0801CF00(param_1,*(undefined2 *)(uVar6 * 2 + *(int *)(param_1 + 0x74)));
    if (uVar5 != 0) {
      uVar6 = 2 - uVar6;
    }
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x5c) = (uVar6 - 1) * 0x100 + (uVar2 * 2 >> 0x11 & 0x1ff) + -0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = -0x200 - (uVar2 * 2 >> 0x11 & 0x1ff);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar3 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sub_0801D134(param_1);
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((sVar1 != 0) && (0 < *(int *)(param_1 + 0x60))) {
    if (*(char *)(param_1 + 0x79) == '\0') {
      sub_080D0894(3,param_1 + 0x54);
    }
    else {
      sub_080D0894(2,param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

