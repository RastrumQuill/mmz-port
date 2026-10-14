// sub_080BADB0 at 0x080BADB0 (thumb)

undefined8 sub_080BADB0(undefined param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(short *)(DAT_02023210 + 10) < 0x1b) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_08005458(DAT_02023210);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 4;
      *(undefined4 *)(iVar1 + 0x14) = 0x80baad9;
      *(undefined2 *)(iVar1 + 0x1c) = 0x210;
      *(undefined *)(iVar1 + 0x1e) = 8;
      *(undefined *)(iVar1 + 0x10) = param_1;
      *(undefined *)(iVar1 + 0x11) = 0;
      *(undefined *)(iVar1 + 0x12) = 0;
      *(undefined4 *)(iVar1 + 0x20) = param_2;
      uVar3 = 1;
      iVar4 = iVar1;
      do {
        iVar2 = sub_08005458(DAT_02023210);
        if (iVar2 != 0) {
          *(undefined *)(iVar2 + 9) = 4;
          *(undefined4 *)(iVar2 + 0x14) = 0x80baad9;
          *(undefined2 *)(iVar2 + 0x1c) = 0x210;
          *(undefined *)(iVar2 + 0x1e) = 8;
          *(undefined *)(iVar2 + 0x10) = param_1;
          *(undefined *)(iVar2 + 0x11) = 0;
          *(char *)(iVar2 + 0x12) = (char)uVar3;
          *(undefined4 *)(iVar2 + 0x20) = param_2;
          *(int *)(iVar4 + 0x24) = iVar2;
          iVar4 = iVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x1b);
      *(undefined4 *)(iVar4 + 0x24) = 0;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

