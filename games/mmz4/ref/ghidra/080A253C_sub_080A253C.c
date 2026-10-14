// sub_080A253C at 0x080A253C (thumb)

undefined4 sub_080A253C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  local_18[0] = 0x40;
  local_18[1] = 0x20;
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_08005784(param_1 + 0x74,&DAT_0885e7ec);
    sub_0801CF00(param_1,0x8400);
    *(undefined4 *)(param_1 + 100) = local_18[bVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar2 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar2 = *(int *)(param_1 + 100) + -1;
      *(int *)(param_1 + 100) = iVar2;
      if (iVar2 == 0) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

