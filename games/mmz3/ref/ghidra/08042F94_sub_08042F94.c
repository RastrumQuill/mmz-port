// sub_08042F94 at 0x08042F94 (thumb)

undefined4 sub_08042F94(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      goto LAB_08042ffa;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835e938 + (uint)*(byte *)(param_1 + 0x10) * 0xa8);
    sub_08017700(param_1,0x2b06);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = (uint)*(byte *)(param_1 + 0x12) * 8;
  sub_080759D0(*(int *)(param_1 + 0x54) + -0x2600,*(int *)(param_1 + 0x58) + -0x4000,
               *(undefined4 *)(&DAT_0835ea40 + iVar3),*(undefined4 *)(&DAT_0835ea44 + iVar3));
  *(undefined *)(param_1 + 0x13) = 0x10;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08042ffa:
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 3) {
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

