// sub_0806E100 at 0x0806E100 (thumb)

undefined4 sub_0806E100(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088590b8);
    cVar1 = sub_0810CD50(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(DAT_0202dbf0 + 0x54),
                         *(int *)(DAT_0202dbf0 + 0x58) + -0x1000);
    *(byte *)(param_1 + 0xc0) = cVar1 + 8U & 0xf0;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0xc1) = (byte)(uVar2 * 2 >> 0x11) & 1;
    *(undefined4 *)(param_1 + 100) = 0x11e;
    *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0xc1) * 2 + -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar3 = sub_08128954(*(undefined4 *)(param_1 + 100),0x16);
  if (iVar3 == 0) {
    sub_08002B10(0x139);
    sub_0801CF00(param_1,0xad01);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    iVar3 = FUN_081288bc(0x11e - *(int *)(param_1 + 100),0x16);
    sub_080BD568(param_1,&local_14,0,
                 *(int *)(param_1 + 0x68) * iVar3 * 0x10 + 0x80 + (uint)*(byte *)(param_1 + 0xc0) &
                 0xff);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_080E1C04(&local_14,1,0);
  }
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar3;
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

