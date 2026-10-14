// sub_0809313C at 0x0809313C (thumb)

undefined4 sub_0809313C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08094568(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

