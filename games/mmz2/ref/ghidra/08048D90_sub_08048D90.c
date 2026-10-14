// sub_08048D90 at 0x08048D90 (thumb)

undefined4 sub_08048D90(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa509);
    sub_08006E08(param_1 + 0x74,&DAT_0833ad0c);
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xff7f;
    *(char *)(param_1 + 0xbe) = *(char *)(param_1 + 0xbe) + -1;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x100;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 3) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = 0x1000;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = -0x1000;
    }
    local_10 = local_10 + iVar2;
    local_c = *(undefined4 *)(param_1 + 0x58);
    sub_080AC60C(3,&local_10);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x54) - iVar3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x54) + iVar3;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0xd) = 0x1b;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

