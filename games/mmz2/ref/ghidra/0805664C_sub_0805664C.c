// sub_0805664C at 0x0805664C (thumb)

undefined4 sub_0805664C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x24) = 0;
    iVar5 = *(int *)(DAT_0202e130 + 0x54);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar6 = *(int *)(param_1 + 0xb8) + 0x1400;
    iVar2 = *(int *)(param_1 + 0xb8) + 0xbbff;
    if (iVar5 < iVar6) {
      *(int *)(param_1 + 0x54) = iVar6;
    }
    else if (iVar2 < iVar5) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + -0xd000;
    *(undefined4 *)(param_1 + 0x60) = 0x240;
    cVar1 = sub_08057A70(param_1);
    if (cVar1 != '\0') {
      sub_080032EC(0xec);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      for (uVar3 = (uVar3 * 2 >> 0x11 & 1) + 7; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        local_24 = *(int *)(param_1 + 0x54) + ((uVar4 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
        uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        local_20 = *(int *)(param_1 + 0xbc) + (uVar4 * 2 >> 0x11 & 0xf) * 0x100 + -0x7f00;
        sub_080B61B4(param_1,&local_24,1,0);
      }
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 0xbc) <= *(int *)(param_1 + 0x58) + 0x1400) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + -0x1400;
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

