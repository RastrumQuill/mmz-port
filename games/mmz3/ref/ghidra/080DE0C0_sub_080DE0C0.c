// sub_080DE0C0 at 0x080DE0C0 (thumb)

undefined4 sub_080DE0C0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_0202f4a4 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801749C(param_1);
    sub_08017700(param_1,0x9a00);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836df6c;
    *(undefined2 *)(param_1 + 0x26) = 0x2001;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar1 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = iVar1 + -0x800;
    iVar1 = sub_0800A104(iVar1 + -0x5000,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar1 + 0x101;
    sub_0800393C(&DAT_085d8500,(DAT_0202fb44 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d850c,(DAT_0202f944 - 4) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_080DE1E4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

