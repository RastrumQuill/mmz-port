// sub_080EC12C at 0x080EC12C (thumb)

undefined4 sub_080EC12C(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  byte abStack_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  
  local_3c = 0x2900;
  uStack_38 = 0x2901;
  uStack_34 = 0x2902;
  local_30 = 0x2903;
  sub_08128B5C(abStack_2c,&DAT_08129c70,4);
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
LAB_080ec1c4:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080EC330(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xb6) != '\0') {
      uVar3 = (uint)*(byte *)(param_1 + 0xb5);
      local_28 = *(undefined4 *)(param_1 + 0xbc);
      local_24 = *(undefined4 *)(param_1 + 0xc0);
      uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      sub_080E218C(&local_28,uVar3,(uVar1 * 2 >> 0x11 & 0xff) + 0x400,
                   (uVar2 * 2 >> 0x11 & 7) + 0x9c & 0xff);
      uVar3 = uVar3 + 1;
      if (3 < uVar3) goto LAB_080ec1c4;
      *(char *)(param_1 + 0xb6) = '\0';
      *(byte *)(param_1 + 0xb5) = (byte)uVar3;
      sub_0801CF00(param_1,*(undefined2 *)(&local_3c + uVar3));
      sub_08005784(param_1 + 0x74,&DAT_08866288 + (uint)abStack_2c[uVar3] * 0x18);
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0886627c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

