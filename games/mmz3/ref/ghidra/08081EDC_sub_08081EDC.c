// sub_08081EDC at 0x08081EDC (thumb)

undefined8 sub_08081EDC(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x27;
    *(undefined4 *)(iVar1 + 0x14) = 0x80825a5;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(int *)(iVar1 + 0x28) = param_1;
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
    else {
      *(int *)(iVar3 + 0x28) = iVar1;
      *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
      *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar3 + 0x60);
      iVar5 = *(int *)(iVar3 + 0x54);
      *(int *)(iVar1 + 0x54) = iVar5;
      iVar6 = *(int *)(iVar3 + 0x58);
      *(int *)(iVar1 + 0x58) = iVar6;
      iVar4 = *(int *)(iVar3 + 0x2c);
      if (iVar4 != 0) {
        *(int *)(iVar1 + 0x54) = iVar5 + (*(int *)(iVar3 + 0x54) - *(int *)(iVar4 + 0x54));
        *(int *)(iVar1 + 0x58) = iVar6 + (*(int *)(iVar3 + 0x58) - *(int *)(iVar4 + 0x58));
      }
      *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(iVar1 + 0x54);
      *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar1 + 0x58);
    }
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(param_2 + 0x1c);
    *(int *)(iVar1 + 0xbc) = param_2;
    *(int *)(param_1 + 0x2c) = iVar1;
    pcVar2 = (char *)(param_1 + 0xb4);
    *(char *)(iVar1 + 0xb6) = *pcVar2;
    *pcVar2 = *pcVar2 + '\x01';
  }
  return CONCAT44(in_lr,iVar1);
}

