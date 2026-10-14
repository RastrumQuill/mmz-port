// sub_08062FA8 at 0x08062FA8 (thumb)

undefined4 sub_08062FA8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x1200;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08361f94);
    sub_08017700(param_1,0xd604);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x5c) = iVar1;
  iVar1 = sub_080FE390(iVar1,0xf);
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 == 0) {
    sub_08061B30(param_1,0xf00,0xffffcf00);
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(uint *)(iVar2 + 0xbc) = *(uint *)(iVar2 + 0xbc) & 0xffffffdf;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

