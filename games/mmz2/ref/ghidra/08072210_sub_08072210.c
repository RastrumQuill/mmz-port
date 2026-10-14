// sub_08072210 at 0x08072210 (thumb)

undefined4 sub_08072210(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xc1) != '\0') {
    DAT_0202e188 = DAT_0202e188 * 0x343fd + 0x269ec3 & 0x7fffffff;
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58);
    uVar2 = 0;
    do {
      uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar1 & 0x7fffffff;
      uVar1 = ~(uVar1 * 2 >> 0x11) & 1;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar1 = uVar1 << 4;
      }
      else {
        uVar1 = uVar1 << 4 | 1;
      }
      sub_080B0ACC(&local_28,&DAT_08343a04 + (uVar2 & 3) * 0x1c,0,uVar1);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sub_0809CE04(&local_28,2,uVar2 * 5 - 0x70 & 0xff);
      }
      else {
        sub_0809CE04(&local_28,2,uVar2 * -5 - 0x10 & 0xff);
      }
      local_24 = local_24 + -0x800;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 8);
    *(undefined *)(param_1 + 0xbd) = 0;
    sub_080032EC(0x3f);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08071DA0(param_1);
  }
  return in_lr;
}

