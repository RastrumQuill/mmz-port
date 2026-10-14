// sub_080BBC20 at 0x080BBC20 (thumb)

undefined4 sub_080BBC20(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0xbe00;
  local_14 = 0xbc04;
  local_28[0] = 0;
  local_28[1] = 0x1c00;
  local_28[2] = 0;
  local_28[3] = 0x3c00;
  uVar4 = (uint)*(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861150);
    DAT_02000a40 = 0x3f10;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    sub_0801CEEC(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
    sub_0801CF00(param_1,*(undefined2 *)(local_28 + uVar4 + 4));
    *(undefined *)(param_1 + 0x25) = 0x18;
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_28[uVar4 * 2];
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_28[uVar4 * 2 + 1];
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  DAT_02000a42 = 0x10 - *(byte *)(param_1 + 0x12) & 0x1f | (ushort)*(byte *)(param_1 + 0x12) << 8;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

