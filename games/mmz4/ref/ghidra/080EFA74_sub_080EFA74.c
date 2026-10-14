// sub_080EFA74 at 0x080EFA74 (thumb)

undefined4 sub_080EFA74(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = (byte)(uVar4 * 2 >> 0x11) & 0x7f;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      local_14 = *(undefined4 *)(param_1 + 0x58);
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_18 = ((uVar4 * 2 >> 0x11 & 3) * 3 + 2) * 0x100 + *(int *)(param_1 + 0x54);
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 0x7f) + 0x1e;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080E38B8(&local_18,&UNK_088666cc + (uVar4 * 2 >> 0x11 & 1) * 0x1c,0,0);
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar3 = 2;
    break;
  case 2:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = (byte)(uVar4 * 2 >> 0x11) & 0x3f;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      uVar4 = (DAT_0202dc38 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 0x3f) + 0x1e;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080E38B8(param_1 + 0x54,&UNK_088666cc + (uVar4 * 2 >> 0x11 & 1) * 0x1c,0,0);
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar3 = 8;
    break;
  case 4:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = (byte)(uVar4 * 2 >> 0x11) & 0x7f;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      uVar4 = (DAT_0202dc38 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 0x7f) + 0x1e;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080E38B8(param_1 + 0x54,&UNK_08866704 + (uVar4 * 2 >> 0x11 & 1) * 0x1c,0,0);
    }
  default:
    goto switchD_080efa8a_caseD_6;
  }
  if ((bVar3 & bVar1) != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
switchD_080efa8a_caseD_6:
  return in_lr;
}

