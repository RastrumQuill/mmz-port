// sub_080CE2B4 at 0x080CE2B4 (thumb)

undefined4 sub_080CE2B4(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    local_14 = *(undefined4 *)(iVar2 + 0x54);
    local_10 = *(undefined4 *)(iVar2 + 0x58);
    if (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == '\x01') {
      local_1c = *(undefined4 *)(DAT_0202dbf0 + 0x54);
      local_18 = *(int *)(DAT_0202dbf0 + 0x58) + -0x2400;
      uVar1 = sub_0810CD64(&local_1c,&local_14);
      *(undefined *)(iVar2 + 0xb4) = uVar1;
    }
  }
  return in_lr;
}

