// sub_080407A4 at 0x080407A4 (thumb)

undefined4 sub_080407A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0835e828)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  sub_0803D3D4(param_1,&DAT_0835e674,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x80406f9;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0800393C(&DAT_085d7bc8,(DAT_0202fa58 - 0x280) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7bd4,(DAT_0202f858 - 5) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d7bdc,(DAT_0202fa5a - 0x2a2) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7be8,(DAT_0202f85a - 6) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d7bf0,(DAT_0202fa5c - 800) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7bfc,(DAT_0202f85c - 7) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0xb4) = 0;
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    iVar2 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x54),0xf000);
    *(int *)(param_1 + 0xbc) = iVar2 * 0xf000 + 0x7800;
    *(undefined *)(param_1 + 0xc4) = 0xff;
    *(undefined *)(param_1 + 0xc5) = 0;
  }
  sub_08040930(param_1);
  return in_lr;
}

