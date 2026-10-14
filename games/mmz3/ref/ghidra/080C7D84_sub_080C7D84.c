// sub_080C7D84 at 0x080C7D84 (thumb)

undefined8
sub_080C7D84(undefined4 param_1,undefined4 *param_2,undefined param_3,undefined4 param_4,
            undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x4d;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c7dfd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x74) = param_4;
    *(undefined *)(iVar1 + 0x7c) = param_5;
  }
  return CONCAT44(in_lr,iVar1);
}

