// sub_0804E930 at 0x0804E930 (thumb)

undefined8 sub_0804E930(int param_1,undefined param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed88);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x36;
    *(undefined4 *)(iVar1 + 0x14) = 0x804ea09;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    puVar3 = (undefined *)(iVar1 + 0x25);
    *puVar3 = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    puVar2 = (undefined *)(iVar1 + 0x22);
    *puVar2 = 1;
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar1 + 9) = 0x36;
      *(undefined4 *)(iVar1 + 0x14) = 0x804ea09;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *puVar3 = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *puVar2 = 1;
    }
    else {
      *(undefined *)(iVar1 + 9) = 0x36;
      *(undefined4 *)(iVar1 + 0x14) = 0x804ea09;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *puVar3 = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0x30;
      *puVar2 = 2;
    }
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

