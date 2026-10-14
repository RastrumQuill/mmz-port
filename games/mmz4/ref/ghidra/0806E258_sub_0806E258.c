// sub_0806E258 at 0x0806E258 (thumb)

undefined4 sub_0806E258(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088590b8);
    *(undefined4 *)(param_1 + 100) = 0x11e;
    *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0xc1) * -2 + 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar1 = sub_08128954(*(undefined4 *)(param_1 + 100),0x16);
  if (iVar1 == 0) {
    sub_08002B10(0x139);
    sub_0801CF00(param_1,0xad01);
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(undefined4 *)(param_1 + 0x58);
    iVar1 = FUN_081288bc(0x11e - *(int *)(param_1 + 100),0x16);
    sub_080BD568(param_1,&local_10,0,
                 *(int *)(param_1 + 0x68) * iVar1 * 0x10 + 0x80 + (uint)*(byte *)(param_1 + 0xc0) &
                 0xff);
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(undefined4 *)(param_1 + 0x58);
    sub_080E1C04(&local_10,1,0);
  }
  sub_0801CFF0(param_1);
  iVar1 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xe) = 4;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

