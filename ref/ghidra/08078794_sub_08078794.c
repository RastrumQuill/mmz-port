// sub_08078794 at 0x08078794 (thumb)

undefined4 sub_08078794(int param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 9;
    *(undefined4 *)(iVar1 + 0x14) = 0x807880d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f92;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe9;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = 0xfffffd00;
    uVar2 = 0xfffffd00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x300;
    }
    *(undefined4 *)(iVar1 + 0x54) = uVar2;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined *)(iVar1 + 0x10) = 3;
    *(undefined *)(iVar1 + 0x12) = 0x80;
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined *)(iVar1 + 0x11) = param_3;
  }
  return in_lr;
}

