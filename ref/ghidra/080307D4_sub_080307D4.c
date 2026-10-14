// sub_080307D4 at 0x080307D4 (thumb)

undefined4 sub_080307D4(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    iVar4 = (int)*(short *)(param_1 + 0x8c);
    uVar3 = (uint)(*(byte *)(param_1 + 0xd9) >> 2);
    iVar1 = uVar3 * 3;
    if (iVar4 == iVar1 || (int)(iVar4 + uVar3 * -3) < 0 != SBORROW4(iVar4,iVar1)) {
      if ((int)(uint)(*(byte *)(param_1 + 0xd9) >> 1) < iVar4) {
        uVar2 = 0x280;
      }
      else {
        uVar2 = 0x300;
      }
    }
    else {
      uVar2 = 0x240;
    }
    *(undefined2 *)(param_1 + 0xc2) = uVar2;
    *(undefined *)(param_1 + 0xc1) = 1;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

