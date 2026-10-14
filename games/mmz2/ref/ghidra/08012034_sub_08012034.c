// sub_08012034 at 0x08012034 (thumb)

undefined4 sub_08012034(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08006B38();
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == param_1 + 0x14) break;
    sub_080EF118(iVar1,*(undefined4 *)(iVar1 + 0x14));
    if ((*(byte *)(iVar1 + 0xb) & 8) != 0) {
      sub_080099BC(*(undefined *)(iVar1 + 0x1c),*(undefined2 *)(iVar1 + 0x26),iVar1 + 0x54,
                   *(undefined4 *)(iVar1 + 0x30));
    }
  }
  return in_lr;
}

