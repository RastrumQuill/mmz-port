// sub_0806E6E4 at 0x0806E6E4 (thumb)

undefined4 sub_0806E6E4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 in_lr;
  byte local_18 [3];
  byte bStack_15;
  int local_14;
  int local_10;
  
  sub_08128B5C(local_18,&DAT_08129204,3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0800249C(0x76,0x2a0);
    sub_08005784(param_1 + 0x74,&DAT_088590a0);
    *(undefined *)(param_1 + 0x12) = 3;
    *(uint *)(param_1 + 100) = (uint)local_18[0] * 0xf;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080025D8(0x76);
  if (*(int *)(param_1 + 100) < 1) {
    piVar5 = (int *)(param_1 + 200);
    if (*piVar5 != 0) {
      if (1 < *(byte *)(*piVar5 + 0xc)) {
        *piVar5 = 0;
      }
      if (*piVar5 != 0) {
        return in_lr;
      }
    }
    iVar2 = *(int *)(param_1 + 0x68) + -1;
    *(int *)(param_1 + 0x68) = iVar2;
    if (iVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else {
        *(uint *)(param_1 + 100) = (uint)(&bStack_15)[-(uint)*(byte *)(param_1 + 0x12)] * 0xf;
      }
    }
  }
  else {
    iVar2 = sub_08128954(*(int *)(param_1 + 100),(&bStack_15)[-(uint)*(byte *)(param_1 + 0x12)]);
    if (iVar2 == 0) {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      iVar2 = sub_08128A9C(uVar3 * 2 >> 0x11,0x16);
      uVar3 = (uint)(iVar2 << 0x18) >> 0x15;
      local_14 = *(int *)(param_1 + 0xbc) + *(int *)(&DAT_088590f0 + uVar3) + 0x6800;
      local_10 = *(int *)(param_1 + 0xb8) + *(int *)(&DAT_088590f4 + uVar3) + -0x3fff;
      sub_080A553C(param_1,&local_14,2,0);
    }
    iVar2 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar2;
    if (iVar2 == 0) {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      iVar2 = sub_08128A9C(uVar3 * 2 >> 0x11,0x16);
      uVar3 = (uint)(iVar2 << 0x18) >> 0x15;
      local_14 = *(int *)(param_1 + 0xbc) + *(int *)(&DAT_088590f0 + uVar3) + 0x6800;
      local_10 = *(int *)(param_1 + 0xb8) + *(int *)(&DAT_088590f4 + uVar3) + -0x3fff;
      uVar4 = sub_080A553C(param_1,&local_14,0,0);
      *(undefined4 *)(param_1 + 200) = uVar4;
      *(undefined4 *)(param_1 + 0x68) = 0x50;
    }
  }
  return in_lr;
}

