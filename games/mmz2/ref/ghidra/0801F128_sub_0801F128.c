// sub_0801F128 at 0x0801F128 (thumb)

undefined4 sub_0801F128(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801F19C(param_1,0,0,0,0);
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = iVar2 * 2;
    *(undefined2 *)(param_1 + 8 + iVar1) = 0;
    *(undefined2 *)(param_1 + 0x10 + iVar1) = 0;
    *(undefined2 *)(param_1 + 0x60 + iVar1) = 0;
    sub_0801F1B8(param_1,iVar2);
    *(undefined *)(param_1 + 0x78 + iVar2) = 0xff;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(uint *)(param_1 + 0x84) = (uint)DAT_020011bc;
  return in_lr;
}

