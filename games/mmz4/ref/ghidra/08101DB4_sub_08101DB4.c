// sub_08101DB4 at 0x08101DB4 (thumb)

undefined4 sub_08101DB4(int param_1)

{
  char cVar1;
  undefined uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(param_1 + 0xc0));
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 0x3f) + 0x1c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  sVar3 = sub_08007C7C(iVar5 + *(int *)(&DAT_08868678 +
                                       ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4)) * 0x100
                       ,*(int *)(param_1 + 0x58) + -0x800);
  if (sVar3 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0xb8);
    iVar6 = uVar4 * 0x100;
    iVar5 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
      if (iVar5 != iVar6 && (int)(iVar5 + uVar4 * -0x100) < 0 == SBORROW4(iVar5,iVar6))
      goto LAB_08101e56;
    }
    else if (iVar5 != iVar6 && (int)(iVar5 + uVar4 * -0x100) < 0 == SBORROW4(iVar5,iVar6))
    goto LAB_08101e56;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      if ((uVar4 * 2 >> 0x11 & 1) == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 0;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
LAB_08101e56:
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  return in_lr;
}

