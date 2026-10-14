// sub_080DC850 at 0x080DC850 (thumb)

undefined8 sub_080DC850(undefined param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(short *)(DAT_0202f094 + 10) < 0x1b) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_08006B84(DAT_0202f094);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined *)(iVar1 + 9) = 9;
      *(undefined4 *)(iVar1 + 0x14) = 0x80dc579;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = param_1;
      *(undefined *)(iVar1 + 0x11) = 0;
      *(undefined *)(iVar1 + 0x12) = 0;
      *(undefined4 *)(iVar1 + 0x28) = param_2;
      uVar3 = 1;
      iVar4 = iVar1;
      do {
        iVar2 = sub_08006B84(DAT_0202f094);
        if (iVar2 != 0) {
          *(undefined *)(iVar2 + 0x25) = 0x10;
          *(undefined *)(iVar2 + 9) = 9;
          *(undefined4 *)(iVar2 + 0x14) = 0x80dc579;
          *(undefined2 *)(iVar2 + 0x20) = 0;
          *(undefined *)(iVar2 + 0x22) = 0;
          *(undefined *)(iVar2 + 0x10) = param_1;
          *(undefined *)(iVar2 + 0x11) = 0;
          *(char *)(iVar2 + 0x12) = (char)uVar3;
          *(undefined4 *)(iVar2 + 0x28) = param_2;
          *(int *)(iVar4 + 0x2c) = iVar2;
          iVar4 = iVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x1b);
      *(undefined4 *)(iVar4 + 0x2c) = 0;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

