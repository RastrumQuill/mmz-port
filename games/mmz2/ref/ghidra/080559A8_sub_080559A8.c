// sub_080559A8 at 0x080559A8 (thumb)

undefined4 sub_080559A8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = -0x1200;
    }
    else {
      local_10 = 0x1200;
    }
    local_10 = *(int *)(param_1 + 0x54) + local_10;
    local_c = *(int *)(param_1 + 0x58) + -0x1400;
    uVar2 = sub_08077FB0(param_1,&local_10,3,1);
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    *(undefined *)(param_1 + 0xd0) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0xc4) + 0xc)) {
    if (*(int *)(*(int *)(param_1 + 0xc4) + 0x2c) == 0) {
      cVar1 = '\a';
    }
    else {
      sub_08006E08(param_1 + 0x74,&DAT_0833c378);
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(char *)(param_1 + 0xe) = cVar1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

