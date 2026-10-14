// sub_08077850 at 0x08077850 (thumb)

undefined4 sub_08077850(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08078ED4(param_1,0);
    bVar1 = *(byte *)(param_1 + 0xc5) + 1 & 1;
    uVar4 = sub_08078F40(param_1,bVar1);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar5 = sub_08078F70(param_1,bVar1);
    *(int *)(param_1 + 0x60) = iVar5;
    iVar6 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 100) = iVar6;
    iVar5 = iVar5 - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = iVar5;
    uVar3 = sub_081284F8(iVar6 * iVar6 + iVar5 * iVar5);
    cVar2 = sub_08128A24(uVar3,*(undefined2 *)(&DAT_08859e00 + (uint)*(byte *)(param_1 + 0xd7) * 2))
    ;
    *(char *)(param_1 + 0x13) = cVar2;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    *(byte *)(param_1 + 0xc5) = bVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E5C(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar5 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 100),
                       *(undefined *)(param_1 + 0x13));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) - iVar5;
  iVar5 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x68),
                       *(undefined *)(param_1 + 0x13));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) - iVar5;
  if (*(char *)(param_1 + 0x12) == '\0') {
    pbVar7 = (byte *)(param_1 + 0xd7);
    bVar1 = *pbVar7;
    *pbVar7 = bVar1 + 1;
    if (3 < (byte)(bVar1 + 1)) {
      *pbVar7 = 3;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

