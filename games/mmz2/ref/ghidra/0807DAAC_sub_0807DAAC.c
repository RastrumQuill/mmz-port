// sub_0807DAAC at 0x0807DAAC (thumb)

undefined4 sub_0807DAAC(int param_1)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 in_lr;
  char acStack_10 [4];
  
  if ((*(uint *)(param_1 + 0x8c) & 0x204) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807DC54(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (bVar3 = *(byte *)(param_1 + 0xe), *(byte *)(param_1 + 0xe) = bVar3 + 1, 9 < bVar3)) {
    sub_080A623C(param_1,0,*(undefined *)(param_1 + 0x11),6);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  puVar4 = (undefined *)(param_1 + 0xbc);
  iVar5 = 8;
  do {
    puVar4[1] = *puVar4;
    puVar4 = puVar4 + -1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(undefined *)(param_1 + 0xb4) = *(undefined *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080EF3F0(acStack_10,&DAT_080ef7ac,4);
    if (*(char *)(param_1 + 0x10) == '\0') {
      bVar3 = acStack_10[*(byte *)(param_1 + 0x11)] + *(char *)(param_1 + 0x13);
      *(byte *)(param_1 + 0x13) = bVar3;
      if ((bVar3 & 0x7f) == 0) {
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        return in_lr;
      }
    }
    goto LAB_0807dbe0;
  }
  uVar2 = sub_080EEF64(((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + -0x1000) * 0x10
                       >> 0x10,(*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) * 0x10 >>
                               0x10);
  uVar2 = (int)((uVar2 & 0xffff) + 0x8000) >> 8 & 0xff;
  if (*(byte *)(param_1 + 0x13) < uVar2) {
    bVar3 = *(byte *)(param_1 + 0x13);
    if ((int)(uVar2 - bVar3) < 0x7f) {
      cVar1 = bVar3 + 2;
    }
    else {
LAB_0807dbdc:
      cVar1 = bVar3 - 2;
    }
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x13);
    if ((int)(bVar3 - uVar2) < 0x80) goto LAB_0807dbdc;
    cVar1 = bVar3 + 2;
  }
  *(char *)(param_1 + 0x13) = cVar1;
LAB_0807dbe0:
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x13);
  }
  else {
    *(char *)(param_1 + 0x24) = -*(char *)(param_1 + 0x13);
  }
  uVar2 = *(byte *)(param_1 + 0x13) + 0x80 & 0xff;
  iVar5 = (short)(&DAT_080ef450)[uVar2 + 0x40 & 0xff] * 0x180;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar5 >> 8);
  iVar5 = (short)(&DAT_080ef450)[uVar2] * 0x180;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar5 >> 8);
  return in_lr;
}

