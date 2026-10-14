// sub_080ADCDC at 0x080ADCDC (thumb)

undefined8 sub_080ADCDC(undefined4 param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c44ca8,(DAT_0202e184 - 0x2a0) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44cb4,(DAT_0202df84 - 6) * 0x20 + 0x200);
  iVar1 = sub_08005500(DAT_0202ed90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x50;
    *(undefined4 *)(iVar1 + 0x14) = 0x80adde9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

