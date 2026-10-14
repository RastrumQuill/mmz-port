// sub_08049820 at 0x08049820 (thumb)

undefined4 sub_08049820(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xd2) = *(char *)(param_1 + 0xd3) - *(char *)(undefined2 *)(param_1 + 0xa4);
  *(char *)(param_1 + 0xd3) = (char)*(undefined2 *)(param_1 + 0xa4);
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0804985c:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0804986e;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = sub_0801E11C(0x10,param_1,&DAT_0833b1ac);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    goto LAB_0804985c;
  }
  iVar2 = sub_0801E4D8();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0804986e:
  *(undefined *)(param_1 + 0xbf) = 0;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833af60 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

