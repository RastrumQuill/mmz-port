// sub_080496D0 at 0x080496D0 (thumb)

undefined8 sub_080496D0(int param_1,undefined param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed88);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar2 + 9) = 0x23;
      *(undefined4 *)(iVar2 + 0x14) = 0x8049821;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined *)(iVar2 + 9) = 0x23;
      *(undefined4 *)(iVar2 + 0x14) = 0x8049821;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0x30;
      uVar1 = 2;
    }
    *(undefined *)(iVar2 + 0x22) = uVar1;
    *(int *)(iVar2 + 0x28) = param_1;
    *(undefined *)(iVar2 + 0x10) = 0;
    *(undefined *)(iVar2 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}

