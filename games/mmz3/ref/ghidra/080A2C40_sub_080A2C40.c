// sub_080A2C40 at 0x080A2C40 (thumb)

undefined4 sub_080A2C40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08367c54);
    iVar2 = *(int *)(param_1 + 0x54);
    iVar1 = iVar2 + -0x800;
    *(int *)(param_1 + 0x54) = iVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar1 = iVar2 + 0x800;
    }
    *(int *)(param_1 + 0x54) = iVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
    sub_08017700(param_1,0x4605);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080a2cb4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x80;
  iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar1 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
LAB_080a2cb4:
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    sub_080A2920();
    sub_080A2968(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

