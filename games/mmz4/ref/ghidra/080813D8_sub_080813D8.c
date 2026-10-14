// sub_080813D8 at 0x080813D8 (thumb)

undefined4 sub_080813D8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(char *)(param_1 + 0xd) == '\0') {
      sub_08005784(param_1 + 0x74,&DAT_0885afb0);
    }
    else {
      sub_08005784(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    *(int *)(&DAT_0885b1e0 +
                            (uint)*(byte *)(param_1 + 0xb5) * 4 +
                            (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70))
                            - 0x1700) * 8)));
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar1 = sub_08081B78(param_1);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

