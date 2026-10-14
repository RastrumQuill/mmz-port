// sub_080CA7AC at 0x080CA7AC (thumb)

undefined4 sub_080CA7AC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801749C();
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = sub_0800710C(DAT_02030630);
    if (iVar1 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x900;
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 2;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ca7ad;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x11) = 1;
    *(int *)(iVar1 + 0x28) = param_1;
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    if ((DAT_02002650 & 0x7f) == 3) {
      DAT_0202f834 = 10;
    }
    sub_0800393C(&DAT_085d7a60,(DAT_0202fa34 - 0x1e0) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7a6c,(DAT_0202f834 - 10) * 0x20 + 0x200);
  }
  else {
    sub_08017700(param_1,0x1200);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080CA8FC(param_1);
  return in_lr;
}

