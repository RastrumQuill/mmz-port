// sub_08094E50 at 0x08094E50 (thumb)

undefined4 sub_08094E50(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08342b40);
    sub_080127E4(param_1,0x9806);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0x78;
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
         *(int *)(param_1 + 0xb8) + -0x1800 + (short)(&DAT_080ef450)[uVar3 + 0x40 & 0xff] * 0x18;
    iVar4 = *(int *)(param_1 + 0xbc);
    sVar1 = (&DAT_080ef450)[uVar3];
  }
  else {
    uVar3 = 0x80 - uVar3 & 0xff;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb8) + 0x1800 + (short)(&DAT_080ef450)[uVar3 + 0x40 & 0xff] * 0x18;
    iVar4 = *(int *)(param_1 + 0xbc);
    sVar1 = (&DAT_080ef450)[uVar3];
  }
  *(int *)(param_1 + 0x58) = iVar4 + sVar1 * 0x20;
  piVar2 = (int *)(param_1 + 0xc0);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    *piVar2 = 0x78;
    sub_080032EC(0x2c);
    local_18 = *(int *)(param_1 + 0x54) + -0x800;
    local_14 = *(int *)(param_1 + 0x58) + 0x400;
    sub_08098414(&local_18,0x200,0xe0);
    local_18 = *(int *)(param_1 + 0x54) + 0x800;
    local_14 = *(int *)(param_1 + 0x58) + 0x400;
    sub_08098414(&local_18,0x200,0xa0);
  }
  sub_080128D4(param_1);
  return in_lr;
}

