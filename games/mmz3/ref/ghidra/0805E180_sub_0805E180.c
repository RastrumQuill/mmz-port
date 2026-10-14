// sub_0805E180 at 0x0805E180 (thumb)

undefined4 sub_0805E180(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = sub_080ADD30(param_1,5);
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    uVar1 = 0xffffff00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar1 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    sub_08017700(param_1,0x1201);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_0805D670(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  if (0 < iVar2) {
    iVar2 = *(int *)(param_1 + 0xc0);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(iVar2 + 9)] + 0xc);
    }
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

