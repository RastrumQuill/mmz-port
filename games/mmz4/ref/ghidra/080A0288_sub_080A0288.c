// sub_080A0288 at 0x080A0288 (thumb)

undefined4 sub_080A0288(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080E0980(param_1 + 0x54,*(undefined *)(param_1 + 0x10),uVar5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0x8206);
    *(uint *)(param_1 + 0x5c) = (uVar5 * 2 + -1) * 0x80;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 3) + 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  local_1c = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (sVar2 = sub_08007C7C((uVar5 * 2 + -1) * 0xc00 + local_1c,local_18), sVar2 != 0)) {
    sub_08002B10(0x2a);
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080D0894(1,&local_1c);
    sub_080A0948(param_1);
    sub_0802AB70(4,4,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(int *)(param_1 + 0x54) = local_1c;
    *(int *)(param_1 + 0x58) = local_18;
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}

