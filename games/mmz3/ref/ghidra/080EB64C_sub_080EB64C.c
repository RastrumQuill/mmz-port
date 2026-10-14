// sub_080EB64C at 0x080EB64C (thumb)

undefined4 sub_080EB64C(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_0800847C();
  *(undefined2 *)(param_1 + 0x10) = 0;
  uVar3 = 0;
  do {
    iVar1 = sub_08003330(uVar3 & 0xff,0x250);
    if (iVar1 != 0) {
      *(undefined2 *)(param_1 + 0x10) = 1;
    }
    uVar2 = uVar3 * 0x10000 + 0x10000;
    uVar3 = uVar2 >> 0x10;
  } while ((int)uVar2 >> 0x10 < 5);
  return in_lr;
}

