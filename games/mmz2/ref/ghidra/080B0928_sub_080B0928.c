// sub_080B0928 at 0x080B0928 (thumb)

undefined8 sub_080B0928(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0xf;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b0a29;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    *(undefined *)(iVar1 + 0x10) = 0;
    sub_08012580(iVar1);
    sub_080127E4(iVar1,(&DAT_08346914)[param_1 & 0xff]);
  }
  return CONCAT44(in_lr,iVar1);
}

