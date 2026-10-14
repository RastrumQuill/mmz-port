// sub_080894D8 at 0x080894D8 (thumb)

undefined4 sub_080894D8(int param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836500c);
    sub_08017700(param_1,0xdd06);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  uVar3 = (uint)*(byte *)(param_1 + 0x12);
  if (uVar3 == 0) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) ^ 1;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb8) + -0x1800 +
         *(short *)((int)&DAT_080fe64c + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) * 0x18;
    iVar4 = *(int *)(param_1 + 0xbc);
    sVar1 = (&DAT_080fe64c)[uVar3];
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb8) + 0x1800 +
         *(short *)((int)&DAT_080fe64c + ((-uVar3 + 0xc0) * 0x1000000 >> 0x17)) * 0x18;
    iVar4 = *(int *)(param_1 + 0xbc);
    sVar1 = *(short *)((int)&DAT_080fe64c + ((-uVar3 + 0x80) * 0x1000000 >> 0x17));
  }
  *(int *)(param_1 + 0x58) = iVar4 + sVar1 * 0x20;
  psVar2 = (short *)(param_1 + 0xc0);
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    *psVar2 = 0x78;
    sub_0800471C(0x2c);
    local_18 = *(int *)(param_1 + 0x54) + -0x800;
    local_14 = *(int *)(param_1 + 0x58) + 0x400;
    sub_0809C41C(&local_18,0x200,0xe0);
    local_18 = *(int *)(param_1 + 0x54) + 0x800;
    local_14 = *(int *)(param_1 + 0x58) + 0x400;
    sub_0809C41C(&local_18,0x200,0xa0);
  }
  sub_080177F4(param_1);
  return in_lr;
}

