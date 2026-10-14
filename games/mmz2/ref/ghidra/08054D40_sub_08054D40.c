// sub_08054D40 at 0x08054D40 (thumb)

undefined4 sub_08054D40(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = -0x1200;
    }
    else {
      local_14 = 0x1200;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58) + -0x1400;
    iVar1 = sub_08077FB0(param_1,&local_14,1,1);
    *(int *)(param_1 + 0xc4) = iVar1;
    *(undefined *)(iVar1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd0) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0xc4);
  if (*(char *)(iVar1 + 0xbc) == '\0') {
    if (1 < *(byte *)(iVar1 + 0xc)) {
      *(undefined *)(param_1 + 0xe) = 10;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0833c378);
    if (1 < *(byte *)(*(int *)(param_1 + 0xc4) + 0xc)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

