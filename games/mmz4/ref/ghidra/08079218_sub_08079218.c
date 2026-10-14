// sub_08079218 at 0x08079218 (thumb)

undefined4 sub_08079218(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08859e98,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x807b349;
  iVar1 = DAT_0202ea30 + 0x4300;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = DAT_0202ea34 + -0x800;
  *(int *)(param_1 + 0xb4) = iVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xd5) = 0;
  *(undefined *)(param_1 + 0xd7) = 0;
  *(undefined *)(param_1 + 0xd9) = 0;
  *(undefined *)(param_1 + 0xd6) = 0;
  *(undefined *)(param_1 + 0xdb) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_080792DC(param_1);
  return in_lr;
}

