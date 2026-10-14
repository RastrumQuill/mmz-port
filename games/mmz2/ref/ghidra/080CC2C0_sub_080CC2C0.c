// sub_080CC2C0 at 0x080CC2C0 (thumb)

undefined4 sub_080CC2C0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar1 = sub_08009240(iVar1 + -0x2800,*(undefined4 *)(param_1 + 0x58));
    if (iVar1 < 1) goto LAB_080cc350;
  }
  else {
    iVar1 = sub_080090D4(iVar1 + 0x2800,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar1) goto LAB_080cc350;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  sub_080CBDD0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
LAB_080cc350:
  uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (0x4000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0x12) = 7;
    sub_080B90B4(param_1 + 0x54);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

