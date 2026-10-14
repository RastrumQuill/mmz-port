// sub_08088480 at 0x08088480 (thumb)

undefined4 sub_08088480(int param_1)

{
  undefined uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885baf8);
    sub_0801CF00(param_1,0x1d0e);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801D1F4(param_1);
  iVar2 = sub_08088B14(param_1);
  if (iVar2 != 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0x20;
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      uVar1 = 8;
    }
    else {
      bVar3 = 0;
      uVar1 = 7;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(byte *)(param_1 + 0xe) = bVar3;
    *(byte *)(param_1 + 0xf) = bVar3;
  }
  return in_lr;
}

