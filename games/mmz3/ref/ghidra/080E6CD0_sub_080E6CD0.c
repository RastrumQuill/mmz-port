// sub_080E6CD0 at 0x080E6CD0 (thumb)

undefined4 sub_080E6CD0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xdf5) == '\0') {
    if ((int)((uint)*(ushort *)(*(int *)(*(int *)(param_1 + 0x28) + 0x64ac) + 0xc6) &
             1 << (uint)*(byte *)(param_1 + 0x10)) >> (uint)*(byte *)(param_1 + 0x10) == 0) {
      *(undefined *)(param_1 + 0x22) = 1;
      sub_0801749C(param_1);
      sub_08017700(param_1,*(undefined2 *)(&DAT_0836e898 + (uint)*(byte *)(param_1 + 0x10) * 2));
    }
    else {
      *(undefined *)(param_1 + 0x22) = 0;
      sub_0801749C(param_1);
      sub_08017700(param_1,*(undefined2 *)(&DAT_0836e898 + (uint)*(byte *)(param_1 + 0x10) * 2));
    }
    sub_080177F4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

