// sub_08075C9C at 0x08075C9C (thumb)

undefined4 sub_08075C9C(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,6);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b1778,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x8076409;
  iVar1 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x10 >> 0x10,
                       ((*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) + -0x1800) * 0x10
                       >> 0x10);
  uVar2 = (uint)(iVar1 << 0x10) >> 0x18;
  if (*(char *)(param_1 + 0x11) == '\0') {
    if ((uVar2 - 1 & 0xff) < 0x4f) {
      uVar2 = 0x50;
    }
    else if ((uVar2 + 0x4f & 0xff) < 0x4e) {
      uVar2 = 0xb0;
    }
  }
  else if ((uVar2 - 0x31 & 0xff) < 0x4f) {
    uVar2 = 0x30;
  }
  else if ((uVar2 + 0x7f & 0xff) < 0x6e) {
    uVar2 = 0xef;
  }
  iVar1 = (short)(&DAT_080c8e24)[uVar2 + 0x40] * 0x280;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar1 >> 8;
  iVar1 = (short)(&DAT_080c8e24)[uVar2] * 0x280;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar1 >> 8;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08075558(param_1);
  return in_lr;
}

