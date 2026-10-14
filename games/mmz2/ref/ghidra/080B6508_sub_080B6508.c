// sub_080B6508 at 0x080B6508 (thumb)

undefined8 sub_080B6508(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x24;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b657d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    *(undefined4 *)(iVar1 + 0x5c) = *param_3;
    *(undefined4 *)(iVar1 + 0x60) = param_3[1];
    sub_08012580(iVar1);
    sub_080127E4(iVar1,*(undefined2 *)(&DAT_08346db8 + (param_1 & 0xff) * 2));
  }
  return CONCAT44(in_lr,iVar1);
}

