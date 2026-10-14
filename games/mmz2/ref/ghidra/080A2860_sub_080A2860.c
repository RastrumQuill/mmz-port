// sub_080A2860 at 0x080A2860 (thumb)

undefined4 sub_080A2860(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (uVar1 < 0x4001) {
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + -0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < -0x1c0) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe40;
    }
    uVar3 = *(ushort *)(param_1 + 0x50) + 8;
    if (0xff < uVar3) {
      uVar3 = 0x100;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(ushort *)(param_1 + 0x50) = uVar3;
    *(ushort *)(param_1 + 0x52) = uVar3;
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && (DAT_0202e130 != 0)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

