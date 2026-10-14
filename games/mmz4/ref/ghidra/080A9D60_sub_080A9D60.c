// sub_080A9D60 at 0x080A9D60 (thumb)

undefined4 sub_080A9D60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885f468);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

