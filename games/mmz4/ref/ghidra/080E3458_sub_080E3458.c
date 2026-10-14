// sub_080E3458 at 0x080E3458 (thumb)

undefined4 sub_080E3458(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 auStack_24 [2];
  short asStack_1c [4];
  undefined4 local_14 [2];
  
  sub_08128B5C(asStack_1c + 2,&DAT_08129bc4,4);
  local_14[0] = 0xffffff00;
  local_14[1] = 0x100;
  if (*(byte *)(param_1 + 0x75) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0x75) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080E33E4(param_1);
    *(undefined *)(param_1 + 0x11) = 2;
    sub_080E32E4(param_1 + 0x54,3,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_080E33E4(param_1);
    *(undefined *)(param_1 + 0x11) = 4;
    sub_080E32E4(param_1 + 0x54,5,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  if (*(byte *)(param_1 + 0x11) < 4) {
    sub_0801CF00(param_1,asStack_1c[*(byte *)(param_1 + 0x11)]);
    iVar2 = *(byte *)(param_1 + 0x11) - 2;
  }
  else {
    sub_0801CF00(param_1,asStack_1c[*(byte *)(param_1 + 0x11) - 2] + 0xc);
    iVar2 = *(byte *)(param_1 + 0x11) - 4;
  }
  *(undefined4 *)(param_1 + 0x5c) = local_14[iVar2];
  *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  return in_lr;
}

