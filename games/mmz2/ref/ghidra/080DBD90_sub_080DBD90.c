// sub_080DBD90 at 0x080DBD90 (thumb)

undefined4 sub_080DBD90(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char **)(param_1 + 0x28) == (char *)0x0) || (**(char **)(param_1 + 0x28) != '\x02')) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834bcec + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DBDD4(param_1);
  }
  return in_lr;
}

