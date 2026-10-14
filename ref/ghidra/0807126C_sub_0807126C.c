// sub_0807126C at 0x0807126C (thumb)

undefined4 sub_0807126C(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b1238);
    sub_080033F0(param_1 + 0x6c,6);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0x78;
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
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0xbc) + -0x1800 + (short)(&DAT_080c8e24)[uVar3 + 0x40] * 0x18;
    iVar4 = *(int *)(param_1 + 0xc0);
    sVar1 = (&DAT_080c8e24)[uVar3];
  }
  else {
    uVar3 = 0x80 - uVar3 & 0xff;
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0xbc) + 0x1800 + (short)(&DAT_080c8e24)[uVar3 + 0x40] * 0x18;
    iVar4 = *(int *)(param_1 + 0xc0);
    sVar1 = (&DAT_080c8e24)[uVar3];
  }
  *(int *)(param_1 + 0x50) = iVar4 + sVar1 * 0x20;
  piVar2 = (int *)(param_1 + 0xc4);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    *piVar2 = 0x78;
    sub_08001EAC(0xd);
    local_18 = *(int *)(param_1 + 0x4c) + -0x800;
    local_14 = *(int *)(param_1 + 0x50) + 0x400;
    sub_08076710(&local_18,0x200,0xe0);
    local_18 = *(int *)(param_1 + 0x4c) + 0x800;
    local_14 = *(int *)(param_1 + 0x50) + 0x400;
    sub_08076710(&local_18,0x200,0xa0);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

