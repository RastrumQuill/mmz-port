// sub_080635B8 at 0x080635B8 (thumb)

undefined4 sub_080635B8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08088A1C(param_1,0,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar2 = sub_080032EC(0x4e);
    *(undefined2 *)(param_1 + 0xd0) = uVar2;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54);
      iVar3 = -0x800;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar3 = 0x800;
    }
    local_10 = local_10 + iVar3;
    local_c = *(int *)(param_1 + 0x58) + -0x5e00;
    sub_080BA788(&local_10,0,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0x30 < bVar1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

