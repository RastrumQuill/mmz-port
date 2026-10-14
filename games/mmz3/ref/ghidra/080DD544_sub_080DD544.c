// sub_080DD544 at 0x080DD544 (thumb)

undefined4 sub_080DD544(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  iVar1 = *(int *)(param_1 + 0x54) +
          (char)(&DAT_0203010c)[*(ushort *)(&DAT_0836de80 + (uint)*(byte *)(param_1 + 0x10) * 2)] *
          0x100;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_0800A104(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -0x1fff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080DD5B4(param_1);
  return in_lr;
}

