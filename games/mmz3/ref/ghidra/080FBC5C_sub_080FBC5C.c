// sub_080FBC5C at 0x080FBC5C (thumb)

undefined8 sub_080FBC5C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838c2d4 + (uint)*(byte *)(param_1 + 0xdcc) * 4)
                      );
  if (99999 < *(int *)(param_1 + 0xe00)) {
    *(undefined4 *)(param_1 + 0xe00) = 99999;
  }
  if (*(int *)(param_1 + 0xe08) < *(int *)(param_1 + 0xe00)) {
    if (*(char *)(param_1 + 0xea3) == '\0') {
      *(char *)(param_1 + 0xea3) = '\x01';
      sub_0800471C(0x138);
    }
    else {
      sub_0800471C(0x137);
    }
    *(undefined4 *)(param_1 + 0xe08) = *(undefined4 *)(param_1 + 0xe00);
  }
  else if (*(int *)(param_1 + 0xe04) != *(int *)(param_1 + 0xe00)) {
    sub_0800471C(0x137);
  }
  *(undefined4 *)(param_1 + 0xe04) = *(undefined4 *)(param_1 + 0xe00);
  sub_080FB9B4(param_1);
  iVar3 = 0;
  if (*(byte *)(param_1 + 0xea1) != 0) {
    iVar2 = param_1 + 0xe10;
    do {
      sub_080FE2C4(iVar2,param_1 + 0xe88,*(undefined4 *)(iVar2 + 4));
      iVar2 = iVar2 + 0x20;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0xea1));
  }
  return CONCAT44(in_lr,uVar1);
}

