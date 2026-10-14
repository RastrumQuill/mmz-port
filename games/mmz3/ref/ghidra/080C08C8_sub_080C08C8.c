// sub_080C08C8 at 0x080C08C8 (thumb)

undefined4 sub_080C08C8(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((0x17 < *(short *)(DAT_0203062c + 10)) && (iVar1 = sub_0800710C(DAT_0203062c), iVar1 != 0)) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x35;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c0929;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x28) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
  }
  return in_lr;
}

