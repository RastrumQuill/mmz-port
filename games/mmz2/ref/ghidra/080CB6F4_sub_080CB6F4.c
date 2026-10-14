// sub_080CB6F4 at 0x080CB6F4 (thumb)

undefined4 sub_080CB6F4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_08012580();
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = sub_08006B84(DAT_0202f088);
    if (iVar1 == 0) {
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x54) = iVar2;
    uVar3 = sub_080093C4(iVar2,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0xc;
    *(undefined4 *)(iVar1 + 0x14) = 0x80cb6f5;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x11) = 1;
    *(int *)(iVar1 + 0x28) = param_1;
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    sub_08002638(&DAT_0843350c,(DAT_0202e65e - 0x100) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433518,(DAT_0202e45e - 10) * 0x20 + 0x200);
  }
  else {
    sub_080127E4(param_1,0x6700);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080CB82C(param_1);
  return in_lr;
}

