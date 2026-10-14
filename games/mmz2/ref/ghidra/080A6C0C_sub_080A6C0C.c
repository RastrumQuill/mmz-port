// sub_080A6C0C at 0x080A6C0C (thumb)

undefined4 sub_080A6C0C(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x2d;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a6ca9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0xb8) = 0x4000;
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(iVar1 + 0x10) = 0;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0xb5) = param_2;
    *(undefined *)(iVar1 + 0xb6) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 4;
    sub_08006DE4(iVar1 + 0x74,&DAT_0834513c,iVar1 + 0x54,0);
    *(int *)(iVar1 + 0xa0) = iVar1;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined *)(iVar1 + 0xb4) = 0x80;
    sub_080A6B84(iVar1);
  }
  return in_lr;
}

