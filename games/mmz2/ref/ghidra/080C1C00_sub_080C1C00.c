// sub_080C1C00 at 0x080C1C00 (thumb)

undefined4 sub_080C1C00(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) &&
     ((3 < *(byte *)(param_1 + 0xd) ||
      ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2 &&
       (*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\x1d')))))) {
    if (*(byte *)(param_1 + 0xd) != 7) {
      if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
        uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
        uVar2 = uVar1 * 2;
        DAT_0202e188 = uVar1 & 0x7fffffff;
        uVar1 = uVar2 >> 0x11;
        local_18 = *(int *)(param_1 + 0x54) + ((uVar1 & 0xfff) - 0x800);
        local_14 = *(int *)(param_1 + 0x58) + -0x1800;
        uVar1 = uVar1 & 1;
        sub_080B0ACC(&local_18,&DAT_08343a04 + (uVar2 >> 0x12 & 1) * 0x1c,0,uVar1 << 4 | uVar1);
        if ((*(char *)(param_1 + 0xbd) != '\0') && (*(short *)(param_1 + 0xa4) < 0x10)) {
          sub_080127E4(param_1,0x1a02);
          sub_080128D4(param_1);
          *(char *)(param_1 + 0xbd) = '\0';
        }
      }
      sub_080EF118(param_1,*(undefined4 *)(&DAT_083488d8 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_08348958);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080C1D1C(param_1);
  return in_lr;
}

