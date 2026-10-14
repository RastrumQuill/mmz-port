// sub_0804C174 at 0x0804C174 (thumb)

undefined4 sub_0804C174(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x12) == '\x10') {
    local_18 = *(int *)(param_1 + 0x4c) + -0x600;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = *(int *)(param_1 + 0x4c) + 0x600;
    }
    local_14 = *(int *)(param_1 + 0x50) + 0x1300;
    iVar1 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - local_18) * 0x1000 >> 0x10,
                         (*(int *)(DAT_0202286c + 0x50) - (*(int *)(param_1 + 0x50) + 0x1b00)) *
                         0x1000 >> 0x10);
    sub_08076710(&local_18,0x180,((uint)(iVar1 << 0x10) >> 0x18) + 0x80 & 0xff);
    sub_08001EAC(0xd);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

