// sub_080AFC4C at 0x080AFC4C (thumb)

undefined4 sub_080AFC4C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = sub_080AFE70();
  if (cVar1 == '\x01') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0xbc) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    uVar3 = 0x20;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xbc);
    uVar3 = 0xffffffe0;
  }
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  return in_lr;
}

