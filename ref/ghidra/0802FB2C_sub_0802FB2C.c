// sub_0802FB2C at 0x0802FB2C (thumb)

undefined4 sub_0802FB2C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad128);
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08029778(param_1,0xb);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\t') {
    *(undefined *)(param_1 + 0xc3) = 1;
    local_20 = *(int *)(param_1 + 0x4c) + -0xa00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_20 = *(int *)(param_1 + 0x4c) + 0xa00;
    }
    local_1c = *(int *)(param_1 + 0x50) + -0x2d00;
    local_18 = 0xffffffc0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = 0x40;
    }
    local_14 = 0xfffff980;
    sub_08078630(param_1,&local_20,&local_18,0x3f);
    local_20 = *(int *)(param_1 + 0x4c) + -0x2800;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_20 = *(int *)(param_1 + 0x4c) + 0x2800;
    }
    local_1c = *(int *)(param_1 + 0x50) + -0x2300;
    local_18 = 0x18;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = 0xffffffe8;
    }
    local_14 = 0xfffff500;
    sub_08078630(param_1,&local_20,&local_18,0x67);
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

