// sub_080A9CD0 at 0x080A9CD0 (thumb)

undefined4 sub_080A9CD0(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x2300);
  sub_080128D4(param_1);
  uVar2 = *(undefined4 *)(iVar3 + 0xb4);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0xb8);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  if ((byte)(*(char *)(param_1 + 0x11) + 0xbfU) < 0x7f) {
    *(undefined *)(param_1 + 0x22) = 1;
    uVar1 = 0x17;
  }
  else {
    *(undefined *)(param_1 + 0x22) = 0;
    uVar1 = 8;
  }
  *(undefined *)(param_1 + 0x25) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A9BAC(param_1);
  return in_lr;
}

