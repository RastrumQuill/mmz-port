// sub_0803B1B0 at 0x0803B1B0 (thumb)

undefined4 sub_0803B1B0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if ((*(uint *)(param_1 + 0x8c) & 0x1020) == 0) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else if (*(char *)(param_1 + 0x13) == '\0') {
      sub_080032EC(0x2b);
      *(undefined *)(param_1 + 0x13) = 1;
    }
    iVar4 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar4;
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      if (iVar4 < 0xc) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
        iVar1 = sub_080EF150((0xc - iVar4) * 0x100,0xc);
        iVar2 = sub_080EF150((0xc - iVar4) * -0x100,0xc);
        iVar2 = iVar2 + 0x100;
        iVar4 = iVar1 + 0x100;
      }
      else {
        iVar2 = 0x100;
        iVar4 = iVar2;
      }
      *(short *)(param_1 + 0x50) = (short)iVar4;
      *(short *)(param_1 + 0x52) = (short)iVar2;
      iVar4 = iVar2 + 0x10;
      if (iVar4 < 0) {
        iVar4 = iVar2 + 0x2f;
      }
      sub_0803B530(param_1,0,iVar4 >> 5);
      return in_lr;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28);
    if (*(byte *)(iVar4 + 0xc) < 2) {
      uVar3 = *(undefined4 *)(iVar4 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(iVar4 + 0x50);
      *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(iVar4 + 0x52);
      return in_lr;
    }
  }
  sub_0803B280(param_1);
  return in_lr;
}

