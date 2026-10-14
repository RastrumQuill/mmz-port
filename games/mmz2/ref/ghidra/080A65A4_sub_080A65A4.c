// sub_080A65A4 at 0x080A65A4 (thumb)

undefined4 sub_080A65A4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x6100);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0834507c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    uVar2 = 0x180;
  }
  else {
    uVar2 = 0xfffffe80;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  if (*(byte *)(param_1 + 0x11) >> 4 == 0) {
    uVar2 = 0x180;
  }
  else {
    uVar2 = 0xfffffe80;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A6570(param_1);
  return in_lr;
}

