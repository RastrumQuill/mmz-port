// sub_080AA3BC at 0x080AA3BC (thumb)

undefined4 sub_080AA3BC(int param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x9403);
    *(undefined *)(param_1 + 0xb6) = 1;
    sub_08002B10(0x165);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    pbVar3 = (byte *)(param_1 + 0xb7);
    if (*pbVar3 == 0) {
      bVar1 = 3;
    }
    else {
      bVar1 = *pbVar3 - 1;
    }
    *pbVar3 = bVar1;
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885f594 + (uint)*pbVar3 * 2));
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = iVar4;
    sVar2 = sub_08007C7C(iVar4 + *(int *)(&DAT_0885f61c +
                                         ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4)) *
                                 0x100,*(int *)(param_1 + 0x58) + 0x400);
    if ((sVar2 == 0) ||
       (sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                             *(int *)(&DAT_0885f61c +
                                     ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4)) * 0x100,
                             *(undefined4 *)(param_1 + 0x58)), sVar2 != 0)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x13) = 0x20;
    }
  }
  return in_lr;
}

