// sub_08099874 at 0x08099874 (thumb)

undefined4 sub_08099874(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CD28(param_1);
    sub_0801CF00(param_1,0x6906);
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = *(byte *)(param_1 + 0xbc) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    sub_080DD180(param_1 + 0x54,2,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x12);
  bVar1 = *(char *)(param_1 + 0x12) + 3;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x22 < bVar1) {
    *(undefined *)(param_1 + 0x12) = 0x22;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0xb8) < iVar2) {
      sub_0801CFF0(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x12) == '\"') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = *(int *)(param_1 + 0x54);
      iVar2 = 0x1000;
    }
    else {
      local_1c = *(int *)(param_1 + 0x54);
      iVar2 = -0x1000;
    }
    local_1c = local_1c + iVar2;
    local_18 = *(int *)(param_1 + 0x58) + -0x400;
    bVar1 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar1 = bVar1 | 0x10;
    }
    sub_080D4898(&local_1c,&DAT_0885d8c0,0,bVar1);
    bVar1 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar1 = bVar1 | 0x10;
    }
    sub_080D4898(&local_1c,&DAT_0885d8dc,0,bVar1);
    sub_080D0894(1,&local_1c);
    sub_08002B10(0x2a);
    sub_0802AB70(3,0x1b,param_1 + 0x54);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

