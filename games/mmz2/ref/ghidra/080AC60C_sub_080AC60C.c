// sub_080AC60C at 0x080AC60C (thumb)

undefined8 sub_080AC60C(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ac82d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    sub_08012580(iVar1);
    sub_080127E4(iVar1,(&DAT_08345ad8)[param_1 & 0xff]);
  }
  return CONCAT44(in_lr,iVar1);
}

