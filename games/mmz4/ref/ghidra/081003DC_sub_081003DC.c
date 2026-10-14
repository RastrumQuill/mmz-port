// sub_081003DC at 0x081003DC (thumb)

undefined4 sub_081003DC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  DAT_0202e13e = 0x3e0;
  DAT_0202df3e = 10;
  DAT_0202e140 = 0x3e0;
  DAT_0202df40 = 10;
  if ((DAT_0202e8c4 & 0x80) == 0) {
    *(undefined *)(param_1 + 0xb8) = 0x7f;
  }
  else {
    *(undefined *)(param_1 + 0xb8) = 0x80;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = sub_08005500(DAT_0202eda0);
    if (iVar1 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x700;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x900;
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x3c;
    *(undefined4 *)(iVar1 + 0x14) = 0x81003dd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x11) = 1;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
    uVar2 = (uint)*(byte *)(param_1 + 0xb8);
    sub_08001D30(&DAT_08c44000 + uVar2 * 5,
                 ((uint)(ushort)(&DAT_0202e040)[uVar2] -
                 (uint)((ushort)(&DAT_08c44006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4400c + uVar2 * 0x14,
                 ((uint)(ushort)(&DAT_0202de40)[uVar2] - (uint)(byte)(&DAT_08c44013)[uVar2 * 0x14])
                 * 0x20 + 0x200);
  }
  else {
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8);
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801CC9C(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08100578(param_1);
  return in_lr;
}

