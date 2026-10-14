// sub_080C13B8 at 0x080C13B8 (thumb)

undefined4
sub_080C13B8(undefined4 *param_1,undefined param_2,undefined param_3,short param_4,short param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x39;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c1431;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(int *)(iVar1 + 0x5c) = (int)param_4;
    *(int *)(iVar1 + 0x60) = (int)param_5;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
  }
  return in_lr;
}

