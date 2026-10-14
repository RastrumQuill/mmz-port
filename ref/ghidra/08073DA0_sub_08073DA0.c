// sub_08073DA0 at 0x08073DA0 (thumb)

undefined4 sub_08073DA0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080033F0(param_1 + 0x6c,4);
    if (*(int *)(param_1 + 0xbc) < 0) {
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 1;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x1000) == 0) ||
       (cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40),
       cVar2 == '\0')) {
      cVar2 = '\n';
    }
    else {
      local_1c = *(int *)(param_1 + 0x4c);
      local_18 = *(int *)(param_1 + 0x50) + -0x1400;
      cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    }
    *(char *)(param_1 + 0xd) = cVar2;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
switchD_08073db6_caseD_1:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08073fee:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_08073db6_caseD_5:
    return in_lr;
  case 1:
  case 10:
    goto switchD_08073db6_caseD_1;
  case 2:
    sub_08048A54(param_1);
    sub_080033F0(param_1 + 0x6c,6);
    if (*(int *)(param_1 + 0xbc) < 0) {
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 1;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080884EC(param_1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    bVar1 = *(byte *)(param_1 + 0x12);
    iVar4 = (uint)*(byte *)(param_1 + 0x13) + (uint)(bVar1 >> 5);
    *(char *)(param_1 + 0x13) = (char)iVar4;
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x50) +
         ((int)(short)(&DAT_080c8e24)[iVar4 + (uint)*(byte *)(param_1 + 0x12)] -
         (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)]) * -10;
    if (*(int *)(param_1 + 0xbc) < 0) {
      *(byte *)(param_1 + 0x1f) = bVar1;
      local_1c = *(int *)(param_1 + 0x4c) +
                 ((int)(short)(&DAT_080c8e24)[iVar4 + (uint)*(byte *)(param_1 + 0x12) + 0x40] -
                 (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40]) * -10;
      *(int *)(param_1 + 0x4c) = local_1c;
      uVar3 = (uint)bVar1 + iVar4;
      *(char *)(param_1 + 0x12) = (char)uVar3;
      if ((uVar3 & 0xff) < 0x40) {
        return in_lr;
      }
      iVar4 = 0xa00;
    }
    else {
      *(byte *)(param_1 + 0x1f) = -1 - bVar1;
      local_1c = *(int *)(param_1 + 0x4c) +
                 ((int)(short)(&DAT_080c8e24)
                              [(uint)*(byte *)(param_1 + 0x13) + (uint)*(byte *)(param_1 + 0x12) +
                               0x40] - (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40]
                 ) * 10;
      *(int *)(param_1 + 0x4c) = local_1c;
      uVar3 = (uint)bVar1 + iVar4;
      *(char *)(param_1 + 0x12) = (char)uVar3;
      if ((uVar3 & 0xff) < 0x40) {
        return in_lr;
      }
      iVar4 = -0xa00;
    }
    local_1c = local_1c + iVar4;
    local_18 = *(undefined4 *)(param_1 + 0x50);
    sub_0808827C(1,&local_1c);
    sub_08001EAC(2);
    goto LAB_08073fee;
  case 4:
    break;
  default:
    goto switchD_08073db6_caseD_5;
  case 0xb:
    local_1c = *(int *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50) + -0xa00;
    sub_0808827C(1,&local_1c);
    local_18 = local_18 + -0xc00;
    sub_0808827C(2,&local_1c);
    sub_08001EAC(2);
    sub_08088534(param_1,&local_1c);
  }
  sub_08015698(4,param_1 + 0x4c);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,param_1 + 0x4c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

