// sub_080A912C at 0x080A912C (thumb)

undefined4 sub_080A912C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x1000;
  uVar2 = 0;
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  uVar1 = uVar1 * 2 >> 0x11 & 1;
  if (uVar1 != 0xfffffffb) {
    do {
      sub_080B0ACC(&local_18,&DAT_083453bc + (uVar2 >> 1) * 0x1c,0,0);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < uVar1 + 5);
  }
  sub_080032EC(0x3f);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

