// sub_0803964C at 0x0803964C (thumb)

undefined8 sub_0803964C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08036FA8(0x803834d);
  iVar1 = sub_0800710C(DAT_020305e0);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xe4) == '\x02') {
      *(undefined *)(iVar1 + 9) = 3;
      *(undefined4 *)(iVar1 + 0x14) = 0x803972d;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 1;
      sub_08036F90(0,(&DAT_0835cc24)[*(byte *)(param_1 + 0xc2)]);
    }
    else {
      *(undefined *)(iVar1 + 9) = 3;
      *(undefined4 *)(iVar1 + 0x14) = 0x803972d;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0x30;
      *(undefined *)(iVar1 + 0x22) = 1;
      sub_08036F90(1,(&DAT_0835cc24)[*(byte *)(param_1 + 0xc2)]);
    }
    *(int *)(iVar1 + 0xb4) = param_1;
    *(undefined *)(iVar1 + 0x10) = *(undefined *)(param_1 + 0x126);
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

