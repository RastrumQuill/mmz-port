// sub_0803E248 at 0x0803E248 (thumb)

undefined4 sub_0803E248(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *(undefined4 *)(param_1 + 0xcc);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08081C8C(uVar6,3);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    uVar3 = (uint)bVar1;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (uVar3 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(uint *)(param_1 + 0xc0) = *(int *)(DAT_0202286c + 0x4c) + -0x4000 + uVar3 * 0x8000;
    *(uint *)(param_1 + 0x54) = uVar3 * 0x580 + -0x2c0;
    sub_08029778(param_1,3);
    sub_0800561C(param_1 + 0x74,&DAT_082ade50);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08001EAC(0xa7);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((byte)(&DAT_082ae36a)[*(byte *)(param_1 + 0x13)] <= *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
  }
  sub_0800561C(param_1 + 0x74,
               &DAT_082ade34 + (uint)(byte)(&DAT_082ae35c)[*(byte *)(param_1 + 0x13)] * 0x1c);
  sub_08081C8C(uVar6,(&DAT_082ae363)[*(byte *)(param_1 + 0x13)]);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar4;
  iVar5 = iVar4 - *(int *)(param_1 + 0xc0);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0xc0) - iVar4;
  }
  if ((iVar5 < 0x400) || (uVar3 = sub_0803D880(param_1), (uVar3 & 2) != 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  return in_lr;
}

