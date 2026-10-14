// sub_0804BFF0 at 0x0804BFF0 (thumb)

undefined8 sub_0804BFF0(undefined4 *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed88);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x2c;
    *(undefined4 *)(iVar1 + 0x14) = 0x804c061;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 1;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined *)(iVar1 + 0x12) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

