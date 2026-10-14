// sub_080B8958 at 0x080B8958 (thumb)

undefined4 sub_080B8958(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  do {
    iVar1 = sub_080070D8(DAT_0203062c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x18;
      *(undefined4 *)(iVar1 + 0x14) = 0x80b8a85;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined4 *)(iVar1 + 0x54) = param_1;
      *(undefined4 *)(iVar1 + 0x58) = param_2;
      *(undefined4 *)(iVar1 + 0x5c) = 0x180;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      iVar3 = (uVar2 * 2 >> 0x11 & 0xff) + 0x180;
      *(int *)(iVar1 + 0x5c) = iVar3;
      if ((uVar4 & 1) != 0) {
        *(int *)(iVar1 + 0x5c) = -iVar3;
      }
      *(undefined4 *)(iVar1 + 0x60) = 0xfffffe80;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x180);
      *(int *)(iVar1 + 0x60) = -0x180 - iVar3;
      *(undefined *)(iVar1 + 0x10) = 1;
      *(undefined *)(iVar1 + 0x12) = param_3;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 3);
  return in_lr;
}

