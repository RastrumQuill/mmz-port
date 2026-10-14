// sub_080B2214 at 0x080B2214 (thumb)

undefined8 sub_080B2214(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x2f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b2279;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    if (param_2 == '\0') {
      uVar2 = 0xfffffd00;
    }
    else {
      uVar2 = 0x300;
    }
    *(undefined4 *)(iVar1 + 0x60) = uVar2;
  }
  return CONCAT44(in_lr,iVar1);
}

