// sub_08032178 at 0x08032178 (thumb)

undefined4 sub_08032178(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    local_18 = *(undefined4 *)(param_1 + 0x50);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = -0x1800;
    }
    else {
      local_1c = 0x1800;
    }
    local_1c = *(int *)(param_1 + 0x4c) + local_1c;
    puVar1 = (ushort *)(param_1 + 0xcc);
    if (*puVar1 == 0) {
      local_18 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    else {
      local_18 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      local_18 = local_18 + -0x900;
    }
    sub_08029778(param_1,0x13);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_0807B13C(param_1,2);
    sub_0807B2EC(&local_1c,(uint)(&DAT_05000000 + (uint)*puVar1 * 0x6000000) >> 0x18,
                 *(byte *)(param_1 + 10) >> 4 & 1,*puVar1 & 0xff);
    *puVar1 = 0;
    *(undefined *)(*(int *)(param_1 + 0x20) + 0x11) = 1;
    sub_0801412C(1,param_1 + 0x4c);
    sub_08001EAC(0x39);
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

