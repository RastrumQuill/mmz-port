// sub_0803C700 at 0x0803C700 (thumb)

undefined8 sub_0803C700(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_0800710C(DAT_020305e0);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0xe4) == '\x02') {
      *(undefined *)(iVar2 + 9) = 0xd;
      *(undefined4 *)(iVar2 + 0x14) = 0x803c7cd;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 1;
      sub_08036F90(0,*(undefined *)(param_1 + 0xc2));
    }
    else {
      *(undefined *)(iVar2 + 9) = 0xd;
      *(undefined4 *)(iVar2 + 0x14) = 0x803c7cd;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0x30;
      *(undefined *)(iVar2 + 0x22) = 1;
      sub_08036F90(1,*(undefined *)(param_1 + 0xc2));
    }
    *(int *)(iVar2 + 0xb4) = param_1;
    *(undefined *)(iVar2 + 0x10) = param_2;
    cVar1 = *(char *)(param_1 + 0x137) + '\x01';
    *(char *)(param_1 + 0x137) = cVar1;
    *(char *)(iVar2 + 0x11) = cVar1;
  }
  return CONCAT44(in_lr,iVar2);
}

