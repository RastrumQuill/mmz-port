// sub_080765C0 at 0x080765C0 (thumb)

undefined4 sub_080765C0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363960);
    uVar3 = 0x2a07;
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar3 = 0x2a06;
    }
    sub_08017700(param_1,uVar3);
    if (*(char *)(param_1 + 0xb9) == '\0') {
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x11) * 0x266 + -0x133;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffb20;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 4;
  }
  sub_080177F4(param_1);
  return in_lr;
}

