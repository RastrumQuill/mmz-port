// sub_080352B8 at 0x080352B8 (thumb)

undefined4 sub_080352B8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xb);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0xa0;
    *(undefined *)(param_1 + 0x13) = 3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = *(int *)(param_1 + 0xb8);
      local_2c = local_1c + 0x12000;
      local_24 = local_1c + 0x10800;
      iVar2 = -0x2000;
    }
    else {
      local_1c = *(int *)(param_1 + 0xb8);
      local_2c = local_1c + -0x3000;
      local_24 = local_1c + 0x11000;
      iVar2 = -0x1800;
    }
    local_1c = local_1c + iVar2;
    local_28 = *(int *)(param_1 + 0xc0);
    sub_08064B04(&local_2c,0,*(byte *)(param_1 + 10) >> 4 & 1);
    local_28 = local_28 + -0x2000;
    sub_08064B04(&local_2c,1,*(byte *)(param_1 + 10) >> 4 & 1);
    local_28 = local_28 + -0x2000;
    sub_08064B04(&local_2c,1,*(byte *)(param_1 + 10) >> 4 & 1);
    local_20 = *(int *)(param_1 + 0xc0) + -0x7400;
    local_18 = local_20;
    sub_080658C4(&local_24,0,0,param_1);
    sub_080658C4(&local_1c,0,1,param_1);
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x10) = 1;
    *(undefined *)(param_1 + 0xd1) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad5f4);
    sub_08001EE8((int)*(short *)(param_1 + 0xd4));
    sub_08001EE8((int)*(short *)(param_1 + 0xd6));
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  return in_lr;
}

