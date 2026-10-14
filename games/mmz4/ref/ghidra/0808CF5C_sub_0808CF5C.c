// sub_0808CF5C at 0x0808CF5C (thumb)

undefined4 sub_0808CF5C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
        *(undefined *)(param_1 + 0x12) = 0x30;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar5;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < *(int *)(param_1 + 0x60)) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      sub_0808D930(param_1);
      sub_0801CFF0(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      pcVar7 = (char *)(param_1 + 0xc0);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x68) * (int)*pcVar7;
      *pcVar7 = -*pcVar7;
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      pbVar6 = (byte *)(param_1 + 0xc3);
      if (((uVar4 * 2 >> 0x11 & 1) == 0) && (*pbVar6 < 3)) {
        *pbVar6 = *pbVar6 + 1;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      *pbVar6 = 0;
      if ((DAT_0202cac0 & 0xf) == 1) {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_0885c400);
    sub_0801CF00(param_1,0x2501);
    *(int *)(param_1 + 100) = (int)*(char *)(param_1 + 0xc0) * *(int *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  sub_0808D930(param_1);
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

