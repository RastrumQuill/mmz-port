// sub_0804BCC4 at 0x0804BCC4 (thumb)

undefined4 sub_0804BCC4(int param_1,int param_2,undefined param_3,undefined param_4)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed88);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\0') {
      *(undefined *)(iVar2 + 9) = 0x2b;
      *(undefined4 *)(iVar2 + 0x14) = 0x804bd71;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined *)(iVar2 + 9) = 0x2b;
      *(undefined4 *)(iVar2 + 0x14) = 0x804bd71;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0x30;
      uVar1 = 2;
    }
    *(undefined *)(iVar2 + 0x22) = uVar1;
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined *)(iVar2 + 0x10) = param_3;
    *(undefined *)(iVar2 + 0x11) = param_4;
  }
  return in_lr;
}

