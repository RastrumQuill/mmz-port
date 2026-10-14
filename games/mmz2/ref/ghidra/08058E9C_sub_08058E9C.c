// sub_08058E9C at 0x08058E9C (thumb)

undefined4 sub_08058E9C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar2;
      if (0 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xb5) == '\0') {
      sub_08006E08(param_1 + 0x74,&DAT_0833c888);
    }
    else {
      sub_08006E08(param_1 + 0x74,&DAT_0833c8b8);
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833cbe8 + (uint)*(byte *)(param_1 + 0xb5) * 2));
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x12) = 1;
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833cbee + (uint)*(byte *)(param_1 + 0xb5) * 2));
    sub_080128D4(param_1);
  }
  if (*(byte *)(param_1 + 0xb5) == 0) {
    if (0x2000 < *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0x58)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      iVar2 = *(int *)(param_1 + 0x60) + -0x20;
      *(int *)(param_1 + 0x60) = iVar2;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    }
  }
  else {
    uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x6000 < uVar3) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc4) = 4;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      iVar2 = *(int *)(param_1 + 0x60) + -0x10;
      *(int *)(param_1 + 0x60) = iVar2;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    }
  }
  return in_lr;
}

