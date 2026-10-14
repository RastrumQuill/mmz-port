// sub_08080774 at 0x08080774 (thumb)

undefined4 sub_08080774(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x2d);
  }
  if (*(char *)(param_1 + 0xb7) == '\0') {
    if ((*(char *)(param_1 + 0xb4) == '\0') &&
       (uVar1 = *(uint *)(param_1 + 0x8c), (uVar1 & 0x200) == 0)) {
      if ((uVar1 & 1) != 0) {
        if (*(int *)(param_1 + 0x2c) == 0) {
          uVar2 = sub_0802AD94(0,param_1,&DAT_0885af70);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
        }
        if (*(char *)(param_1 + 0xd) != '\x02') {
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xf) = 0;
        }
      }
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885a870 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_08128884(param_1,*(undefined4 *)(&UNK_0885a87c + (uint)*(byte *)(param_1 + 0xd) * 4));
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08080E84(param_1);
  return in_lr;
}

