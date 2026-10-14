// sub_08071DA0 at 0x08071DA0 (thumb)

undefined4 sub_08071DA0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  
  DAT_0202e188 = DAT_0202e188 * 0x343fd + 0x269ec3 & 0x7fffffff;
  local_24 = *(undefined4 *)(param_1 + 0x54);
  local_20 = *(int *)(param_1 + 0x58);
  uVar2 = 0;
  if (*(char *)(param_1 + 0xbd) != '\0') {
    do {
      uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar1 & 0x7fffffff;
      uVar1 = uVar1 * 2 >> 0x11 & 1;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar1 = uVar1 << 4;
      }
      else {
        uVar1 = uVar1 << 4 | 1;
      }
      sub_080B0ACC(&local_24,&DAT_08343a04 + (uVar2 & 3) * 0x1c,0,uVar1);
      local_20 = local_20 + -0x800;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0xbd));
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

