// sub_0804B434 at 0x0804B434 (thumb)

undefined4 sub_0804B434(undefined4 param_1,undefined4 *param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed88);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x29;
    *(undefined4 *)(iVar1 + 0x14) = 0x804b4a1;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 1;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_4;
  }
  return in_lr;
}

