// sub_080A2B14 at 0x080A2B14 (thumb)

undefined4 sub_080A2B14(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08367c3c);
    if (*(byte *)(param_1 + 0x12) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = *(byte *)(param_1 + 0x12) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * 0x400 + -0x200;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    sub_08017700(param_1,0x4604);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080a2be6;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar2 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x800);
    if (0 < iVar2) {
LAB_080a2bd2:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    iVar2 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x800);
    if (iVar2 < 0) goto LAB_080a2bd2;
  }
  sub_080177F4(param_1);
LAB_080a2be6:
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

