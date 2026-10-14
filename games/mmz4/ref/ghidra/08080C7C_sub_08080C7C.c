// sub_08080C7C at 0x08080C7C (thumb)

undefined4 sub_08080C7C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (DAT_0202dbf0 != 0) {
      *(byte *)(DAT_0202dbf0 + 0x142) = *(byte *)(DAT_0202dbf0 + 0x142) | 0x40;
      *(undefined *)(iVar1 + 0xd) = 4;
      *(undefined *)(iVar1 + 0xe) = 0;
      *(uint *)(iVar1 + 0x128) = (uint)*(byte *)(param_1 + 0xb6) * 0x400 + -0x200;
      *(undefined4 *)(iVar1 + 300) = 0xfffffa80;
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x134) = 0x40;
      *(undefined2 *)(iVar1 + 0x138) = 0x24;
    }
    sub_0801CF00(param_1,0x1805);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)(&DAT_0885af38 +
                        (uint)*(byte *)(param_1 + 0xb5) * 4 +
                        (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) -
                        0x1800) * 8)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 7;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

